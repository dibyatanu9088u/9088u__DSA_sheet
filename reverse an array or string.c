//2.program to reverse an array or string

#include<stdio.h>
#include <stdlib.h>

void reverse(int arr[],int start, int end)
{
	int temp;
	
	if(start<end)
	{
		temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		reverse(arr,start+1,end-1);
	}
}

void print(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}

void main()
{
	int arr[50],n,i;
	printf("Enter the size of the array:");
	scanf("%d",&n);
	printf("Enter the elements to reverse:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Original array:	");
	print(arr,n);
	reverse(arr,0,n-1);
	printf("Reversed array:");
	print(arr,n);
}
