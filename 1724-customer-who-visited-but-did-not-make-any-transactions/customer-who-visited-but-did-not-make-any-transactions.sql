# Write your MySQL query statement below

#METHOD 1:
-- SELECT customer_id, COUNT(v.visit_id) as count_no_trans 
-- FROM Visits v
-- LEFT JOIN Transactions t ON v.visit_id = t.visit_id
-- WHERE transaction_id IS NULL
-- GROUP BY customer_id


#METHOD - 2
SELECT customer_id, COUNT(visit_id) as count_no_trans 
FROM Visits
WHERE visit_id NOT IN (
	SELECT visit_id FROM Transactions
	)
GROUP BY customer_id