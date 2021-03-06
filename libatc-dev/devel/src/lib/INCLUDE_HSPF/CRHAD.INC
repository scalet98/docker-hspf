C     from CRHAD.INC   
C     RCHRES module common
C            ADCALC section
C
C     + + + PARAMETERS + + +
      INCLUDE 'PMXEXI.INC'
C
      COMMON/SCRTCH/HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ,PFLAG,BFLAG,DUMY,PIVL,BIVL,
     $              PYREND,BYREND,RCHPFG,RCHBFG,UUNITS,IUNITS,OUNITS,
     $              PUNIT,BUNIT,MESSU,MSGFL,RCHNO,RCHID,DELT,DELT60,
     $              DELTS,NDAY,NDAYS,LKFG,NEXITS,HRFG,DAYFG,STFG,
     $              EDAYFG,EMONFG,EPYRFG,EBYRFG,YR,MON,DAY,HR,MIN,IVL,
     $              IVL1,PIVLNO,BIVLNO,NXTMON,SPAFP,SPAKND,SPIVL,
     $              SPOPNO,SPOUT,SPNUND,DUMGEN,DUM1,PREC,DUM2,PRECFP,
     $              DUM3,KS,DUM3X,VOL,VOLS,DUM4,RO,ROS,DUM5,VOLFP,DUM6,
     $              O,OS,DUM7,OFP,DUM8,CRRAT,SROVOL,EROVOL,SOVOL,EOVOL,
     $              DUMRCH
      INTEGER       HYDRFG,ADFG,CONSFG,HTFG,SEDFG,GQFG,OXFG,NUTFG,
     $              PLKFG,PHFG,ACIDFG,DUMZ(2),PFLAG(11),BFLAG(11),
     $              DUMY(1),PIVL,BIVL,PYREND,BYREND,RCHPFG,RCHBFG,
     $              UUNITS,IUNITS,OUNITS,PUNIT(2),BUNIT(2),MESSU,
     $              MSGFL,RCHNO,RCHID(5),NDAY(12),NDAYS,LKFG,NEXITS,
     $              HRFG,DAYFG,STFG,EDAYFG,EMONFG,EPYRFG,EBYRFG,YR,
     $              MON,DAY,HR,MIN,IVL,IVL1,PIVLNO,BIVLNO,NXTMON,
     $              SPAFP,SPAKND,SPIVL,SPOPNO,SPOUT,SPNUND,DUMGEN(13),
     $              PRECFP,VOLFP,OFP(MXEXIT)
      REAL          DELT,DELT60,DELTS,PREC,KS,RO,ROS,O(MXEXIT),
     $              OS(MXEXIT),CRRAT,SROVOL,EROVOL,SOVOL(MXEXIT),
     $              EOVOL(MXEXIT)
      DOUBLE PRECISION  VOL,VOLS
      INTEGER       DUM1(505),DUM2(207),DUM3(2015),DUM3X(535),
     $              DUM4(720),DUM5(101),DUM6(711),DUM7(500),
     $              DUM8(4160),DUMRCH(40397)
C
      EQUIVALENCE   (ASVEC,HYDRFG),(UNIT,UUNITS),(TIMFG,HRFG),
     $              (DATIM,YR),(AROVOL,SROVOL),(AOVOL,SOVOL(1))
      INTEGER       ASVEC(11),UNIT(7),TIMFG(6),DATIM(5)
      REAL          AROVOL(2),AOVOL(MXEXIT,2)
C     end byte: 200000 word:50000
