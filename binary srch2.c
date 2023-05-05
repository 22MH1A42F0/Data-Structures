#include<stdio.h>
int binary_search(int *arr,int n,int se)
{
	int low=0,high=n-1,mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arr[mid]==se)  return mid;
		else if(se>arr[mid])  low=mid+1;
		else high=mid-1;
	}
	return -1;
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
	int se;
	scanf("%d",&se);
	int y=binary_search(arr,n,se);
	if(y==-1)
		{
			printf("element not found");
		}
    else
    {
    	printf("element found at %d index",y);
	}
}
