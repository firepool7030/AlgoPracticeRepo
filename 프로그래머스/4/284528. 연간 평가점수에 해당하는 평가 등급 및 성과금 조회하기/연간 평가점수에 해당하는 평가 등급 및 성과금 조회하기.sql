SELECT 
    a.EMP_NO, 
    a.EMP_NAME,
    CASE 
        WHEN AVG(b.SCORE) >= 96 THEN 'S'
        WHEN AVG(b.SCORE) >= 90 THEN 'A'
        WHEN AVG(b.SCORE) >= 80 THEN 'B'
        ELSE 'C'
    END AS GRADE, -- 쉼표 꼭 확인!
    CASE 
        WHEN AVG(b.SCORE) >= 96 THEN a.SAL * 0.2
        WHEN AVG(b.SCORE) >= 90 THEN a.SAL * 0.15
        WHEN AVG(b.SCORE) >= 80 THEN a.SAL * 0.1
        ELSE 0 
    END AS BONUS
from hr_employees as a
inner join hr_grade as b on a.emp_no = b.emp_no
group by a.emp_no, a.emp_name