//TIME COMPLEXITY AND SPACE COMPLEXITY - BUBBLESORT

#include<stdio.h>
int main()
{
    int arr[10],n,count=0;
    int i,j,tempe;
    printf("Enter The Number of Elements of Array: ");count++;
    scanf("%d",&n);
    printf("Enter The Elements of Array: ");count++;
    for(i=0;i<n;i++)
    {
        count++;
        scanf("%d",&arr[i]);
    }
    count++;
    for(i=0;i<n-1;i++)
    {
        count++;    
        for(j=0;j<n-1-i;j++)    
            {
                count++;
                if(arr[i]>arr[j]);
                {
                 
                   tempe=arr[i];
                   arr[i]=arr[j];
                   arr[j]=tempe;
                }
             }
     }
     printf("Sorted Array: ");
     for(int i=0;i<n;i++)
     { 
         printf("%d",arr[i]);count++;
     }
     count++;
     printf("\nThe number of steps are: %d",++count);
     return 0;
     }            
    
