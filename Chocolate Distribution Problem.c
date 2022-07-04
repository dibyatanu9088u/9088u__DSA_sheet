#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#define INF 999
void b_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void choco_distribution(int arr[],int n,int m)
{
	int min_diff = INF,diff=0,i;
	if (m == 0 || n == 0)
        printf("\nAll zero\n");
    b_sort(arr,n);
	if(n<m)
		printf("Insufficient packets\n");
	else{
		for (i = 0; i + m - 1 < n; i++) 
		{
	        diff = arr[i + m - 1] - arr[i];
	        if (diff < min_diff)
	            min_diff = diff;
	    }
	    printf("Minimum diff is: %d",min_diff);
	}
	
}
int main()
{
	int n,m,i,arr[50];
	printf("Enter number of packets:");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number of students:");
	scanf("%d",&m);
	choco_distribution(arr,n,m);
	return 0;
}
