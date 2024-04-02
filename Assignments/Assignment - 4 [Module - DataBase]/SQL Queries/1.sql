-- 1

create database db1;

use db1;

create table students (
Roll_No int auto_increment,
Name varchar(50),
Branch varchar(50),
primary key (Roll_No)
); 

CREATE TABLE Exam(
Roll_No int,
S_Code varchar(20),
Marks int,
P_Code varchar(20),
FOREIGN KEY (Roll_No) REFERENCES students(Roll_No)
);

insert into students (Name, Branch) values
("Jay","Computer Science"),
("Suhani", "Electronics and Comm."),
("Kriti", "Electronics and Comm");


insert into exam(Roll_No, S_Code, Marks, P_Code)
values 
('1', 'CS11', '50', 'CS'),
('1', 'CS12', '60', 'CS'),
('2', 'EC101', '66', 'EC'),
('2', 'EC102', '70', 'EC'),
('3', 'EC101', '45', 'EC'),
('3', 'EC102', '50', 'EC');

select * from students;
select * from exam;