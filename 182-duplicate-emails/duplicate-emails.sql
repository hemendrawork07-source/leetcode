# Write your MySQL query statement below
select distinct e1.email as Email
from Person e1
group by e1.email
having 1<(select count(e2.email)
                from Person e2
                where e1.email=e2.email
                )