C     from CMUTS.INC   
C     MUTSIN module common
      COMMON/SCRTCH/MUTFL,NPT,NMN,NLINES,MISSFG,NCURV,MESSU,MSGFL,
     $              MUTNO,FILVAL,DUMA,UUNITS,PIVL,DELT,NDAY,YR,MON,
     $              DAY,HR,MIN,IVL,IVL1,NDAYS,PIVLNO,STFG,VAL,PTFP,
     $              MNFP,DUMMUT
      INTEGER       MUTFL,NPT,NMN,NLINES,MISSFG,NCURV,MESSU,MSGFL,
     $              MUTNO,DUMA(18),UUNITS,PIVL,NDAY(12),YR,MON,DAY,HR,
     $              MIN,IVL,IVL1,NDAYS,PIVLNO,STFG,PTFP(20),MNFP(20)
      REAL          FILVAL,DELT,VAL(20)
      INTEGER       DUMMUT(17887)
C
      EQUIVALENCE   (ASVEC,MUTFL),(MUTINF,MUTFL),(DATIM,YR)
      INTEGER       ASVEC(1),MUTINF(5),DATIM(5)
C     end byte:  72000 word:18000
