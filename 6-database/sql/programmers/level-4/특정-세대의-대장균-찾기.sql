# 1세대 CTE
with OG as (
    SELECT ID
    FROM ECOLI_DATA
    WHERE PARENT_ID IS NULL
),
# 2세대 CTE
SG as (
    SELECT ID
    FROM ECOLI_DATA
    WHERE PARENT_ID IN (SELECT ID FROM OG)
)
SELECT ID
FROM ECOLI_DATA
WHERE PARENT_ID IN (SELECT ID FROM SG)
ORDER BY 1 ASC;