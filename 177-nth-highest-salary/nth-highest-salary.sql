CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE m int;
  set m=N-1;
  RETURN (
      # Write your MySQL query statement below.
        select DISTINCT salary 
        from Employee 
        order by salary desc
        limit 1 OFFSET m
  );
END