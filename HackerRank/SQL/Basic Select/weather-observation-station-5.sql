/*
Weather Observation Station 5
Day #53
Thursday, June 22, 2017
https://www.hackerrank.com/challenges/weather-observation-station-5
*/

SELECT *
FROM (SELECT CITY, LENGTH(CITY) 
      FROM STATION 
      ORDER BY LENGTH(CITY), CITY) 
AS temp
LIMIT 1;

SELECT *
FROM (SELECT CITY, LENGTH(CITY) 
      FROM STATION 
      ORDER BY LENGTH(CITY) DESC, CITY) 
AS temp
LIMIT 1;