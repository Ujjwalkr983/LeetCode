# Write your MySQL query statement below
SELECT 
round(sum(if(min_order_date = min_customer_pref_delivery_date, 1, 0)*100) / COUNT(min_order_date), 2) AS immediate_percentage 
from
(SELECT customer_id,
min(order_date) AS min_order_date,
min(customer_pref_delivery_date) AS min_customer_pref_delivery_date
FROM Delivery
GROUP BY customer_id) AS new_table;
