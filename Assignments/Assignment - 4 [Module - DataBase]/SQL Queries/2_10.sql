create database db1;

use db1;

-- 2
create table Employee (
Employee_id int auto_increment primary key,
First_Name varchar(30),
Last_Name varchar(30),
Salary int,
Joining_Date datetime,
Department varchar(20)
);

insert into Employee (
First_Name, 
Last_Name, 
Salary, 
Joining_Date, 
Department
)
values 
("John", "Abraham", "1000000", "2013-01-01 12:00:00", "Banking"),
("Michael", "Clarke", "800000", "2013-01-01 12:00:00", "Insurance"),
("Roy", "Thomas", "700000", "2013-02-01 12:00:00", "Banking"),
("Tom", "Hose", "600000", "2013-02-01 12:00:00", "Insurance"),
("Jerry", "Pinto", "650000", "2013-02-01 12:00:00", "Insurance"),
("Philip", "Mathew", "750000", "2013-01-01 12:00:00", "Services"),
("TestName1", "123", "650000", "2013-01-01 12:00:00", "Services"),
("TestName2", "LName%", "600000", "2013-02-01 12:00:00", "Insurance");

select * from employee;

create table Incentives (
Employee_Ref_id int,
Incentive_Date datetime,
Incentive_Amount int,
foreign key (Employee_Ref_id) references employee (Employee_id)
);

insert into Incentives (
Employee_Ref_id,
Incentive_Date,
Incentive_Amount
)
values
("1", "2013-02-01", "5000"),
("2", "2013-02-01", "3000"),
("3", "2013-02-01", "4000"),
("1", "2013-01-01", "4500"),
("2", "2013-01-01", "3500");

select * from Incentives;


-- 3
SELECT First_Name FROM Employee WHERE First_Name = 'Tom';


-- 4
select First_Name, Joining_Date, Salary from Employee; 


-- 5
select * from Employee order by First_Name asc;

select * from Employee order by Salary desc;


-- 6
SELECT * FROM Employee WHERE first_name LIKE '%J%';


-- 7
SELECT 
    department, MAX(salary) AS max_salary
FROM
    employee
GROUP BY department
ORDER BY max_salary ASC;


-- 9
SELECT e.First_Name, i.Incentive_Amount 
FROM Employee e
INNER JOIN Incentives i ON e.Employee_id = i.Employee_Ref_id 
WHERE i.Incentive_Amount > 3000;


-- 10
CREATE TABLE viewtable (
    Employee_id int,
    First_Name varchar(30),
    Last_Name varchar(30),
    Salary int,
    Joining_Date datetime,
    Department varchar(20)
);

DELIMITER $$
CREATE TRIGGER after_employee_insert
AFTER INSERT ON Employee
FOR EACH ROW
BEGIN
    INSERT INTO viewtable (Employee_id, First_Name, Last_Name, Salary, Joining_Date, Department)
    VALUES (NEW.Employee_id, NEW.First_Name, NEW.Last_Name, NEW.Salary, NEW.Joining_Date, NEW.Department);
END;
$$
DELIMITER ;