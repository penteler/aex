# t 

## Mb 
### Consider the following Library Schema and answer the queries below:
-Books:
|Column|Type|Constraints|

|Title|Varchar(50)||
|Author|Varchar(100)||
|Price|Decimal(10, 2)||
|Member ID|INT| Foreign Key|

|Column|Type|Constraints|
|:---|:---:|---:|
|Member ID|INT|Primary Key|
|Member Name|Varchar(50)|Not Null|
|Join date|Date||
#### write and execute sql queries for the following:
- list the titles and authors of all of the books with a price greater than 500.
- Display the names of all members who joined after  '2024-01-01'
- Find the total number of books in the library
- List the titles of books issued to a name: 'Anjali Sharma'.
- Display the Book ID, Title and Member Name for all books that have been issued.

### Consider the following University database schema and answer the questions below
#### Students:
|Column|Type|Constraints|
|:---|:---:|---:|
|Student ID|INT|Primary Key|
|Student Name|Varchar (50)||
|Course|Varchar(20)||
#### Courses:
|Column|Type|Constraints|
|:---|:---:|---:|
|CourseCode|Varchar(10)|Primary Key|
|CourseName|Varchar(50)||
|Credits|INT||

#### Write and execute the following SQL queries for the following:
- Display the CourseName and creditsfor all courses that have more than three credits
- List names of all the students enrolled in the 'BCA' course
- change the course of the student with student id 15 to 'MCA'
- Find the average number of credits for all available courses.
- list the names of all courses that have  'Programming' in their CourseName.

# P
#### write a C++ program to demonstrate single inheritance.
- Create a base class person with a protected number(must have been member this must be a typo point any oter mistakes in these questions whereever they may be) name (string) and a public function getName() to set the name.
- Create a derived class student that inherits from person
- The student class should have a private member rollNo (int) and a public function getdetails() to set the roll number
- The Student class should also have a public function displayDetails () to print both the name (from the base class) and the roll number.
in  the main (), create an object of the Student class, set its details and display them.
#### Write a C++ program to create a class named Rectangle:
- the class should have two private integer member variables: length and width.
- include a constructor to initialize  length and width.
- include a public member function calculate Area () that returns the area of the rectangle.
- include a public member function display () that prints the length, width and calculated area.
In the main () function, create an object of the rectangle class with length 10 and width 5, and then call its display function.


