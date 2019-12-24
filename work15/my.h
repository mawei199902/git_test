#include <errno.h> //定义错误码
#include <stdio.h> //定义输入／输出函数
#include <stdlib.h> //定义杂项函数及内存分配函数
#include <string.h> //字符串处理
#include <limits.h> //定义各种数据类型最值常量
#include <semaphore.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>
#define LOOP 10000000
#define NUM 4
#define TN 100
#define WRITER_FIRST
