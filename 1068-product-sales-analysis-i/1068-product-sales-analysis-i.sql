# Write your MySQL query statement below
select p.product_name as product_name,S.year as year,S.price as price 
from Sales S
Join product P
on S.product_id=P.product_id;