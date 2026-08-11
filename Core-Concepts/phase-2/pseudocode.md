# PSEUDOCODE FOR EXCERCISES

## Excercise 5: Function-Based Number Toolkit

INT FUNCTION add(a, b)

    RETURN a ADDED BY b

END FUNCTION

INT FUNCTION subtract(a, b)

    RETURN a SUBTRACTED BY b

END FUNCTION

INT FUNCTION multiply(a, b)

    RETURN a MULTIPLIED BY b

END FUNCTION

DOUBLE FUNCTION divide(a, b)

    RETURN a DIVIDED BY b

END FUNCTION

MAIN

    READ a
    READ b
    READ choice

    IF choice is addition THEN

        DISPLAY add(a, b)
    ELSE IF choice is substraction THEN

        DISPLAY subtract(a, b)
    ELSE IF choice is multiplication THEN

        DISPLAY multiply(a, b)
    ELSE IF choice is division THEN
        IF b is 0 THEN
            DISPLAY "Cannot divide by 0"
        ELSE
            DISPLAY divide(a, b)
        END IF
    ELSE
        DISPLAY "Invalid Choice"
    END IF

## Excercise 6: Reusable Statistics Library

VOID FUNCTION readArr(array, size)

    FOR i from 0 to size-1
        READ array[i]
    END FOR

END FUNCTION

INT FUNCTION calcSum(array, size)

    SET sum to 0
    FOR i from 0 to size-1
        SET sum to sum ADDED BY array[i]
    END FOR

    RETURN sum

END FUNCTION

DOUBLE FUNCTION calcAverage(array, size)

    SET sum TO calcSum(array, size)

    SET average TO sum DIVIDED BY size

    RETURN average

END FUNCTION

INT FUNCTION findMin(array, size)

    SET min TO array[0]

    FOR i from 1 to size-1
        IF array[i] IS LESS THAN min THEN
            SET min TO array[i]
        END IF
    END FOR

    RETURN min

END FUNCTION

INT FUNCTION findMax(array, size)

    SET max to array[0]

    FOR i from 1 to size-1
        IF array[i] IS GREATER THAN max THEN
            SET max to array[i]
        END IF
    END FOR

    RETURN max

END FUNCTION

MAIN

    SET running to 1

    READ size

    IF size is less than or equal to 0 THEN
        DISPLAY "Size must be greater than 0"
        return 0
    END IF

    SET array[size]

    WHILE running > 0

        DISPLAY instructions
        READ choice

        IF choice IS read THEN
            readArr(array, size)
        ELSE IF choice IS calcSum THEN
            DISPLAY calcSum(array, size)
        ELSE IF choice IS calcAverage THEN
            DISPLAY calcAverage(array, size)
        ELSE IF choice IS findMin THEN
            DISPLAY findMin(array, size)
        ELSE IF choice IS findMax THEN
            DISPLAY findMax(array, size)
        ELSE IF choice IS finish THEN
            SET running to 0
        ELSE
            DISPLAY "Invalid choice"
        END IF
