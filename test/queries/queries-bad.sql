# This file contains a list of strings that are NOT valid SQL queries.
# Each line contains a single SQL query.
# Each line starts with a '!' char to indicate that parsing should fail.
!
!1
!gibberish;
!SELECT abc;
!INSERT INTO test_table VALUESd (1, 2, 'test');
!SELECT * FROM t WHERE a = ? AND b = ?;SELECT 1;
!TRUNCATE TABLE test_table;
!SHOW COLUMNS;
