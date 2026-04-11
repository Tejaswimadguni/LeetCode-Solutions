# Write your MySQL query statement below
select E.name as Employee
from Employee E
join Employee M
where E.managerId=M.id AND E.salary>M.salary;