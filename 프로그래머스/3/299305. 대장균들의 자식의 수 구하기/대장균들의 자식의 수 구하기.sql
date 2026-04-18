-- 코드를 

select A.id, count(B.id) as CHILD_COUNT
from ECOLI_DATA as A
left outer join ECOLI_DATA as B on A.id = B.parent_id
group by A.id