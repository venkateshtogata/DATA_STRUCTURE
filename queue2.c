#include <stdio.h>
#include <stdlib.h>
#define MAX 5
void insert();
int delete();
struct queue
{
	int items[MAX];
	int front,rear;
};

void main(){
	struct queue q;
	q.front=MAX-1;
	q.rear=MAX-1;
	int ch;
	int i,x;

	do
	{
		printf("\n1.INSERT \n2.DELETE");
		printf("\n ENTER YOUR operation \n");
		scanf("%d",&ch);

		switch(ch)
		{
				case 1:
					{
					printf("enter the value you want to insert");
					scanf("%d",&x);

					insert(&q,x);
					}
				break;
				case 2:
					delete();
				break;
		}
		ch = getchar();
	}while(ch!='q');
	
	//insert(&q,3);
	//insert(&q,5);
	//insert(&q,10);
	//x = delete(&q);
//	printf("deleted item is %d \n",x);
//	insert(&q,246);
//	insert(&q,759);
//	x = delete(&q);
//	printf("deleted item is %d \n",x);
//	insert(&q,1368);
//	x = delete(&q);
//	printf("deleted item is %d \n",x);
//	x = delete(&q);
//	printf("deleted item is %d \n",x);
//	x = delete(&q);
//	printf("deleted item is %d \n",x);
//	x = delete(&q);
//	printf("deleted item is %d \n",x);

	for(i=0;i<MAX;i++)
	printf("%d \t",q.items[i]);
	printf("\n");
}
	
	void insert(struct queue *pq,int x)
	{
		if(pq->front==MAX-1)
		pq->front=0;
		else
		(pq->front)++;
		if (pq->rear==pq->front)
		{
		printf("queue is over flow \n");
		exit(1);
		}
		pq->items[pq->front]=x;
		printf("\n inserted item is %d at location %d\n",x,pq->front);
		return;
	}

	int delete(struct queue *pq)
	{
		int y;
		if (pq->front == pq->rear)
		{
		printf("Queue is empty \n");
		exit(1);
		}
		if(pq->rear==MAX-1)
		pq->rear=0;
		else
		(pq->rear)++;
		
		y = (pq->items[pq->rear]);
		printf("\n deleted item is %d from location %d\n",y,pq->rear);

		return y;
	}
	
	
	//int empty(struct queue *pq)
	//{
	
	//if(pq->front == pq->rear)
	//{
	//printf("queue is empty \n");
	
