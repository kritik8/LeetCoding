# Write your MySQL query statement below
SELECT s.name from SalesPerson s WHERE sales_id NOT IN (SELECT s.sales_id from
SalesPerson s 
left join Orders o on s.sales_id = o.sales_id
left join Company c on o.com_id = c.com_id 
where c.name = "Red");