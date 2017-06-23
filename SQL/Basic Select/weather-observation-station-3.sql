/*
Weather Observation Station 3
Day #53
Thursday, June 22, 2017
https://www.hackerrank.com/challenges/weather-observation-station-3
*/

SELECT DISTINCT CITY
FROM STATION
WHERE ID % 2 = 0;