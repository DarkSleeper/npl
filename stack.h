#include <stdio.h>
#define MAXSTACKSIZE 200 //���ڴ���ջ��double����

typedef struct _Stack
{
    char array[MAXSTACKSIZE];
    int top; //ջ��index
} Stack;

Stack create(void);             //��ʼ��ջ��array��top����Ϊ�㣩
char pop(Stack stack);          //ջΪ��ʱ����NULL
char push(Stack stack, char c); //�ﵽ���ֵ�󱨴���������
char peek(Stack stack);         //ջΪ��ʱ����NULL
void destroy(Stack stack);      //��ո�ջ�����ݣ���ʵûɶ������ΪC����û�ж����������������
