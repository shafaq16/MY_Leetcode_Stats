# Write your MySQL query statement below

-- #METHOD 3 - IFNULL(expression,Alt_value) function;
SELECT name FROM Customer WHERE IFNULL(referee_id,0) <> 2;



-- #METHOD 2 - NESTED
-- SELECT  
--     name
-- FROM 
--     Customer
-- WHERE 
--     id NOT IN
--         (
--         SELECT id
--         FROM Customer
--         WHERE referee_id = 2
--         )



-- -- #METHOD 1
-- -- SELECT name FROM Customer WHERE referee_id != 2 OR referee_id is NULL;