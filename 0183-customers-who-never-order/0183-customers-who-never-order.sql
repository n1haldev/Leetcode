# Write your MySQL query statement below
select name as Customers from Customers where Customers.id not in (select c.id from Customers c join Orders o on c.id=o.customerId);