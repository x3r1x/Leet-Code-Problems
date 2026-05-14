PROGRAM ControlOverflow(INPUT, OUTPUT);
VAR
  A, B: INTEGER;

FUNCTION IsSumOverflow(A, B: INTEGER): BOOLEAN;
BEGIN {IsSumOverflow}
  IsSumOverflow := (MAXINT - A <= B)
END; {IsSumOverflow}

BEGIN {ControlOverflow}
  WRITELN(MAXINT);
  READLN(A, B);
  IF IsSumOverflow(A, B)
  THEN
    WRITELN('Overflow')
  ELSE
    WRITELN(A + B)
END. {ControlOverflow}
