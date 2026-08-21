
--13:10
CREATE TABLE Students (
	StudentID INTEGER PRIMARY KEY,
	StudentName VARCHAR(50),
	Course VARCHAR(20)
);
-- 1315
CREATE TABLE Courses (
	CourseCode VARCHAR(10) PRIMARY KEY,
	CourseName VARCHAR(50),
	Credits INTEGER
);
--1327
INSERT INTO Students (StudentID, StudentName, Course)
VALUES 
(15, 'Shyam', 'BCA'),
(12, 'Ravi', 'MCA'),
(13, 'Radha','MCA'),
(14, 'Parveen', 'BCA'),
(5, 'Satinder', 'BCA');
-- 1337
INSERT INTO Courses (CourseCode, CourseName, Credits)
VALUES
('BCS012', 'Mathematics', 4),
('MCS029', 'DBMS', 3),
('MCS203', 'Python Programming', 2),
('MCS201', 'C Programming', 5);


SELECT CourseName, Credits
FROM Courses
WHERE Credits > 3;


SELECT StudentName
FROM Students
WHERE Course = 'BCA';

UPDATE Students
SET Course = 'MCA'
WHERE StudentID = 15;

SELECT AVG(Credits) AS AverageCredits
FROM Courses;

SELECT CourseName
FROM Courses
WHERE CourseName LIKE '%Programming%';
