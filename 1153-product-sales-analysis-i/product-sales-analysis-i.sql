# Write your MySQL query statement below
SELECT product_name , year , price
FROM Sales as s
LEFT JOIN Product as p
ON p.Product_id = s.Product_id