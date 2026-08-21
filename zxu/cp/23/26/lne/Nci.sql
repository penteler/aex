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
(3, 'C', 'Vikas', 500.01, NULL),
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