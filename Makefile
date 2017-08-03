#
#  QuiT v1.1.7 makefile
#


GPP	=g++
OUTFILE	=quit
PRJNAME =quit

CFLAGS	=-Wall -m32 -DLINUX -I"/usr/include" -L"/usr/lib" -pthread -L"/usr/lib/i386-linux-gnu" -lmysqlclient

all:
	$(GPP) -o ./$(PRJNAME) ./$(PRJNAME).cpp $(CFLAGS)
