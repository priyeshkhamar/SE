create table item_mast (
    Pro_id int auto_increment primary key,
    Pro_Name varchar(30),
    Pro_Price int,
    Pro_Comm int
);

insert into item_mast (Pro_id, Pro_Name, Pro_Price, Pro_Comm)
values
("101", "Mother Board", "3200", "15");

insert into item_mast (Pro_Name, Pro_Price, Pro_Comm)
values
("Key Board", "450", "16"),
("ZIP Drive", "250", "14"),
("Speaker", "550", "16"),
("Monitor", "5000", "11"),
("DVD Drive", "900", "12"),
("CD Drive", "800", "12"),
("Printer", "2600", "13"),
("Refill Cartridge", "350", "13"),
("Mouse", "250", "12");

select * from item_mast;


-- 20
select * from item_mast
WHERE Pro_Price between 200 AND 600;

-- 21
SELECT AVG(Pro_Price)
FROM item_mast
WHERE Pro_Comm = 16;


-- 22
SELECT Pro_Name AS 'Item Name', Pro_Price AS 'Price in Rs.'
FROM item_mast;


-- 23
SELECT Pro_Name, Pro_Price
FROM item_mast
WHERE Pro_Price >= 250
ORDER BY Pro_Price DESC, Pro_Name ASC;


-- 24
SELECT Pro_Comm, AVG(Pro_Price) AS average_price
FROM item_mast
GROUP BY Pro_Comm;