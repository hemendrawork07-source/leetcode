# Write your MySQL query statement below

select s1.name as Employee
from Employee as s1
where s1.salary >(select s2.salary
                from Employee as s2
                where s1.managerId=s2.id)