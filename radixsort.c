#include<stdio.h>
int get_Max(int *arr,int n) 
{
	int max=arr[0],i;
	for(i=1;i<n;i++)
	{
		if(arr[i]>max)
		{
		   max=arr[i];
	    }
	}
	return max;
}
void radix_sort(int *arr,int n)
{
	int max=get_Max(arr,n),i,j;
	int e=1;
	while(max)
	{
		int counts[10]={0};
		int buckets[10][n];
		for(i=0;i<n;i++)
		{
			int place=(arr[i]/e)%10;
			buckets[place][counts[place]++]=arr[i];
		}
		int k=0;
		for(i=0;i<10;i++)
		{
			for(j=0;j<counts[i];j++)
			{
				arr[k++]=buckets[i][j];
			}
		}
		e*=10;
		max/=10;
	}	
}
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	radix_sort(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}