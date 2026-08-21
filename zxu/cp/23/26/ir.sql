--I am assuming this is a comment
CREATE TABLE Account (
	AccountNo INTEGER PRIMARY KEY,
	Account_Type TEXT,
	Balance DECIMAL (10, 2),
	--What is (10, 2)
	Name_of_the_account_holder TEXT,
	Date_of_opening DATE
	
	
);


CREATE TABLE Members (
	MemberID INTEGER PRIMARY KEY,
	MemberName VARCHAR(50) NOT NULL,
	JoinDate DATE
);



-- I am using the format of the table above
```
CREATE TABLE Books (
	BookID INTEGER PRIMARY KEY,
	Title VARCHAR(50),
	Author VARCHAR(100),
	Price DECIMAL(10,2),
	MemberID INTEGER,
	FOREIGN KEY (MemberID) REFERENCES Members(MemberID)
	
);

INSERT INTO Members (MemberID, MemberName, JoinDate)
VALUES
(2, 'Jamshed', '2024-07-19'),
(3, 'Anjali Sharma', '2024-05-31');


INSERT INTO Members VALUES
(7, 'Naresh', '2022-03-16')

INSERT INTO Books VALUES
(7, 'Basics of DBMS', 'Mithilesh', 588.00, 7);

INSERT INTO Books (BookID, Title, Author, Price, MemberID)
VALUES
(9, 'C++ Basics', 'Nishikant', 340.50, 2),
(4, 'C basics', 'Nishikant', 510.00, 3);

SELECT Title, Author
FROM Books
WHERE Price > 500;

SELECT MemberName
From Members
WHERE JoinDate > '2024-01-01';


SELECT COUNT(*)
AS TotalBooks
FROM Books

SELECT Title
FROM Books
WHERE MemberID = 3
```



INSERT INTO Account VALUES
(2, 'current', 300000.89, 'Dinesh','2012-12-12'),
(1, 'savings', 300000.89, 'Dinesh','2011-11-11');

SELECT Name_of_the_account_holder
FROM Account 
WHERE Account_Type = 'savings'
AND Balance = 300000.89;

INSERT INTO Account (
AccountNo,
Account_Type,
Balance,
Name_of_the_account_holder,
Date_of_opening
)
VALUES (
3,
'fixed_deposit',
600000.88,
'Jignesh',
'2017-09-30'

);
--10:50
CREATE TABLE Members(
	MemberID INTEGER PRIMARY KEY,
	MemberName VARCHAR(50) NOT NULL,
	JoinDate DATE
);
CREATE TABLE Books (
	BookID INTEGER PRIMARY KEY,
	Title VARCHAR(50),
	Author VARCHAR(100),
	Price DECIMAL(10, 2),
	MemberID INTEGER ,
	FOREIGN KEY (MemberID) REFERENCES Members(MemberID)
); 

INSERT INTO Members (MemberID, MemberName, JoinDate)
VALUES
(1, 'Suresh', '2024-02-22'),
(2, 'Anjali Sharma', '2022-05-20'),
(3, 'Dinesh','2024-03-02');

INSERT INTO Books (BookID, Title, Author, Price, MemberID)
VALUES
(1, 'DBMS', 'Suryakant', 505.50, 2),
(3, 'C', 'Vikas', 500, NULL),
(2, 'C++','Nikhil', 490.00, 1);

SELECT Title, Author
FROM Books	
WHERE Price > 500;

SELECT MemberName
FROM Members
WHERE JoinDate > '2024-01-01';

SELECT COUNT (*)
AS TotalBooks
FROM Books;

--These joins definitely show up as lines in design view for access or base I am curious about how the direction of the arrows is determined
SELECT B.Title
FROM Books B
JOIN Members M
	ON B.MemberID = M.MemberID
WHERE M.MemberName = 'Anjali Sharma';

SELECT B.BookID, B.Title, M.MemberName
FROM Books B
JOIN Members M
	ON B.MemberID = M.MemberID
WHERE  MemberID IS NOT NULL;


--10:53
--1203

