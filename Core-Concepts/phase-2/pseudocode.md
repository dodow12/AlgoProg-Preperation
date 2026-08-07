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
