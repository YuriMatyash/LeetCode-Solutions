# Write your MySQL query statement below
SELECT product_name, year, price
FROM Product p INNER JOIN Sales s ON p.product_id = s.product_id