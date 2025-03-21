#include <stdio.h>
#define MAXSTACKSIZE 200 //用于创建栈和double数组

typedef struct _Stack
{
    char array[MAXSTACKSIZE];
    int top; //栈顶index
} Stack;

Stack create(void);             //初始化栈（array和top都变为零）
char pop(Stack stack);          //栈为空时返回NULL
char push(Stack stack, char c); //达到最大值后报错并结束程序
char peek(Stack stack);         //栈为空时返回NULL
void destroy(Stack stack);      //清空该栈的内容（其实没啥卵用因为C里面没有对象或者析构函数）
