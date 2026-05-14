PROGRAM RecursiveSum(INPUT, OUTPUT);
CONST
  MinDigit = 1;

VAR
  S, N: INTEGER;

PROCEDURE GetSum(VAR Sum: INTEGER; N: INTEGER);
BEGIN {GetSum}
  Sum += N;

  IF N >= MinDigit
  THEN
    GetSum(Sum, N - 1)
END; {GetSum}

BEGIN {RecursiveSum}
  READLN(N);
  S := 0;
  GetSum(S, N);
  WRITELN('Sum = ', S)
END. {RecursiveSum}
