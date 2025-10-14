Perfect — this is a classic **CPU Scheduling** assignment question.
Let’s carefully solve it **step by step** for all three algorithms: **SRTF**, **SJF**, and **Round Robin (q=2)**.

---

## Given Data

| Job | Arrival Time | Run Time |
| --- | ------------ | -------- |
| A   | 0            | 4        |
| B   | 2            | 5        |
| C   | 3            | 6        |
| D   | 5            | 5        |

---

## (a) SRTF — *Shortest Remaining Time First*

SRTF is a **preemptive** version of SJF. The CPU always executes the process with the **shortest remaining time** among those that have **arrived**.

Let’s go **time unit by time unit**:

| Time  | Process Running                                             | Comments                           |
| ----- | ----------------------------------------------------------- | ---------------------------------- |
| 0–2   | **A**                                                       | A(remaining=2) when B arrives at 2 |
| 2–3   | **A** (A=1 left), B arrives (5), C not yet arrived          |                                    |
| 3     | C arrives (6). Remaining: A=1, B=5, C=6 → shortest is A     |                                    |
| 3–4   | **A completes**                                             |                                    |
| 4–5   | Ready: B(5), C(6) → choose B (shorter). D not yet arrived   |                                    |
| 5     | D arrives (5). Now B(4 left), C(6), D(5) → B still shortest |                                    |
| 5–9   | **B completes**                                             |                                    |
| 9     | Remaining: C(6), D(5) → D shorter                           |                                    |
| 9–14  | **D completes**                                             |                                    |
| 14–20 | **C completes**                                             |                                    |

✅ **Completion Times**

| Job | Arrival | Run | Completion | Turnaround (CT–AT) | Waiting (TAT–Run) |
| --- | ------- | --- | ---------- | ------------------ | ----------------- |
| A   | 0       | 4   | 4          | 4                  | 0                 |
| B   | 2       | 5   | 9          | 7                  | 2                 |
| C   | 3       | 6   | 20         | 17                 | 11                |
| D   | 5       | 5   | 14         | 9                  | 4                 |

**Average Turnaround Time = (4+7+17+9)/4 = 37/4 = 9.25**
**Average Waiting Time = (0+2+11+4)/4 = 17/4 = 4.25**

---

## (b) SJF — *Shortest Job First (Non-Preemptive)*

We schedule the job that has the **shortest burst time** among the ones **available** at the moment the CPU becomes free.

### Step-by-step:

1. **At t=0**, only A is available → run A till completion (0–4)
2. **At t=4**, available: B(5), C(6), D(5 at 5 not yet arrived) → pick **B**
3. **B runs 4–9**, during that time D arrives at 5, but CPU stays with B (non-preemptive)
4. **At t=9**, remaining: C(6), D(5) → choose **D** (shorter)
5. **D runs 9–14**
6. **Finally, C runs 14–20**

✅ **Completion Times**

| Job | Arrival | Run | Completion | Turnaround | Waiting |
| --- | ------- | --- | ---------- | ---------- | ------- |
| A   | 0       | 4   | 4          | 4          | 0       |
| B   | 2       | 5   | 9          | 7          | 2       |
| D   | 5       | 5   | 14         | 9          | 4       |
| C   | 3       | 6   | 20         | 17         | 11      |

**Average Turnaround = (4+7+9+17)/4 = 37/4 = 9.25**
**Average Waiting = (0+2+4+11)/4 = 17/4 = 4.25**

➡️ Interestingly, **SJF and SRTF** give the *same results* for this data (because preemption didn’t change the order).

---

## (c) Round Robin (Quantum = 2)

We’ll simulate time slices of 2 units.

### Step-by-step Gantt chart simulation:

| Time  | Process | Remaining                      | Notes          |
| ----- | ------- | ------------------------------ | -------------- |
| 0–2   | A       | 2 left                         | B arrives at 2 |
| 2–4   | B       | 3 left                         | C arrives at 3 |
| 4–6   | A       | done                           | D arrives at 5 |
| 6–8   | C       | 4 left                         |                |
| 8–10  | D       | 3 left                         |                |
| 10–12 | B       | 1 left                         |                |
| 12–14 | C       | 2 left                         |                |
| 14–15 | B       | done (1 unit left from before) |                |
| 15–17 | D       | 1 left                         |                |
| 17–19 | C       | done                           |                |
| 19–20 | D       | done                           |                |

✅ **Completion Times**

| Job | Arrival | Run | Completion | Turnaround | Waiting |
| --- | ------- | --- | ---------- | ---------- | ------- |
| A   | 0       | 4   | 6          | 6          | 2       |
| B   | 2       | 5   | 15         | 13         | 8       |
| C   | 3       | 6   | 19         | 16         | 10      |
| D   | 5       | 5   | 20         | 15         | 10      |

**Average Turnaround = (6+13+16+15)/4 = 50/4 = 12.5**
**Average Waiting = (2+8+10+10)/4 = 30/4 = 7.5**

---

## ✅ Final Summary Table

| Method       | Completion Times (A,B,C,D) | Avg Turnaround | Avg Waiting |
| ------------ | -------------------------- | -------------- | ----------- |
| **SRTF**     | 4, 9, 20, 14               | 9.25           | 4.25        |
| **SJF**      | 4, 9, 20, 14               | 9.25           | 4.25        |
| **RR (q=2)** | 6, 15, 19, 20              | 12.5           | 7.5         |

---

Would you like me to create a **Gantt chart diagram** for each method (for easy inclusion in your IGNOU assignment)?

