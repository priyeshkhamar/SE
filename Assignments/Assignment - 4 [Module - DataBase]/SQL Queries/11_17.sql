-- 11

create table SalesPerson (
SNo int primary key,
SName varchar(30),
City varchar(30),
Comm decimal(3,2)
);

create table Customer (
CNo int auto_increment primary key,
CName varchar(30),
City varchar(30),
Rating int,
SNo int,
foreign key (SNo) references SalesPerson (SNo)
);

insert into SalesPerson (SNo, SName, City, Comm)
values
("1001", "Peel", "London", ".12"),
("1002","Serres","San Jose",".13"),
("1004","Motika", "London", ".11"),
("1007", "Rafkin", "Barcelona", ".15"),
("1003", "Axelrod", "New York", ".1");

select * from SalesPerson;

insert into Customer (CNo, CName, City, Rating, SNo)
values
("201", "Hoffman", "London", "100", "1001"),
("202","Giovanne","Roe","200", "1003"),
("203","Liu", "San Jose", "300", "1002"),
("204", "Grass", "Barcelona", "100","1002"),
("206", "Clemens", "London", "300","1007"),
("207", "Pereira", "Roe", "100","1004");


-- 12
select * from customer;

-- 13


-- 14
SELECT SName, City
FROM SalesPerson
WHERE City = 'London' AND Comm > 0.12;


-- 15
SELECT SName, City
FROM SalesPerson
WHERE City IN ('Barcelona', 'London');


-- 16
SELECT SName, Comm
FROM SalesPerson
WHERE Comm > 0.10 AND Comm < 0.12;


-- 17
SELECT CNo, CName, City, Rating
FROM Customer
WHERE Rating > 100 OR (Rating <= 100 AND City = 'Rome');

