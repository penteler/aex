Exactly. Your observation about **Programme vs Course** is correct from a real database-design perspective. The question paper's schema is the authority for the exam, though, so you work with what they give you.

And yes: based only on those two papers, you've covered a **useful but fairly narrow slice of SQL**. If your exam is tomorrow, I would *not* try to learn all of DBMS from scratch. I'd make a high-yield checklist of what could reasonably appear around these questions.

## 1. What you've already covered

You're already comfortable with:

* `CREATE TABLE`
* Data types: `INTEGER`, `VARCHAR`, `DATE`, `DECIMAL`
* `PRIMARY KEY`
* `FOREIGN KEY`
* `INSERT`
* `SELECT`
* `WHERE`
* Comparison operators: `>`, `<`, `=`, etc.
* `COUNT()`
* `AVG()`
* `LIKE`
* `UPDATE`
* `JOIN`
* `NULL` / `IS NULL` / `IS NOT NULL`
* Table relationships
* Basic one-to-many relationships

That's a decent foundation.

---

# 2. The biggest things you haven't encountered yet

I'd prioritize these:

### A. Other aggregate functions

You've seen:

```sql
COUNT()
AVG()
```

Also know:

```sql
SUM()
MIN()
MAX()
```

For example:

```sql
SELECT SUM(Credits) AS TotalCredits
FROM Courses;
```

```sql
SELECT MAX(Price) AS HighestPrice
FROM Books;
```

```sql
SELECT MIN(Price) AS LowestPrice
FROM Books;
```

---

# 3. `GROUP BY`

This is **very important** and a natural next step after `COUNT`, `AVG`, etc.

Suppose:

| Course | Student  |
| ------ | -------- |
| BCA    | Shyam    |
| BCA    | Parveen  |
| BCA    | Satinder |
| MCA    | Ravi     |
| MCA    | Radha    |

You could ask:

> How many students are in each course?

```sql
SELECT Course, COUNT(*) AS NumberOfStudents
FROM Students
GROUP BY Course;
```

Result:

| Course | NumberOfStudents |
| ------ | ---------------: |
| BCA    |                3 |
| MCA    |                2 |

Think:

```text
WHERE     → filter individual rows
GROUP BY  → put rows into groups
COUNT     → calculate something about each group
```

---

# 4. `HAVING`

`HAVING` is commonly paired with `GROUP BY`.

For example:

> Display courses having more than 2 students.

```sql
SELECT Course, COUNT(*) AS NumberOfStudents
FROM Students
GROUP BY Course
HAVING COUNT(*) > 2;
```

This is an important distinction:

```text
WHERE  → filters rows BEFORE grouping
HAVING → filters groups AFTER grouping
```

Remember that.

---

# 5. `ORDER BY`

Very likely exam material.

> Display books from highest price to lowest.

```sql
SELECT Title, Price
FROM Books
ORDER BY Price DESC;
```

Ascending:

```sql
ORDER BY Price ASC;
```

Descending:

```sql
ORDER BY Price DESC;
```

You can also sort by multiple columns:

```sql
SELECT *
FROM Students
ORDER BY Course ASC, StudentName ASC;
```

---

# 6. `DISTINCT`

You've seen `COUNT`, but you may be asked for unique values.

```sql
SELECT DISTINCT Course
FROM Students;
```

Instead of:

```text
BCA
BCA
BCA
MCA
MCA
```

you get:

```text
BCA
MCA
```

And:

```sql
SELECT COUNT(DISTINCT Course)
FROM Students;
```

would tell you how many different courses there are.

---

# 7. `IN`

Instead of:

```sql
WHERE Course = 'BCA'
   OR Course = 'MCA'
```

you can write:

```sql
WHERE Course IN ('BCA', 'MCA');
```

Very useful.

---

# 8. `BETWEEN`

For ranges:

```sql
SELECT *
FROM Books
WHERE Price BETWEEN 400 AND 600;
```

Be aware that `BETWEEN` is generally **inclusive**:

```text
400 ≤ Price ≤ 600
```

---

# 9. More `LIKE` patterns

You've seen:

```sql
LIKE '%Programming%'
```

Know these:

```sql
LIKE 'C%'
```

Starts with C.

```sql
LIKE '%ing'
```

Ends with `ing`.

```sql
LIKE '%data%'
```

Contains `data`.

And `_` means one character:

```sql
LIKE 'C___'
```

would match a four-character string beginning with `C`.

---

# 10. `DELETE`

You've learned `UPDATE`, so know its dangerous cousin:

```sql
DELETE FROM Students
WHERE StudentID = 15;
```

This removes a row.

And be **very** aware of:

```sql
DELETE FROM Students;
```

There is no `WHERE`.

That means:

> Delete every row.

A classic exam/trick question.

---

# 11. `ALTER TABLE`

You may be asked to modify an existing table.

For example:

```sql
ALTER TABLE Students
ADD Email VARCHAR(100);
```

Depending on the DBMS, syntax for changing/removing columns can differ, so for tomorrow I'd mainly remember the basic `ADD`.

---

# 12. More sophisticated `JOIN`s

You've seen:

```sql
JOIN
```

Know that this means:

```sql
INNER JOIN
```

Also recognize:

```sql
LEFT JOIN
RIGHT JOIN
FULL OUTER JOIN
```

The most important conceptual difference:

### INNER JOIN

Only matching rows:

```text
A ∩ B
```

### LEFT JOIN

Everything from the left table, even if there's no match:

```text
A + matching B
```

For example:

```sql
SELECT B.Title, M.MemberName
FROM Books B
LEFT JOIN Members M
    ON B.MemberID = M.MemberID;
```

Now your unissued book can appear:

| Title | MemberName    |
| ----- | ------------- |
| DBMS  | Anjali Sharma |
| C++   | Suresh        |
| C     | NULL          |

That's an excellent example to understand.

---

# 13. Subqueries

This is a **big one** you haven't encountered.

For example:

> Find books whose price is greater than the average book price.

You can do:

```sql
SELECT Title, Price
FROM Books
WHERE Price > (
    SELECT AVG(Price)
    FROM Books
);
```

There are two queries here:

```text
Outer query
     │
     │ uses result of
     ▼
Inner query
SELECT AVG(Price)
```

You should at least recognize this pattern.

---

# 14. `EXISTS`

Another form of subquery:

```sql
SELECT MemberName
FROM Members M
WHERE EXISTS (
    SELECT 1
    FROM Books B
    WHERE B.MemberID = M.MemberID
);
```

Meaning:

> Find members for whom at least one matching book exists.

This is probably lower priority than `JOIN` and ordinary subqueries for tomorrow, but know that it exists.

---

# 15. Multiple conditions

You already know one condition. Be comfortable with:

```sql
WHERE Price > 500
AND Author = 'Nikhil';
```

```sql
WHERE Course = 'BCA'
OR Course = 'MCA';
```

and:

```sql
WHERE NOT Course = 'BCA';
```

Parentheses matter:

```sql
WHERE (Course = 'BCA' OR Course = 'MCA')
AND StudentID > 10;
```

---

# 16. `NULL`

You already encountered this, but make sure you really understand it.

Wrong:

```sql
WHERE MemberID = NULL
```

Wrong:

```sql
WHERE MemberID != NULL
```

Correct:

```sql
WHERE MemberID IS NULL
```

```sql
WHERE MemberID IS NOT NULL
```

Why?

Because `NULL` means **unknown/missing**, rather than being an ordinary value.

---

# 17. `CASE`

You might encounter this in a more advanced query.

For example:

```sql
SELECT Title, Price,
    CASE
        WHEN Price > 500 THEN 'Expensive'
        ELSE 'Affordable'
    END AS Category
FROM Books;
```

Result could be:

| Title |  Price | Category   |
| ----- | -----: | ---------- |
| DBMS  | 505.50 | Expensive  |
| C     | 500.01 | Expensive  |
| C++   | 490.00 | Affordable |

I wouldn't spend much time on it tonight, but recognize it.

---

# 18. Constraints

You've seen:

```sql
PRIMARY KEY
FOREIGN KEY
NOT NULL
```

Also know:

```sql
UNIQUE
CHECK
DEFAULT
```

Example:

```sql
Price DECIMAL(10,2) CHECK (Price > 0)
```

and:

```sql
Credits INTEGER DEFAULT 3
```

Conceptually:

| Constraint    | Purpose                      |
| ------------- | ---------------------------- |
| `PRIMARY KEY` | Uniquely identifies row      |
| `FOREIGN KEY` | References another table     |
| `NOT NULL`    | Value required               |
| `UNIQUE`      | No duplicate values          |
| `CHECK`       | Enforce a condition          |
| `DEFAULT`     | Automatically supply a value |

---

# 19. Different types of keys

This is **DBMS theory**, not just SQL syntax.

Know these terms:

* Primary key
* Foreign key
* Candidate key
* Alternate key
* Composite key
* Super key

Especially:

### Composite key

A key made from multiple columns:

```sql
PRIMARY KEY (StudentID, CourseCode)
```

This is extremely common in many-to-many relationships.

---

# 20. Different types of relationships

You've already understood one-to-many.

Know:

```text
1 : 1       One-to-one

1 : N       One-to-many

M : N       Many-to-many
```

Example:

```text
Student ←──────→ Course
```

A student can take many courses, and a course can have many students.

You normally represent this using a **junction/bridge table**:

```text
Students
   │
   │ 1
   ▼
StudentCourses
   ▲
   │ N
Courses
```

For example:

```text
StudentCourses
──────────────
StudentID
CourseCode
```

with a composite primary key:

```sql
PRIMARY KEY (StudentID, CourseCode)
```

This is worth knowing.

---

# 21. Normalization

Since this is a **DBMS exam**, don't overlook the theory.

At minimum, recognize:

* 1NF
* 2NF
* 3NF
* BCNF

And understand the broad goal:

> **Reduce redundancy and prevent update/insert/delete anomalies.**

For example, this is bad design:

| StudentID | StudentName | Course | CourseName  | Credits |
| --------- | ----------- | ------ | ----------- | ------: |
| 1         | Ravi        | BCA    | Bachelor... |       4 |
| 2         | Anjali      | BCA    | Bachelor... |       4 |
| 3         | Mohan       | BCA    | Bachelor... |       4 |

You're repeating course information.

You'd normally separate:

```text
Students
Courses
```

and relate them appropriately.

This connects directly to the thing you noticed earlier about **programmes vs courses**. Your database-design intuition is already beginning to work.

---

# 22. Schema vs instance

You were asking about this earlier, so definitely know the terminology.

### Schema

The structure:

```text
Students(
    StudentID,
    StudentName,
    Course
)
```

### Instance

The actual data currently stored:

```text
15 | Shyam | BCA
12 | Ravi  | MCA
```

Schema = **design/structure**

Instance = **current contents**

---

# 23. DDL, DML, DQL, DCL, TCL

This is a common theory question.

### DDL — Data Definition Language

Structure:

```sql
CREATE
ALTER
DROP
TRUNCATE
```

### DML — Data Manipulation Language

Data:

```sql
INSERT
UPDATE
DELETE
```

### DQL — Data Query Language

Retrieval:

```sql
SELECT
```

### DCL — Data Control Language

Permissions:

```sql
GRANT
REVOKE
```

### TCL — Transaction Control Language

Transactions:

```sql
COMMIT
ROLLBACK
SAVEPOINT
```

Know the names and examples.

---

# 24. Transactions

Another topic you haven't touched.

Basic idea:

```text
START
  │
  ├── UPDATE
  ├── UPDATE
  └── INSERT
       │
       ▼
    COMMIT
```

Once committed, the changes are made permanent.

Or:

```text
ROLLBACK
```

can undo changes that haven't been committed.

This leads to **ACID**.

---

# 25. ACID properties

Know these four:

| Letter | Meaning     |
| ------ | ----------- |
| A      | Atomicity   |
| C      | Consistency |
| I      | Isolation   |
| D      | Durability  |

This is very common DBMS theory.

---

# 26. Views

A **view** is worth knowing.

You can create something like:

```sql
CREATE VIEW ExpensiveBooks AS
SELECT Title, Author, Price
FROM Books
WHERE Price > 500;
```

Then:

```sql
SELECT *
FROM ExpensiveBooks;
```

A view behaves somewhat like a table from the user's perspective, but it is based on a query rather than necessarily being a separately stored copy of the data.

This connects nicely with your earlier question about whether a query result is another table.

---

# 27. Indexes

Know the basic purpose:

```sql
CREATE INDEX idx_student_name
ON Students(StudentName);
```

An index can make searches faster, at the cost of storage and some write overhead.

Conceptually:

```text
Without index:

search through many rows
        ↓
       slow


With index:

Index ──► relevant rows
        ↓
       faster
```

You probably don't need deep implementation details unless your syllabus specifically covers them.

---

# 28. `DROP` vs `DELETE` vs `TRUNCATE`

This is a classic exam topic.

### DELETE

```sql
DELETE FROM Students
WHERE StudentID = 15;
```

Removes selected rows.

### TRUNCATE

```sql
TRUNCATE TABLE Students;
```

Removes all rows while retaining the table structure. Exact transactional behavior varies by DBMS.

### DROP

```sql
DROP TABLE Students;
```

Removes the table itself.

Think:

```text
DELETE     → remove rows
TRUNCATE   → empty table
DROP       → remove table
```

---

# 29. A compact SQL checklist for tomorrow

If I were cramming from your current level, I'd prioritize in this order:

### 🔴 Must know

```text
CREATE TABLE
PRIMARY KEY
FOREIGN KEY
INSERT
SELECT
WHERE
UPDATE
DELETE
JOIN / INNER JOIN
NULL / IS NULL
COUNT
AVG
SUM
MIN
MAX
ORDER BY
GROUP BY
HAVING
DISTINCT
LIKE
IN
BETWEEN
AND / OR / NOT
```

### 🟠 Very worth knowing

```text
LEFT JOIN
Subqueries
CASE
ALTER TABLE
UNIQUE
CHECK
DEFAULT
Composite keys
1:1 / 1:N / M:N
Normalization (1NF, 2NF, 3NF)
Schema vs instance
DDL / DML / DQL / DCL / TCL
```

### 🟡 Know the concepts, don't spend hours mastering them tonight

```text
Views
Indexes
Transactions
ACID
GRANT / REVOKE
EXISTS
SELF JOIN
UNION
UNION ALL
```

---

# 30. And there are some SQL patterns I'd memorize

These are particularly exam-friendly:

```sql
-- Highest
SELECT MAX(Price) FROM Books;

-- Lowest
SELECT MIN(Price) FROM Books;

-- Total
SELECT SUM(Price) FROM Books;

-- Average
SELECT AVG(Price) FROM Books;

-- Number of rows
SELECT COUNT(*) FROM Books;

-- Unique values
SELECT DISTINCT Course FROM Students;

-- Sort
SELECT * FROM Books
ORDER BY Price DESC;

-- Group
SELECT Course, COUNT(*)
FROM Students
GROUP BY Course;

-- Group filter
SELECT Course, COUNT(*)
FROM Students
GROUP BY Course
HAVING COUNT(*) > 2;

-- Pattern
SELECT *
FROM Courses
WHERE CourseName LIKE '%Programming%';

-- Range
SELECT *
FROM Books
WHERE Price BETWEEN 400 AND 600;

-- Several possibilities
SELECT *
FROM Students
WHERE Course IN ('BCA', 'MCA');

-- NULL
SELECT *
FROM Books
WHERE MemberID IS NULL;

-- Not NULL
SELECT *
FROM Books
WHERE MemberID IS NOT NULL;

-- Join
SELECT B.Title, M.MemberName
FROM Books B
JOIN Members M
ON B.MemberID = M.MemberID;

-- Subquery
SELECT Title, Price
FROM Books
WHERE Price > (
    SELECT AVG(Price)
    FROM Books
);
```

## One thing I would *not* do tonight

Don't try to memorize 100 SQL commands.

Your two papers suggest that the exam may be testing **basic relational thinking through short SQL problems**, rather than requiring advanced SQL.

The most valuable next step would be to practice **10–15 small questions that deliberately mix these concepts**. If you can look at a question and immediately identify *which table, which column, which condition, and whether you need grouping or a join*, you'll be in much better shape than if you simply memorize syntax.
