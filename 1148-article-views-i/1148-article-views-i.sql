# Write your MySQL query statement below
select distinct(V1.author_id) as id from Views V1
 join Views V2
on V1.author_id=V2.author_id where
v1.author_id=v2.viewer_id order by id;
