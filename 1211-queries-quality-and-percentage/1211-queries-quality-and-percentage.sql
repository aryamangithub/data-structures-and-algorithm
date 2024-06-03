# Write your MySQL query statement below
select q.query_name, 
round(avg(q.rating/q.position), 2) as quality,
round(sum(if(rating < 3, 1, 0))*100/ count(*), 2) as poor_query_percentage 
from Queries q 
where query_name is not null
group by query_name;