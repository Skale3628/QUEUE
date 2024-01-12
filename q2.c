//implementing queue with linkedlist
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *Front =NULL;
struct node *rear =NULL;

int flag =0;

 struct node *createnode(){
     struct node *newnode=(struct node *)malloc(sizeof(newnode));
    if(newnode == NULL){
           printf("memory full(heap memory)\n");
         exit();
    }
    printf("enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    return newnode;

 }

 int Enqueue(){
    struct node *newnode = createnode();
    if ( Front == NULL) {  
        Front=newnode;
        rear=newnode;
    }else{
        rear->next=newnode;
        rear = newnode;
    }
 }

int Dequeue(){
    if(Front == NULL){
        flag =0;
        return -1;
    }else{
        flag =1;
        int val=front->data;
        if(front->next = NULL){
            free(Front);
            Front=NULL;
            rear=NULL;
        }else{
            struct node *temp =Front;
            Front=front->next;
            free(temp);
        }
        return val;
    }

    
}

int Front(){
    if(Front == NULL){
        flag =0;
        return-1;

    }else{
        flag =1;
        return front->data;
    }
}

int PrintQueue(){
    if(Front == NULL)
    return -1;
}else{
    struct node *temp=front;
    while(temp != NULL){
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return 0;
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