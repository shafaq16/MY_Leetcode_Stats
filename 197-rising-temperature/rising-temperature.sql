# Write your MySQL query statement below
SELECT a.id 
FROM Weather AS a
JOIN Weather AS b
ON DATEDIFF(a.recordDate, b.recordDate) = 1
     -- ensures w1 is exactly 1 day after w2
WHERE a.temperature > b.temperature;