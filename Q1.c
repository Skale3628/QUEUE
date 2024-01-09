#include<stdio.h>
int size=0;
int front=-1;
int rear =-1;
int flag = 0;
int val;

int Enqueue(int arr[]){
    if(rear == size-1){
        return -1;
    }else{
        if(front == -1 ){                              //if(front == -1 && rear == -1){
            front++;
            //rear++;
            //printf("enter data\n");
            //scanf("%d",&arr[rear]);
        }//else{
            rear++;
        //}
        printf("enter data\n");
        scanf("%d",&arr[rear]);
        return 0;
    }
}

int Dequeue(int arr[]){
    if(rear == -1 || front>rear){
        flag = 0;
        return -1;
    }else{
        flag = 1;
        return arr[front];
        front++;
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
            int ret = Enqueue(arr);
            if(ret == -1){
                printf("Q overflow\n");

            }
            }
            break;
            case 2:
            {
                int ret = Dequeue(arr);
                if(flag == 1){
                    printf("%d dequed\n",ret);
                }else{
                    printf("Queue underflow\n");
                }
            }
            break;
            case 3:
            {
               // Frontt(arr);
            }
            break;
            case 4:
            {
              //  PrintQueue(arr);
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