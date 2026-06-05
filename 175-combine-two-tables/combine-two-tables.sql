# Write your MySQL query statement below
select p.firstName,
       p.lastName, 
       a.city,
       a.state
from Person AS p
left outer join Address as a on p.personId=a.personId;