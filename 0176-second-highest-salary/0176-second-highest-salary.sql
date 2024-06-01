# Write your MySQL query statement below
SELECT (SELECT distinct salary FROM Employee
order by salary desc limit 1 offset 1) AS SecondHighestSalary;