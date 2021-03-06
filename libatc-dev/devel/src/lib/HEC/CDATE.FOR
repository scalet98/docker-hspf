      SUBROUTINE CDATEX (CARRAY)
C
C     RETURNS THE CURRENT SYSTEM DATE IN A 9 CHARACTER
C     MILITARY STYLE FORMAT.  E.G. 07 APR 82
C
      CHARACTER CARRAY*(*)
      CHARACTER CT*11
C     INTEGER IARRAY(3)                                                 H
C
      INTEGER*4 JUL                                                     L
C     INTEGER*2 IYR, IMON, IDAY                                         M
C     INTEGER JYR, JMON, JDAY                                           M
C
      ILEN = LEN(CARRAY)
      IF (ILEN.LT.9) THEN
      CALL CHRFIL (CARRAY, '*')
      RETURN
      ENDIF
C
C     HARRIS DATE ROUTINE
C     CALL DATE(IARRAY)                                                 H
C     CALL HOLCHR (IARRAY,1,9,CARRAY,1)                                 H
C     IF (CARRAY(1:1).EQ.' ') CARRAY(1:1) = '0'                         H
C
C     MS FORTRAN DATE ROUTINE
C     CALL GETDAT (IYR, IMON, IDAY)                                     M
C     JYR = IYR                                                         M
C     JMON = IMON                                                       M
C     JDAY = IDAY                                                       M
C     CALL YMDDAT (JYR, JMON, JDAY, 117, CARRAY, NDATE, IERR)           M
C
C     Lahey Fortran
C      CALL DATE (CARRAY)                                                L
C      CALL DATJUL (CARRAY, JUL, IERR)                                   L
C      CALL JULDAT (JUL, 117, CARRAY, NDATE)                             L

C     FORTRAN 90
      CALL DATE_AND_TIME(DATE=CT)
      CARRAY = CT(5:6) // '/' // CT(7:8) // '/' // CT(1:4)
      CALL DATJUL (CARRAY, JUL, IERR)
      CALL JULDAT (JUL, 117, CARRAY, NDATE)
C
C     Unix
C     CALL SYSTIM (JUL, ISEC)                                           lg
C     CARRAY = ' '                                                      lg
C     CALL JULDAT (JUL, 117, CARRAY, NDATE)                             lg
C
      IF (IERR.NE.0) CALL CHRFIL (CARRAY, '*')                          ML
C
      RETURN
      END
