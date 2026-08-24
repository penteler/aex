## 1(a) Explain the basic working principle of optical fiber communication. How does light propagation differ in various types of optical fibers?

### Basic Working Principle of Optical Fiber Communication

**Optical fiber communication** is a method of transmitting information from one point to another in the form of **light pulses through an optical fiber**.

The basic process is:

1. **Information source:** Electrical information such as voice, video, or data is generated.
2. **Optical transmitter:** An LED or laser diode converts the electrical signal into **light signals**.
3. **Optical fiber:** The light travels through the fiber core by the principle of **total internal reflection (TIR)**.
4. **Optical receiver:** A photodiode converts the received light signal back into an electrical signal.
5. **Output:** The recovered electrical signal is processed and delivered to the destination.

### Light Propagation in Different Types of Optical Fiber

| Type                             | Light propagation                                                                                                                                    | Main characteristics                                                                |
| -------------------------------- | ---------------------------------------------------------------------------------------------------------------------------------------------------- | ----------------------------------------------------------------------------------- |
| **Single-mode fiber**            | Only one propagation mode travels through the core.                                                                                                  | Very low modal dispersion; suitable for long-distance and high-speed communication. |
| **Multimode step-index fiber**   | Many modes travel through the core, following different paths with abrupt changes in refractive index at the core-cladding boundary.                 | High modal dispersion; generally used for shorter distances.                        |
| **Multimode graded-index fiber** | Many modes travel through the core, but the refractive index gradually decreases from the centre outward, causing light rays to follow curved paths. | Lower modal dispersion than step-index fiber; suitable for moderate distances.      |

Thus, **single-mode fiber provides the least modal dispersion**, while multimode fibers allow multiple light paths and therefore experience greater modal dispersion.

---

# 1(b) Describe the TCP/IP reference model. Explain the responsibilities of each layer and mention at least two commonly used protocols associated with every layer.

The **TCP/IP reference model** is a layered architecture used for communication over the Internet. The commonly described model has **four layers**.

| Layer                           | Main responsibilities                                                                                                | Examples of protocols             |
| ------------------------------- | -------------------------------------------------------------------------------------------------------------------- | --------------------------------- |
| **Application Layer**           | Provides network services directly to user applications, including web access, email and file transfer.              | **HTTP/HTTPS, FTP, DNS, SMTP**    |
| **Transport Layer**             | Provides end-to-end communication, segmentation, flow control, error control and, when required, reliable delivery.  | **TCP, UDP**                      |
| **Internet Layer**              | Handles logical addressing, routing and delivery of packets between different networks.                              | **IP (IPv4/IPv6), ICMP**          |
| **Network Access / Link Layer** | Handles framing, MAC addressing, access to the physical medium and transmission of frames over a particular network. | **Ethernet, Wi-Fi (IEEE 802.11)** |

### Layer Functions

**1. Application Layer:**
Acts as the interface between network applications and the communication system. It supports services such as web browsing, email, name resolution and file transfer.

**2. Transport Layer:**
Provides process-to-process communication. **TCP** provides reliable, connection-oriented communication, while **UDP** provides connectionless communication with lower overhead.

**3. Internet Layer:**
Responsible for moving packets between networks using logical IP addresses. Routers primarily operate at this layer.

**4. Network Access/Link Layer:**
Controls how packets are placed into frames and transmitted over the local physical network.

---

# 2(a) What is meant by routing instability in computer networks? Explain how incorrect routing information can spread among routers with the help of an example.

### Routing Instability

**Routing instability** is a condition in which routers repeatedly change their routing information because of incorrect, inconsistent, or rapidly changing network information.

It can cause:

* Frequent changes in routing tables.
* Packets following incorrect paths.
* Routing loops.
* Increased network overhead.
* Packet loss and delays.

### Example: Count-to-Infinity Problem

Consider three routers:

**A — B — C**

Suppose network **N** is connected to router **A**.

Initially:

* A knows that N is directly connected.
* B learns from A that N is reachable through A.
* C learns from B that N is reachable through B.

Now suppose the link between **A and N fails**.

If B has not yet learned about the failure, B may continue advertising to C that N is reachable through B. C may then advertise to B that it can reach N through C.

The routers can therefore incorrectly believe that the destination is still reachable:

**B → C → B → C → ...**

In distance-vector routing, the metric may repeatedly increase:

**2 → 3 → 4 → 5 → ...**

This phenomenon is called the **count-to-infinity problem**.

Therefore, incorrect routing information can propagate between neighbouring routers before the network converges to the correct routing state.

---

# 2(b) Define modulation in data communication. Explain angle-based modulation techniques and discuss any two challenges associated with their use.

### Modulation

**Modulation** is the process of varying a property of a carrier signal according to the information signal so that the information can be transmitted effectively over a communication channel.

In **angle modulation**, the **amplitude of the carrier remains essentially constant**, while its angle is varied.

The two major angle-based modulation techniques are:

### 1. Frequency Modulation (FM)

In **FM**, the **frequency of the carrier** is varied according to the instantaneous amplitude of the message signal, while the carrier amplitude remains constant.

A higher message amplitude causes a greater change in carrier frequency.

**Advantages:**

* Good resistance to amplitude noise.
* Constant-amplitude signal allows efficient power amplification.

### 2. Phase Modulation (PM)

In **PM**, the **phase of the carrier** is varied according to the instantaneous value of the message signal.

Changes in the message signal therefore produce corresponding changes in the carrier phase.

### Challenges of Angle Modulation

**1. Larger Bandwidth Requirement:**
FM, particularly when a large frequency deviation is used, can require significantly more bandwidth than amplitude-based modulation.

**2. Greater Circuit Complexity:**
Generating, detecting and demodulating FM/PM signals generally requires more sophisticated circuits than simple amplitude modulation.

---

# 3(a) A data stream 10101101 is to be transmitted using CRC. The generator polynomial is x³ + x + 1. Calculate the CRC bits and write the final transmitted frame. Show all intermediate steps.

Given:

* **Data = 10101101**
* Generator polynomial = (x^3+x+1)

The generator has degree **3**, so append **3 zeros** to the data.

### Step 1: Append zeros

[
10101101 \rightarrow 10101101000
]

Generator:

[
x^3+x+1 = 1011
]

### Step 2: Perform modulo-2 division

Divide **10101101000** by **1011** using XOR operations.

```text
10101101000
10110000000
-----------
00011101000

00011101000
00010110000
-----------
00001011000

00001011000
00001011000
-----------
00000000000
```

The remainder is:

[
\boxed{000}
]

### Step 3: CRC Bits

Therefore,

[
\boxed{\text{CRC} = 000}
]

### Step 4: Final Transmitted Frame

Append the CRC bits to the original data:

[
10101101 + 000
]

Therefore, the final transmitted frame is:

[
\boxed{10101101000}
]

---

# 3(b) Explain the concept of a self-organizing wireless network. Why are such networks useful in situations where fixed infrastructure is unavailable?

A **self-organizing wireless network** is a wireless network in which devices can automatically **discover one another, establish communication paths, organize the network, and adapt to changes** without depending on permanent infrastructure such as fixed access points or centralized routers.

A common example is a **mobile ad hoc network (MANET)**.

### Characteristics

* Nodes communicate wirelessly.
* Nodes can move freely.
* Network topology can change frequently.
* Nodes may act as both **hosts and routers**.
* Routes can be established and modified dynamically.
* The network can operate without fixed infrastructure.

### Why Such Networks Are Useful

Self-organizing networks are particularly useful when fixed communication infrastructure is unavailable or damaged, such as:

* **Disaster and emergency situations**
* **Military and battlefield communication**
* **Remote or rural areas**
* **Temporary events or field operations**
* **Search-and-rescue operations**

For example, after an earthquake, existing communication infrastructure may be damaged. Rescue workers' wireless devices can automatically form a network and relay messages through one another without requiring a fixed cellular tower.

---

# 4(a) What role does ICMP play in IP-based networks? Classify ICMP messages and explain their importance with suitable examples.

### Role of ICMP

**ICMP (Internet Control Message Protocol)** is used by IP networks to communicate **control information, error conditions, and diagnostic information**.

ICMP does not normally carry application data. Instead, it helps network devices and hosts report problems related to the delivery of IP packets.

### Classification of ICMP Messages

ICMP messages can broadly be classified into the following categories:

### 1. Error-Reporting Messages

These messages report problems encountered while processing or delivering an IP packet.

Examples include:

* **Destination Unreachable** – indicates that a destination or service cannot be reached.
* **Time Exceeded** – indicates that a packet's TTL has expired.
* **Redirect** – informs a host about a potentially better next-hop route.
* **Parameter Problem** – indicates an invalid or problematic field in an IP packet.

**Example:**
If a router cannot deliver a packet because the destination network is unreachable, it may send a **Destination Unreachable** ICMP message back to the source.

### 2. Query/Informational Messages

These messages are used for diagnostics or obtaining information.

Examples:

* **Echo Request**
* **Echo Reply**

The **ping** utility uses ICMP Echo Request and Echo Reply messages to test whether a destination is reachable and to measure round-trip time.

### Importance of ICMP

ICMP is important because it:

* Helps identify network connectivity problems.
* Provides feedback about packet-delivery failures.
* Supports network diagnostic tools such as **ping**.
* Helps diagnose routing and TTL-related problems, including those observed by **traceroute**.

---

# 4(b) Define a Network Interface Card (NIC). Explain how modern NICs handle data transmission efficiently between memory and the network medium.

### Network Interface Card (NIC)

A **Network Interface Card (NIC)** is a hardware component that provides a computer or other device with an interface for connecting to a network. It converts data between the format used by the computer and the signaling/frame format used by the network medium.

A NIC may provide a **wired Ethernet** or **wireless Wi-Fi** interface.

### Efficient Data Transmission by Modern NICs

Modern NICs use several mechanisms to transfer data efficiently between **main memory and the network medium**.

#### 1. Direct Memory Access (DMA)

NICs commonly use **DMA** to transfer packets directly between the NIC and system memory without requiring the CPU to copy every byte.

This reduces CPU overhead and improves throughput.

#### 2. Transmit and Receive Buffers

The NIC maintains **buffers/descriptors** for packets waiting to be transmitted or received. This allows the computer and network interface to operate asynchronously.

#### 3. Interrupts and Interrupt Moderation

When packets arrive, the NIC can notify the CPU using interrupts. Modern NICs may use **interrupt moderation** to process several packets per interrupt, reducing the number of CPU interruptions.

#### 4. Offloading

Many NICs can perform certain networking operations in hardware, such as:

* TCP/UDP checksum calculation
* TCP segmentation offload
* Receive-side processing

This reduces the processing burden on the CPU.

#### 5. High-Speed Interfaces and Parallel Processing

Modern NICs support high-speed links and may use multiple queues and processing cores to handle large numbers of packets efficiently.

Thus, modern NICs improve network performance by combining **DMA, buffering, interrupt management, hardware offloading, and multiple processing queues**.

# 5(a) Cryptographic Hash Functions

**Question:**
**Explain the purpose of cryptographic hash functions. Describe the main stages involved in generating a message digest using a standard hashing algorithm.**

### Cryptographic Hash Functions

A **cryptographic hash function** is a mathematical function that converts input data of arbitrary length into a **fixed-length output**, called a **hash value, hash code, or message digest**.

For example, a long file or message can be converted into a short fixed-size digest.

### Purpose of Cryptographic Hash Functions

Cryptographic hash functions are used for:

1. **Data integrity** – A change in the original message produces a different hash value.
2. **Password protection** – Passwords can be stored as hashes rather than plain text.
3. **Digital signatures** – The hash of a message can be digitally signed instead of signing the entire message.
4. **Message authentication** – Hashes can be used as part of authentication mechanisms.
5. **File verification** – A downloaded file can be checked against its expected hash.

Important properties include **one-way computation, collision resistance, and sensitivity to changes in the input**.

### Main Stages in Generating a Message Digest

Although the exact procedure differs between algorithms such as SHA-256 and SHA-3, a typical iterative hash algorithm involves:

1. **Input the message**
   The original message of arbitrary length is supplied to the hash algorithm.

2. **Padding**
   Extra bits are added so that the message meets the algorithm's required block size. Padding generally also incorporates information about the original message length.

3. **Divide into blocks**
   The padded message is divided into fixed-size blocks.

4. **Initialize internal state**
   The algorithm starts with predefined initial values or an initial internal state.

5. **Process the blocks**
   Each block is processed through a series of mathematical operations such as logical functions, bit rotations, modular arithmetic, and mixing operations. The internal state is updated after each block.

6. **Produce the final digest**
   After all blocks have been processed, the final internal state is converted into the **fixed-length message digest**.

Thus, even a very small change in the original message should result in a substantially different digest.

---

# 5(b) Hub and Switch

**Question:**
**Differentiate between a hub and a switch. Also explain how switching decisions differ between Layer-2 switches and Layer-3 switches.**

### Hub vs Switch

| Basis                | Hub                                                           | Switch                                                     |
| -------------------- | ------------------------------------------------------------- | ---------------------------------------------------------- |
| **Operating layer**  | Mainly Physical Layer (Layer 1)                               | Usually Data Link Layer (Layer 2)                          |
| **Forwarding**       | Sends incoming signal to all other ports                      | Sends frames only toward the appropriate destination port  |
| **Address learning** | Does not learn MAC addresses                                  | Learns MAC addresses                                       |
| **Collisions**       | More likely because all ports share the same collision domain | Each switched port can provide a separate collision domain |
| **Efficiency**       | Less efficient                                                | More efficient                                             |
| **Security**         | Lower                                                         | Better traffic isolation than a hub                        |
| **Duplex**           | Typically half-duplex                                         | Commonly supports full-duplex operation                    |

### Layer-2 Switch

A **Layer-2 switch** makes forwarding decisions using **MAC addresses**.

It learns which MAC address is associated with each port and stores this information in a MAC address table.

**Example:**
If a frame is destined for MAC address `A`, the switch checks its MAC table and forwards the frame through the port associated with `A`.

### Layer-3 Switch

A **Layer-3 switch** can perform routing using **IP addresses**, in addition to Layer-2 switching.

It can therefore make forwarding decisions between **different IP subnets/VLANs**.

**In short:**

* **Layer-2 switch → MAC address → switching within a LAN/VLAN**
* **Layer-3 switch → IP address → routing between networks/subnets**

---

# 6(a) POP3 and IMAP4

**Question:**
**Compare POP3 and IMAP4 in terms of message storage, synchronization, and client support. Which protocol is more suitable for multi-device access and why?**

**POP3 (Post Office Protocol version 3)** and **IMAP4 (Internet Message Access Protocol version 4)** are protocols used by email clients to access messages from mail servers.

| Feature              | POP3                                                                                     | IMAP4                                                                                      |
| -------------------- | ---------------------------------------------------------------------------------------- | ------------------------------------------------------------------------------------------ |
| **Message storage**  | Traditionally downloads messages to the client; server copies may optionally be retained | Messages normally remain stored on the server                                              |
| **Synchronization**  | Limited synchronization                                                                  | Provides extensive synchronization between server and clients                              |
| **Multiple devices** | Less suitable                                                                            | Highly suitable                                                                            |
| **Folders**          | Limited server-side folder management                                                    | Supports server-side folders/mailboxes                                                     |
| **Message status**   | Less consistent across devices                                                           | Read/unread and other states can synchronize                                               |
| **Internet usage**   | Can work conveniently when messages are downloaded locally                               | Requires more interaction with the server, although modern clients support offline caching |
| **Typical use**      | Single-device or download-oriented access                                                | Multi-device and server-based email access                                                 |

### Which is Better for Multiple Devices?

**IMAP4 is more suitable for multi-device access.**

This is because messages remain primarily on the server and actions such as **reading, deleting, moving, and organizing messages** can be synchronized across multiple devices.

For example, if an email is read on a phone, its read status can be reflected when the same account is opened on a laptop.

---

# 6(b) RSA Key Generation

**Question:**
**In a public key cryptosystem, two prime numbers are selected as p = 7 and q = 11. Calculate the public key and private key using the RSA approach.**

Given:

[
p=7,\qquad q=11
]

### Step 1: Calculate (n)

[
n=pq
]

[
n=7\times11=77
]

### Step 2: Calculate Euler's Totient

[
\phi(n)=(p-1)(q-1)
]

[
\phi(77)=6\times10=60
]

### Step 3: Choose Public Exponent (e)

We need:

[
1<e<60
]

and

[
\gcd(e,60)=1
]

Choose:

[
e=7
]

Since (\gcd(7,60)=1), it is valid.

### Step 4: Calculate Private Exponent (d)

We need:

[
ed\equiv1\pmod{60}
]

Therefore:

[
7d\equiv1\pmod{60}
]

Since:

[
7\times43=301=5(60)+1
]

we get:

[
d=43
]

### Keys

**Public Key:**

[
\boxed{(e,n)=(7,77)}
]

**Private Key:**

[
\boxed{(d,n)=(43,77)}
]

> Note: RSA permits other valid choices of (e), so the private exponent can also differ depending on the selected public exponent. The above is one valid key pair.

---

# 7(a) Contention-Based and Controlled Access Methods

**Question:**
**Compare contention-based access methods with controlled access methods in local area networks. Highlight their advantages and limitations.**

### Contention-Based Access

In contention-based methods, devices **compete for access** to a shared communication medium.

Examples:

* **CSMA/CD** – traditionally used in shared Ethernet.
* **CSMA/CA** – used in wireless LANs.

### Controlled Access

In controlled access methods, devices are given access to the medium according to a **defined control mechanism**, rather than all competing simultaneously.

Examples:

* **Polling**
* **Token passing**

### Comparison

| Basis           | Contention-Based                              | Controlled Access                                  |
| --------------- | --------------------------------------------- | -------------------------------------------------- |
| **Access**      | Devices compete for the channel               | Access is controlled/organized                     |
| **Collisions**  | Possible                                      | Generally avoided                                  |
| **Delay**       | Can increase under heavy traffic              | More predictable                                   |
| **Efficiency**  | Good under light traffic                      | Can be better under heavy traffic                  |
| **Complexity**  | Relatively simple                             | More control overhead                              |
| **Scalability** | Performance may degrade with heavy contention | More predictable but coordination can add overhead |

### Advantages and Limitations

**Contention-Based:**

**Advantages:**

* Simple to implement.
* Efficient when traffic is light.
* No central controller is necessarily required.

**Limitations:**

* Collisions/contention can reduce performance.
* Delay becomes unpredictable when traffic is heavy.

**Controlled Access:**

**Advantages:**

* Avoids or greatly reduces collisions.
* Provides more predictable access and delay.
* Useful when traffic is heavy or predictable access is important.

**Limitations:**

* Requires additional control mechanisms.
* Polling or token management creates overhead.
* Failure of a controlling mechanism or token can affect communication, depending on the design.

---

# 7(b) Round-Robin Scheduling

**Question:**
**Explain the round-robin scheduling technique used in data transmission. How does it differ from polling-based access control?**

### Round-Robin Scheduling

**Round-robin scheduling** is a method in which transmission opportunities are assigned to devices in a **fixed circular order**.

For example, with four devices:

[
A\rightarrow B\rightarrow C\rightarrow D\rightarrow A\rightarrow B\rightarrow\cdots
]

Each device receives an opportunity to transmit during its turn.

If a device has no data to send, the system may skip it and move to the next device, depending on the implementation.

### Advantages

* Fair sharing of the communication medium.
* Prevents one device from continuously dominating the channel.
* Provides predictable access opportunities.
* Useful where multiple devices have regular transmission requirements.

### Round-Robin vs Polling

| Basis            | Round-Robin                                | Polling                                   |
| ---------------- | ------------------------------------------ | ----------------------------------------- |
| **Access order** | Usually follows a fixed circular sequence  | A controller decides which device to ask  |
| **Control**      | Can follow a predetermined schedule        | Requires a polling controller/coordinator |
| **Flexibility**  | Less flexible if traffic priorities change | Controller can change the polling order   |
| **Overhead**     | Relatively predictable                     | Polling messages create control overhead  |
| **Fairness**     | Naturally provides cyclic fairness         | Depends on polling strategy               |

**In short:** Round-robin gives devices turns in a **cyclic order**, whereas polling involves a **controller actively asking devices whether they need to transmit**.

---

# 8(a) Distance-Based Routing Algorithms

**Question:**
**Describe the working principle of distance-based routing algorithms. What are the major drawbacks of such routing methods in large networks?**

### Distance-Based Routing

Distance-based routing algorithms, commonly represented by **distance-vector routing**, determine the best route based on a **distance/metric** to each destination.

Each router maintains a routing table containing information such as:

* Destination network
* Distance or cost
* Next hop

A router exchanges routing information with neighbouring routers and updates its table when it learns of a better route.

### Working Principle

Suppose:

[
A \rightarrow B \rightarrow C
]

If A knows that C is reachable through B with a certain cost, it can use B as the **next hop** toward C.

Routers repeatedly exchange distance information with neighbours until their routing tables **converge**.

A common distance-vector algorithm is **Bellman-Ford**.

### Drawbacks in Large Networks

1. **Slow convergence**
   Large networks may take considerable time to reach a stable routing state after a topology change.

2. **Routing loops**
   Incorrect information can cause packets to circulate between routers.

3. **Count-to-infinity problem**
   Routers may gradually increase their estimated distance to an unreachable destination.

4. **High control traffic**
   Frequent exchange of routing information can consume bandwidth.

5. **Limited network-wide knowledge**
   A router generally relies on information received from neighbours rather than having a complete view of the network topology.

6. **Scalability problems**
   These limitations make basic distance-vector approaches less suitable for very large networks.

---

# 8(b) Quality of Service (QoS)

**Question:**
**Define Quality of Service (QoS) in networking. Explain any three techniques used by networks to ensure better QoS for real-time applications.**

### Definition of QoS

**Quality of Service (QoS)** refers to techniques used to manage network traffic so that applications receive appropriate levels of **bandwidth, delay, jitter, and packet-loss performance**.

QoS is particularly important for real-time applications such as:

* Voice over IP (VoIP)
* Video conferencing
* Live streaming
* Online interactive applications

### Three QoS Techniques

### 1. Traffic Classification and Prioritization

Network traffic is classified according to its application, source, destination, or other characteristics.

Real-time traffic such as voice can then be given **higher priority** than less time-sensitive traffic.

**Benefit:** Reduces delay for important real-time packets.

### 2. Traffic Shaping

**Traffic shaping** controls the rate at which packets enter the network.

It smooths bursts of traffic and helps prevent network congestion.

Common approaches include **leaky-bucket** and **token-bucket** mechanisms.

**Benefit:** Reduces congestion and helps maintain predictable traffic flow.

### 3. Queue Management and Scheduling

Routers maintain queues when packets cannot be transmitted immediately. Scheduling mechanisms determine **which packet should be transmitted next**.

Examples include:

* Priority Queuing
* Weighted Fair Queuing (WFQ)

Real-time traffic can receive preferential treatment.

**Benefit:** Helps control delay and jitter for time-sensitive applications.

### Other QoS Measures

Other techniques include **resource reservation, admission control, congestion management, and traffic policing**.

Thus, QoS improves the performance of real-time applications by managing **bandwidth, delay, jitter, and packet loss** according to application requirements.

