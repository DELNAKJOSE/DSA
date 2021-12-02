//TIME COMPLEXITY AND SPACE COMPLEXITY - SELECTIONSORT

#include<stdio.h>
int main()
{

	int arr[10],n;
	int i,j,min,tempe;
	int count=0;
	printf("Enter the number of elements:\n");count++;
	
	scanf("%d",&n);count++;
	printf("Enter the elements of the array: \n");count++;
	for(i=0;i<n;i++)
	{	
		scanf("%d",&arr[i]);count++;
	}
	count++;
	for(i=0;i<n-1;i++)
	{
		count++;
		min=i;
		for(j=i+1;j<n;j++)
		{	
			count++;
			if(arr[j]<arr[min])
				min=j;count++;
		}
		
		tempe=arr[i];count++;
		arr[i]=arr[min];count++;
		arr[min]=tempe;count++;
	}

 	printf("The Sorted Array is: \n");count++;
	for(j=0;j<n;j++)
	{
		printf("%d",arr[j]);count++;	
	}
	count++;
	printf("\nThe number of steps are: %d",count);
	return 0;
}
