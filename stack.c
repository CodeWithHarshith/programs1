#include<stdio.h>
#define MAX 5

void push(int a[],int *top)
{
    int value;

    if(*top==MAX-1){
        printf("The stack is overflow!");
        return;
    }
    printf("Enter the element to push: ");
    scanf("%d",&value);
    a[++(*top)]=value;
    for(int i=*top;i>=0;i--){
        printf("The elements in the stack are : %d\n",a[i]);
    }
}
void pop(int a[],int *top)
{

    if(*top==-1){
        printf("\nStack is underflow\n");
    }
    else{
        printf("\nPopped element is %d\n",a[*top]);
        (*top)--;
    }
}

void display(int a[],int top)
{
    int i;
    if (top == -1) {
    printf("\nStack is empty!\n");
    return;
}
    printf("Stack elements:\n");
    for(i=top;i>=0;i--){
        printf("%d\n",a[i]);
    }
}

void peek(int a[],int top)
{
    if(top==-1){
        printf("\nStack is underflow\n");
    }
    else{
        printf("\nTop element is %d\n",a[top]);
    }
}

int main() {
    int choice;
    int a[MAX],top=-1,i;
    do{
        printf("\n--STACK OPERATIONS--\n");
        printf(" 1)insert\n 2)delete\n 3)display\n 4)peek\n");
        printf("enter the choice: \n");
        scanf("%d",&choice);

        switch(choice){

            case 1:push(a,&top);
            break;
            
            case 2:pop(a,&top);
            break;
            
            case 3:display(a,top);
            break;
            
            case 4:peek(a,top);
            break;
            
            default:
            printf("entered choice is wrong!\n");
        }
    }while(choice<5 && choice>0);
    
    return 0;
}
