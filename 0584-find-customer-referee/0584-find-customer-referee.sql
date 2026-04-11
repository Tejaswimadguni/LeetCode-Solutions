# Write your MySQL query statement below
select E.name as name
from Customer E
where referee_id is NULL OR referee_id!=2