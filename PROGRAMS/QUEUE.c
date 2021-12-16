//____________________AUTHOR: DELNA K JOSE____________________//
//______________________DATE:16/12/2021______________________//
//____________AIM:IMPLEMENTATION OF QUEUE OPERATION__________//
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, queue[n],cho=1,front=0,rear=0,i,j=1,x=n;
    printf("\nENTER THE SIZE OF THE ARRAY: ");
    scanf("%d",&n);
    printf("\n\nQUEUE");
    printf("\n\n1.INSERTION\n2.DELETION\n3.DISPLAY \n4.EXIT");
    while(cho)
    {
        printf("\n\nEnter Your Choice:");
        scanf("%d",&cho);
        switch(cho)
        {
        case 1:
            if(rear==x)
                printf("\n Queue is FULL");
            else
            {
                printf("\nEnter the element %d:  ",j++);
                scanf("%d",&queue[rear++]);
            }
            break;
        case 2:
            if(front==rear)
            {
                printf("\n Queue is EMPTY");
            }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
            break;
        case 3:
            printf("\nELEMENTS ARE:\n");
            if(front==rear)
                printf("\n Queue is EMPTY");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice");
            }
        }
    }
    return 0;
}
        case 3:
            printf("\nELEMENTS ARE:\n");
            if(front==rear)
                printf("\n Queue is EMPTY");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid Choice");
            }
        }
    }
    return 0;
}
