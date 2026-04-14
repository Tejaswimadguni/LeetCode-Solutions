# Write your MySQL query statement below
select s.product_id as product_id,s.year as first_year,quantity,price
from Sales s
join (SELECT product_id, MIN(year) AS year
    FROM Sales
    GROUP BY product_id) m
on m.product_id=s.product_id
where s.year = m.year;