#include<stdio.h>
#define MAX 5
int main() {
    int choice;
    int a[MAX],top=-1,i;
    do{
        printf("--menu--");
        printf("1)insert 2)delete 3)display 4)peek");
        printf("enter the choice: ");
        scanf("%d",&choice);

        switch(choice){

            case 1:push(){
                int value;
                if(top==MAX-1){
                    printf("The stack is overflow!");
                }
                printf("Enter the elements to push: ");
                scanf("%d",&value);
                a[++top]=value;
                return 0;
            break;
            }
            case 2:
            int pop(){
                
                if(top==-1){
                    printf("Stack is underflow");
                }
                --top;
                return 0;
            break;
            }
            case 3:
            int display(){
                printf("Elements in the stack are: ");
                for(i=0;i<=top;top++)
                    printf("%d",&a[top]);
                return 0;
            break;
            }
            case 4:
            int peek(){
                return 0;
            break;
            }
            default:
            printf("entered choice is wrong!");
            return 0;
        }while(choice<5 && choice>0);
    }
    
}
