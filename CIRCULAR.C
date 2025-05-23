#include <stdio.h>  
  
# define max 6  
int queue[max];  
int front=-1;  
int rear=-1;  

void enqueue(int element)  
{  
    if(front==-1 && rear==-1)     
    {  
        front=0;  
        rear=0;  
        queue[rear]=element;
        printf("inserted element is %d",queue[rear]);   
    }  
    else if((rear+1)%max==front)    
    {  
        printf("Queue is overflow..");  
    }  
    else  
    {
	rear=(rear+1)%max;
	queue[rear]=element;
	printf(" inserted element is %d",queue[rear]);
    }
}
int dequeue()
{
    if((front==-1) && (rear==-1))
    {
	printf("\nQueue is underflow..");
    }
 else if(front==rear)
{
   printf("\nThe dequeued element is %d", queue[front]);
   front=-1;
   rear=-1;
}
else
{
    printf("\nThe deleted  element is %d", queue[front]);
   front=(front+1)%max;
}
}
void display()
{
    int i=front;
    if(front==-1 && rear==-1)
    {
	printf("\n Queue is empty..");
    }
    else
    {
	printf("\nElements in a Queue are :");
	while(i<=rear)
	{
	    printf("%d\t", queue[i]);
	    i=(i+1)%max;
	}
    }
}
void main()
{
    int choice=1,x;

   while(choice<4 && choice!=0)
   {
    printf("\n1.Insert an element\n2.Delete an element\n3.Display \n4.Exit");
    printf("\nEnter your choice");
    scanf("%d", &choice);

    switch(choice)
    {
	case 1:
	printf("Enter the element to be inserted");
	scanf("%d", &x);
	enqueue(x);
	break;
	case 2:
	dequeue();
	break;
	case 3:
	display();
	break;
	case 4:
	printf("Exit");
	break;
	default:
	printf("Invalid choice");
    }
   }
}