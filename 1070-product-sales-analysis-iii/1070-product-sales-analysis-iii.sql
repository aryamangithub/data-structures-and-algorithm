# Write your MySQL query statement below
select s.product_id, year as first_year, s.quantity, s.price from Sales s
where (product_id, year) in (
    select product_id , Min(year) from sales
    group by product_id
)