
#include <stdio.h>

#define MAX 10
void Push();
void Pop();
void Display();

int Stack[5];
int Top=-1;

void main()
{
	int ch;

	do
	{
		printf("\n1.PUSH \n2.POP");
		printf("\n ENTER YOUR operation \n");
		scanf("%d",&ch);

		switch(ch)
		{
				case 1:Push();
				break;
				case 2:Pop();
				break;
		}
		//getch();
	}while(ch!=9);

}
void Push()

{
	int iteam;
	if (Top== MAX-1)
	{
		printf("overflow");
	}
	else
	{
		printf("enter the value you want to push");
		scanf("%d",& iteam);
		

		Top=Top+1;
		Stack[Top]=iteam;
	}

}
void Pop()
{
	int iteam;
	if (Top== -1)
	{
		printf("underflow");
	}
	else
	{

		
		iteam=Stack[Top];
		Top=Top-1;
		printf("the pooped value is %d",iteam);
	}
}
