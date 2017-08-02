//Таблицы

#ifndef TESTMYSQLH
#define TESTMYSQLH

#include<stdio.h>
#ifdef WIN32
#include<windows.h>
#include<Commctrl.h>
#include<Strsafe.h>
#include<winuser.h>
#include<mysql.h>
#define socklen_t int
#endif
#include<time.h>

#ifdef LINUX
#include<ctype.h>
#include<netdb.h>
#include<stdlib.h>
#include<memory.h>
#include<unistd.h>
#include<pthread.h>
#include<arpa/inet.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<mysql/mysql.h>
#define SOCKET int
#define strcat_s(a,b,c) strncat(a,c,b)
#define strcpy_s(a,b,c) strncpy(a,c,b)
#define sprintf_s snprintf
#define Sleep(a) usleep(a*1000)
#define WORD unsigned short
#define DWORD unsigned int
#define closesocket close
#define LPVOID void*
extern int h_errno;
#endif

#ifdef WIN32
//#include"resource.h"
#pragma comment(lib, "mysqlclient.lib")
#endif

#endif
