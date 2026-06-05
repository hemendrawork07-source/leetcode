# Write your MySQL query statement below
select max(e1.salary) as SecondHighestSalary
from Employee as e1
where e1.salary<(select max(e2.salary)
                 from Employee as e2)