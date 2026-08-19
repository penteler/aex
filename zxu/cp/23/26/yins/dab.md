# t 

## Mb 
### Consider the following Library Schema and answer the queries below:
-Books:
|Column|Type|Constraints|
|:---|:---:|---:|
|Book ID|INT|Primary Key|
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


