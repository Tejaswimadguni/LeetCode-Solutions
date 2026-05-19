# Write your MySQL query statement below
SELECT x,y,z,
case 
when x+y>z
AND y+z>x
AND x+z>y
THEn "Yes"
ELSE "No"
END AS triangle
FROM  triangle;