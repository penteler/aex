 (a) A university is planning to maintain the
following details :  A unique student identification.  Name of the student.  Programme code in which student has
enrolled.

 Programme names of all the
programmes.  Programme duration.  Programme fee.  The contact phone number of the
student.  The fee paid by the student along with
date of payment.
Perform the following tasks for the
description given above :
(i) List all the entities, as per the
description. 2
(ii) List all the attributes of the entities,
as per the description. 2
(iii) Relationship between/among the
entities of the description given. 2
(iv) Draw an ER diagram, as per the
description given. 2
(v) List all the constraints-including
primary and foreign keys. 2
(vi) Convert the E-R diagram to relations.

 Write SQL commands for the queries on
the following relations : 8
Account (account-number, name, balance)
Bank (branch-code, account-number,
phone)
(i) List all the account numbers in the
order of “name”.
(ii) Find the account-number, which has
the highest balance.
(iii) List the branch-code, account-number,
name and balance of each account.
(iv) Find the number of accounts in each
branch.
(c) Explain the term transaction in the context
of database management system, with the
help of an example. What are the problems
associated when concurrent transactions
are executed ? Explain any one of these
problems with the help of an example. 10
(d) Explain the relational model of database
management system. Also, differentiate

between a relational database
management system and an object oriented
database management system. 8
(e) Define the first normal form in the context
of relational database management
system. 2
2. (a) List and explain any six advantages of
database management system. 6
(b) What is the use of an index in RDBMS ? If
two indexes were created in a database–
one on primary key and other on secondary
key, which of these two indexes will be of
more advantage ? Justify you answer with
the help of an example. 6
(c) What is SQL ? Explain the create table
command of SQL with the help of an
example. 4
(d) Explain the one-to-one and many-to-many
relationship in ER-diagram.
3. (a) What is lossless join decomposition of a
relation ? Explain with the help of an
example. 6
(b) Explain the three level DBMS architecture
with the help of a diagram. How does the
three level architecture relate to date
independence ? Explain with the help of an
example. 8
(c) Explain the second normal form and third
normal form with the help of an example of
relations. 6
4. (a) What is Data Recovery ? How can it be
performed ? Explain with the help of an
example. 6
(b) Explain the term query optimisation in the
context of a DBMS with the help of an
example. 6
(c) Consider the relation R = {A, B, C, D, E}
and the set of functional dependencies
A  BC, B E,  C D 
(i) What is key in R ? 3
(ii) Decompose R into 2NF and 3N

5. Explain the following with the help of an
example/diagram, if needed : 20
(a) Data Mining
(b) Data Warehousing
(c) NoSQL databases
(d) Locking in transaction
(e) Weak entity


given

 (a) Compare and contrast the traditional file
based system with database approach. 5
(b) Explain the desirable properties of
decomposition of a relation with the help of an example. 5
(c) What is query processing ? List the basic steps
in query processing. 5
(d) What are the limitations of Relational
Databases ? Explain the need for object
oriented Databases. 5
(e) Explain the following basic relational
operations with the help of an appropriate
examples for
each : 10
(i) SELECTION
(ii) PROJECTION
(iii) CARTESIAN PRODUCT
(iv) JOIN
(f) Design an ER-diagram for the specifications
to maintain any Hospital. Clearly indicate the
entities, attributes, primary key, constraints,
relationships and cardinality


2. (a) Explain the physical DBMS architecture with
the help of a neat diagram. 10
(b) Explain any FOUR (4) commands of DML
with suitable example for each command. 8
(c) What is the use of sequential file organization ?
2
3. (a) Explain entity integrity and referential integrity
constraints of a relation with the help of a
suitable example. 6
(b) Explain the third normal form and BCNF with
the help of an example. 7
(c) Why do we need indexes ? Explain the
following :
(i) Primary index
(ii) Clustering index
(iii) Secondary index 7
4. (a) What is a transaction ? Explain properties of
a transaction with an example. 7
(b) Why do we need database recovery ?

Compare and contrast Backward Recovery
and Forward Recovery. 6
(c) What is Hash-Join ? Explain the cost
calculation for simple Hash-Join. 7
5. Write short notes on the following : 5×4=20
(i) Multi-list file organization
(ii) Second normal form
(iii) Serialisable schedule
(iv) Data warehouse


given



(a) A bank maintains the following information
about its customers :
 A unique customer identifier
 Name of the customer
 Account numbers of the customer
(a customer can open many accounts)
 Balance in each account with the bank
 The phone number and address of the
customer
 The withdrawals or deposits made in
different accounts.
Perform the following tasks for the
description given above :
(i) List all the entities. 2
(ii) List the attributes of the entities.

(iii) Identify relationships between/among
the entities. 2
(iv) Draw E-R diagram. 2
(v) Convert E-R diagram to relations. 2
(vi) List all the constraints, including
primary and foreign keys. 2
(b) Consider the following relations :
Student (id, name, phone, p_code)
Programme (p_code, title, duration, credits)
p_code is programme code.
Write the SQL commands for the following
queries on the two relations given above : 42=8
(i) List the id and name of all the
students of Programme, whose
p_code is “MCA”.
(ii) Find the programmes which have
more than 80 credits.
(iii) Find the number of students in each
programme.
(iv) List id, name, p_code, title of all the
students of the programme whose
p_code is “CIT”.
(c) Explain the following terms in the context
of DBMS, with the help of an example for
each : 10
(i) Transaction
(ii) Locking
(iii) Checkpoint
(iv) Recovery
(v) Query cost 

(d) Differentiate between the following : 8
(i) Relational database management
systems and Object oriented
database management systems
(ii) Data Mining and Data Warehousing
(e) What is an update anomaly ? Explain with
the help of an example. 2
2. (a) Explain the concept of data independence,
with the help of an example. 4
(b) Explain the concept of super key, candidate
key and primary key in a relational
database system, with the help of an
example. 6
(c) Explain the concept of generalization and
specialization in the context of E-R model,
with the help of an example. 5
(d) What are primary index and secondary
index ? Which of them is more
advantageous ? Explain with the help of an
example for each. 5
3. (a) Given the following relational schema :
Student (student_id, name, coursecode,
 coursename, marks)
with the following constraints :
 The student_id is unique for each student.
 Coursecode is unique for each course.
 A student can take many courses.
 The marks of a student in a particular
course are recorded in marks attribute

Perform the following tasks for the
description given above :
(i) List all the functional dependencies,
in the relation. 4
(ii) What are the anomalies in the
relation above ? Explain. 6
(iii) Normalize the relation into 2NF and
then 3NF. 5
(b) Explain the term multi-valued dependency,
with the help of an example. 5
4. (a) Explain ACID properties of a transaction
with the help of an example. 6
(b) Explain the log-based recovery technique,
with the help of an example. 8
(c) What is a natural join operation ? Explain
any one algorithm that can be used to
implement join operation in a RDBMS. 6
5. (a) Explain the following in the context of
object oriented and object relational
database management systems : 2+2+4=8
(i) Complex data types
(ii) Type inheritance
(iii) Object definition language
(b) Explain the concept of multi-dimensional
data in data warehouse, with the help of an
example. 6
(c) Explain the concept of classification and
clustering in the context of data mining.








given

(a) Consider the following proposed system for
a bank.
‘‘A bank wants to store the following
information of its customers using a
database management system :
 Details of customer, where each
customer is given a unique identifier.
The bank stores the customer name,
address and contact phone.
 The details of every account, where
each account number is unique. In
addition, the bank holds the account
balance, type of account (like savings
account or current account) and the
customer identifier of the customers
who own that account.
 An account may be a joint account of
more than one customer. In addition,
a customer can own many accounts
Perform the following tasks for the
description of the bank given above : 12
(i) List all the entities, as per the
description.
(ii) List the attributes of the entities.
(iii) List all the relationships between
entities.
(iv) List all the constraints including
primary and foreign keys.
(v) Draw an ERD for the above.
(vi) Convert the ERD into relations.
(b) Consider the following relations :
Student (enrol_no, name, course_code)
Course (course_code, title, duration)
Write SQL commands for the following
queries : 8
(i) Find the course_code and title of
those courses, whose duration is
more than one month.
(ii) List the title of the course taken by
the student, whose enrol_no is ‘S01’.
(iii) Count the number of all the courses.
(iv) List the enrol_no, name, title,
duration for all the students.
(c) What are the problems of concurrent
transactions ? Explain with the help of an
example of each. 9
(d) Explain the terms Data Mining and Data
Warehousing. How is data warehousing
related to database management system ? 8
(e) Explain the concept of referential integrity
with the help of an example

(a) Consider the relation :
R = {A, B, C, D, E, F}
and the set of functional dependencies
A  BD; B  E; D  CF
(i) What is the key of R ? 3
(ii) Decompose R into second normal
form and third normal form. 5
(b) What is the meaning of dependency
preserving and lossless decomposition ?
Explain with the help of an example of
each. 8
(c) What are the four properties of
transactions in a database management
system ? 4
3. (a) What are the three levels of database
architecture ? Explain the purpose of each
level with the help of a diagram/example. 6
(b) Explain using an example, how logs of a
database system can be used for database
recovery. Also define the concept of
recovery in a database system. 7
(c) Explain the features of object-oriented
database management system. How is
object-oriented database management
system different from relational database
management system 
(a) What is meant by the term ‘‘Query
Optimisation’’ ? Explain with the help of an
example. How is query optimisation
different from query evaluation ? 7
(b) Explain the concept of physical data
independence and logical data
independence with the help of an example
of each. 6
(c) Explain the concept of locking in RDBMS.
How does locking solve the problems of
concurrent transactions ? Explain with the
help of an example. 7
5. Explain the following terms with the help of an
example : 54=20
(a) Join Operation
(b) Weak Entity
(c) Primary and Secondary Index
(d) Deadlock
(e) Database Security


