#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef enum{OK = 0,ERROR = 1} Status;
#define STACKMAX 10
#define INITIAL_SIZE 0

typedef int ElemType;
typedef struct StackNode
{
	ElemType data;
	StackNode *next;
}StackNode;

typedef struct 
{
	StackNode *head;
	int cursize;
}ListStack;

Status InitStack(ListStack *st)
{
	if(NULL == st && NULL == st->head)
	{
		return ERROR;
	}
	else
	{
		st->cursize = INITIAL_SIZE;
		ListStack *ss;
		ss = (ListStack *)malloc(sizeof(ElemType)*STACKMAX);
		if(NULL == ss && NULL == ss->head )
		{
			return ERROR;
		}
		
		st->head = ss->head;
		st->head->data = -1; 
		
		free(ss);
		
		return OK;
	}
		
}

ElemType Input_ElemType(void)
{
	ElemType x;
	printf("input:\n");
	scanf("%d",&x);
	return x;
} 

Status Push(ListStack *st,const ElemType x) 
{
	if(NULL == st && NULL == st->head)//这里暂时不对元素x进行验证，假设所输入x 都是正确的 
	{
		return ERROR;
	}
	else
	{
		ListStack *s = (ListStack *)malloc(sizeof(ElemType)*STACKMAX);
		if(NULL == s && NULL == s->head)
		{
			return ERROR;
		}
		s->head->data = x;
		st->head->next = s->head;
		st->head->data = s->head->data;
		s->head->next = s->head->next;
		
		st->cursize++;
		
		free(s);
		return OK;	 	
	} 
}

Status Pop(ListStack *s)
{
	if( NULL == s && NULL == s->head)
	{
		return ERROR;
	}
	else
	{
		
	}
}

Status DestroyStack(ListStack *st)
{
	
	if(NULL == st)
	{
		return ERROR;
	}
	else
	{
		;//Pop(st);
	}
}

int main(int argc, char *argv[]) 
{
	
	ListStack st;
	InitStack(&st);
	
	Push(&st,Input_ElemType());
	Pop(&st);	
	printf("%d",st.head->data);
	//DestroyStack(&st);
	return 0;
}
