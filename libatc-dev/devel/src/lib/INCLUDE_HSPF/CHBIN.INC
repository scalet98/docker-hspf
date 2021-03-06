C
C     parameter for 
      INTEGER   MAXHBN,MXBBUF
      PARAMETER(MAXHBN=100,MXBBUF=10000)
C
C     common block for binary output file buffer
      COMMON/CHBUF/FDFLAG,BINBUF
      INTEGER FDFLAG(MAXHBN)
      CHARACTER*1   BINBUF(MXBBUF*4)
C
      INTEGER      IBUF(MXBBUF)
      REAL         RBUF(MXBBUF)
      EQUIVALENCE (BINBUF,IBUF,RBUF)
