/*
Weather Observation Station 4
Day #53
Thursday, June 22, 2017
https://www.hackerrank.com/challenges/weather-observation-station-4
*/

SELECT COUNT(CITY) - COUNT(DISTINCT CITY)
FROM STATION;