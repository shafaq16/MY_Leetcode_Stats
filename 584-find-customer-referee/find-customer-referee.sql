# Write your MySQL query statement below

#METHOD 2 - NESTED
SELECT  
    name
FROM 
    Customer
WHERE 
    id NOT IN
        (
        SELECT id
        FROM Customer
        WHERE referee_id = 2
        )



-- #METHOD 1
-- SELECT name FROM Customer WHERE referee_id != 2 OR referee_id is NULL;