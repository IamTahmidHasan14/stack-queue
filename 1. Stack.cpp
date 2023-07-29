#include<stdio.h>
int tahmid[10], input, n=10, top, x, i;
void push()
{
    if(top>=n-1)
        printf("\n\tSTACK FULL\n");
    else{
        printf("Enter a value for push: ");
        scanf("%d",&x);
        top++;
        tahmid[top]=x;
    }
}
void pop()
{
    if(top<=-1)
        printf("\n\tSTACK EMPTY !!");
    else{
        printf("\n\t%d Popped Successful\n",tahmid[top]);
        top--;
    }
}
void display()
{
    if(top>=0){
        printf("\n<--Display-->\n");
        for(i=top; i>=0; i--){
            printf("\n  %d",tahmid[i]);
            if(i==top)
                printf(" <--Top");
            }
        printf("\nEnter your Choice(1-4): ");
    }
    else
        printf("\nSTACK EMPTY !!");
}
int main()
{
    top=-1;
    printf("<--Menu-->\n");
    printf(" 1. Push\n");
    printf(" 2. Pop\n");
    printf(" 3. Display\n");
    printf(" 4. Exit\n");
    do{
        printf("Enter your Choice(1-4): ");
        scanf("%d",&input);
        switch(input){
            case 1: push(); break;
            case 2: pop(); break;
            case 3: display(); break;
            case 4: printf("\tEXIT"); break;
            default: printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
    }
    while(input!=4);
    return 0;
}
