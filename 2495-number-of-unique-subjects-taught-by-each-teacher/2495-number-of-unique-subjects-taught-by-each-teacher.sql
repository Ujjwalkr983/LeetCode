# Write your MySQL query statement below
SELECT teacher_id,
COUNT(distinct subject_id) AS cnt
from Teacher
group by teacher_id;