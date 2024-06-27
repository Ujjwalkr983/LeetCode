# Write your MySQL query statement below
SELECT p.product_name, sum(o.unit) AS unit
FROM Products AS p
LEFT JOIN Orders AS o
ON p.product_id = o.product_id AND LEFT(o.order_date, 7) = '2020-02'
GROUP BY (p.product_id)
HAVING unit >= 100 ;