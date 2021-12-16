#include <stdio.h>
#define base 100
int stack[base],choice,n,top,x,i;
int main()
{
top=-1;
printf("Enter the size of STACK[MAX=100]:");
scanf("%d",&n);
printf("STACK OPERATIONS USING ARRAY\n");
printf("1.PUSH\n2.POP\n3.DISPLAY\n4.PEEK\n5.EXIT");
do
{
    printf("\n Enter the choice:\n");
    scanf("%d",&choice);
    switch(choice)
    {
       case 1:
       {
         {
           if(top>=n-1)
           {
           printf("\n\tSTACK is overflow");
           }
           else
           {
           printf("Enter a value to be pushed: \n ");
           scanf("%d",&x);
           top++;
           stack[top]=x;
           }
         }
     
       }
           break;
       case 2:
       {
          {
          if(top<=-1)
             {
               printf("\n\t Stack is underflow\n");
             }
          else 
          {
               printf("\n\t The popped element is : %d\n",stack[top]);
               top--;
          }
       }
    
      }
         break;
      case 3:
      {
         {
          if(top>=0)
        {
         printf("\n\t The ELEMENTS IN STACK:\n");
         for(i=top; i>=0; i--)
         printf("%d\n",stack[i]);
         printf("\n NEXT CHOICE\n");
         }
         else
         {
           printf("\n STACK IS EMPTY");
           }
         }
         }
         break;
         case 4:
         	printf("The last element is: %d",stack[top]);
         	break;
         case 5:
         {
           printf("\n\t EXIT POINT\n");
           break;
           }
          default:
          {  
             printf("\n\t ENTER A VALID CHOICE (1/2/3/4)");
             }
           }
         }
         while(choice!=5);
         return 0;
         }
         
         
         
         
         
         
         
         
         
         
         
         
         
         
      
      
      
