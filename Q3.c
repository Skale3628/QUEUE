//circular queue

#include<stdio.h>
#include<stdlib.h>

int front=-1;
int rear=-1;
int size=0;

int Enqueue(int arr[]){
    if((rear == size-1 && front ==0) || (rear==front-1)){
        return -1;
    }else{
        if(front==-1){
            front++;
            rear++;
            }else {
            if(rear == size-1 && front !=0)
                rear = -1;
        
            }
              rear++;
              printf("enter Data\n");
              scanf("%d",&arr[rear]);
              return 0;
    }
}

int Dequeue(int arr[]){
    if(front == -1){
        flag =0;
        return -1;
    }else{
        flag=1;
        int val=arr[front];
        if(rear==front){
            rear=-1;
            front=-1;
        }else{
            if(front==size-1){
            front =-1;
        }
        front++;
        } 
        return val;
    }

}


void main(){
    printf("enter size of an array \n");
    scanf("%d",&size);

    int arr[size];

    char choice;
    do{
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.Frontt\n");
        printf("4.PrintQueue\n");

        int ch;
        

        printf("enter choice\n");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            {
           Enqueue(arr);
            
            }
            break;
            case 2:
            {
                int ret = Dequeue(arr);
                if(flag == 1){
                    printf("%d dequed\n",ret);
                }else{
                    printf("Queue is empty\n");
                }
            }
            break;
            case 3:
            {
            int ret = Front(arr);
            if(flag == 1)
            printf("front =%d",ret);
            else
            printf("Q is empty\n");
            }
            break;
            case 4:
            {
              int ret = PrintQueue(arr);
              if(ret == -1){
                printf("Q is empty\n");
              }

              
            }
            break;

            default:
            printf("invalid input\n");

        }
        getchar();
        printf("continue?\n");
        scanf("%c",&choice);
    }while(choice == 'Y'|| choice == 'y');
}