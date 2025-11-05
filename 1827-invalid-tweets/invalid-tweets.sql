# Method 1


-- SELECT tweet_id
-- FROM Tweets
-- WHERE CHAR_LENGTH(content) > 15








-- MTHOD -2 That run only in this test cases as Length returns value in bytes so if other special character will be used like € it will return 3
-- example SELECT LENGTH('€')  # is equal to 3
--         SELECT CHAR_LENGTH('€') # is equal to 1

SELECT tweet_id
FROM Tweets
WHERE LENGTH(content) > 15