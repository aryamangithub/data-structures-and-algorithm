# Write your MySQL query statement below
select c.class from Courses c 
group by class having count(class) >=5;