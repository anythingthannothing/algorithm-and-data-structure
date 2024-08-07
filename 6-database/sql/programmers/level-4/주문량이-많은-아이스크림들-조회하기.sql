SELECT a.FLAVOR
FROM FIRST_HALF a
LEFT JOIN (
    SELECT MAX(FLAVOR) AS FLAVOR, SUM(TOTAL_ORDER) AS TOTAL_ORDER
    FROM JULY
    GROUP BY FLAVOR
) b
ON a.FLAVOR = b.FLAVOR
ORDER BY a.TOTAL_ORDER + IFNULL(b.TOTAL_ORDER, 0) DESC
LIMIT 3;