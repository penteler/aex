--I am assuming this is a comment
CREATE TABLE Account (
	AccountNo INTEGER PRIMARY KEY,
	Account_Type TEXT,
	Balance DECIMAL (10, 2),
	--What is (10, 2)
	Name_of_the_account_holder TEXT,
	Date_of_opening DATE
	
	
);

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