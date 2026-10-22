#include <stdio.h>
#define MAX 5

void enqueue ()
{
    int value;
    int a[MAX] , top;

    if ( top==MAX-1 ) {
        printf ("The queue is overflow!\n");
    }
    printf ("Enter the elemnet to push :\n");
    scanf ( "%d" , &value);
    a [++top] = value;
    for (int i=top ; i>=0 ; i--) {
        printf ( "The elements in queue are :%d\n" , a[i] );
    }
}

void dequeue () {
    int a[MAX] , top;
    if ( top==-1 ) {
        printf ( "The queue is underflow!\n" );
    }
    else {
        top=-1;
        printf ( "The deleted element is : %d\n" , a[top] );
        ++top;
    }
}

void display() {
    int a[MAX] , top;
    if ( top==-1 ) {
        printf ( "The queue is underflow!\n" );
    }
    else {
        for ( int i=0 ; i>=0 ; i++) {
            printf ( "The elements in queue are: %d\n" , a[i] );
        }
    }
}

void peek() {
    int a[MAX], top;
    if ( top==-1 ) {
        printf( "Queue is underflow!\n" );
    }
    else {
        for (int i=0 ; i>=0 ; i++ ){
            printf ( "The first element is : %d" , a[i]);
        }
    }
}

int main () {
    int top=-1 , choice , i , a[MAX] ;
    do{
        printf ("\n--- The Queue Operations ---\n");
        printf (" 1) Insert \n 2) Delete \n 3) Display \n 4) Peek \n ");
        printf ("Enter the choice : ");
        scanf ("%d" , &choice);
        
        switch (choice) {

            case 1: enqueue();
            break;

            case 2: dequeue();
            break;

            case 3: display();
            break;
            
            case 4: peek();
            break;

            default :
            printf("entered the wrong choice :\n");
        }
    } while (choice<5 && choice>0);
    return 0;
}