-- 코드를 작성해주세요
select a.id
from ECOLI_DATA as a
inner join ECOLI_DATA as b on a.parent_id = b.id
inner join ECOLI_DATA as c on b.parent_id = c.id
where c.parent_id is null