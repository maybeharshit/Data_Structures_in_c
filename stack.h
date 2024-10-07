#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int stack[MAX];
int tos =-1;
int isFull()
{
	return(tos>=MAX);
}
int isEmpty()
{
	return(tos<0);
}
void insert(int x)
{
	if(isFull()){
		return;
	}
	
	stack[++tos] = x;
}
void deletes()
{
	if(isEmpty())
		return;
	tos--;
}
void display()
{
	if(isEmpty()){
		printf("Stack is empty\n");
		return;
	}
	int i;
	printf("Stack:");
	for(i=tos;i>-1;i--)
		printf("\t%d\t",stack[i]);
	printf("\n");
}

