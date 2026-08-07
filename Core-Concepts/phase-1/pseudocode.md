# PSEUDOCODE FOR EXCERCISES

## Excercise 1 (Integer Analysis)

READ N

IF N is less than or equal to 0 THEN
DISPLAY "N must be greater than Zero"
ELSE
READ firstNumber

    SET minimum to firstNumber
    SET maximum to firstNumber
    SET sum to firstNumber
    SET odd to 0
    SET even to 0

    IF firstNumber is even THEN
        ADD 1 to even
    ELSE
        ADD 1 to odd
    END IF

    FOR count FROM 2 TO N
        READ number
        ADD number TO sum

        IF number IS greater than maximum THEN
            SET maximum to number
        ELSE IF number IS lesser than minimum THEN
            SET minimum to number
        END IF

        IF number is even THEN
            ADD 1 to even
        ELSE
            ADD 1 to odd
        END IF
    END FOR

    SET average to sum DIVIDED BY N

    DISPLAY minimum
    DISPLAY maximum
    DISPLAY sum
    DISPLAY even
    DISPLAY odd
    DISPLAY average

END IF

## Excercise 2 (Array Statistics)

READ N

IF N is less than 1 OR N is greater than 100 THEN

    DISPLAY N must be within range (1-100)

ELSE
SET array[N]

    READ array[0]
    SET minimum to array[0]
    SET maximum to array[0]
    SET sum to array[0]
    SET evenCount to 0
    SET oddCount to 0

    IF array[0] is even THEN
        ADD evenCount by 1
    ELSE
        ADD oddCount by 1
    END IF

    FOR count from 1 to N-1
        READ array[count]

        IF array[count] > maximum THEN
            SET maximum to array[count]
        ELSE IF array[count] < minimum THEN
            SET minimum to array[count]
        END IF

        IF array[count] is even THEN
            ADD evenCount by 1
        ELSE
            ADD oddCount by 1
        END IF

        ADD sum by array[count]
    END FOR

    SET average to sum DIVIDED BY N

    FOR count from 0 to N-1
        DISPLAY array[count]
    END FOR

    DISPLAY minimum
    DISPLAY maximum
    DISPLAY sum
    DISPLAY average
    DISPLAY evenCount
    DISPLAY oddCount

    FOR count from N-1 to 0
        DISPLAY array[count]
    END FOR

## Excercise 3 (Matrix Operations)

READ row
READ col

IF row or col outside of range 1-10 THEN

    DISPLAY "Must have 1-10 rows and column"

ELSE

    SET matrix1[row][col]
    SET matrix2[row][col]
    SET matrix3[row][col]

    FOR count r from 0 to row-1
        FOR count c from 0 to col-1
            READ matrix1[r][c]
        END FOR
    END FOR

    FOR count r from 0 to row-1
        FOR count c from 0 to col-1
            READ matrix2[r][c]
        END FOR
    END FOR

    FOR count r from 0 to row-1
        FOR count c from 0 to col-1
            SET matrix3[r][c] to matrix1[r][c] ADDED BY matrix2[r][c]
        END FOR
    END FOR

    DISPLAY "Matrix1 = "
    FOR r from 0 to row-1
        FOR c from 0 to col-1
            DISPLAY matrix1[r][c]
        END FOR
        DISPLAY new line
    END FOR

    DISPLAY "Matrix2 = "
    FOR r from 0 to row-1
        FOR c from 0 to col-1
            DISPLAY matrix2[r][c]
        END FOR
        DISPLAY new line
    END FOR

    DISPLAY "Result = "
    FOR r from 0 to row-1
        FOR c from 0 to col-1
            DISPLAY matrix3[r][c]
        END FOR
        DISPLAY new line
    END FOR

END IF

## Excercise 4 (Floyd's Number Triangle)

READ N
SET start to 1

IF N is not a positive integer THEN

    DISPLAY "N Must be a positive integer"

ELSE

    FOR row from 1 to N
        i = row
        WHILE i not 0
            DISPLAY start
            start++
            SUBSTRACT i by 1
        END WHILE
        DISPLAY newLine
    END FOR

END IF
