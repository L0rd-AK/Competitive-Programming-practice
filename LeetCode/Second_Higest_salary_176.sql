# Write your MySQL query statement below
select max(salary) as SecondHighestSalary from Employee where salary<(select max(salary) from Employee);

SELECT (
  SELECT DISTINCT salary
  FROM Employee
  ORDER BY salary DESC
  LIMIT 1 OFFSET 1
) AS SecondHighestSalary;