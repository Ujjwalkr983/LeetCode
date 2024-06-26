# Write your MySQL query statement below
SELECT DISTINCT class
from Courses
group by class
HAVING COUNT(class) >= 5
