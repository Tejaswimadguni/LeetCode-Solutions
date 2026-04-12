# Write your MySQL query statement below
(SELECT u.name as results
from Users u
join MovieRating MR
on u.user_id=MR.user_id
group by u.user_id
order by count(*) DESC,u.name
Limit 1
)
UNION ALL
(
SELECT m.title
FROM Movies m
JOIN MovieRating MR
ON m.movie_id = MR.movie_id
WHERE MR.created_at BETWEEN '2020-02-01' AND '2020-02-29'
GROUP BY m.movie_id
ORDER BY AVG(MR.rating) DESC, m.title
LIMIT 1
);