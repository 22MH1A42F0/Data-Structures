#include<stdio.h>
void selection_sort(int *arr,int n)
{
    int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		int min_index=i;
	    for(j=i+1;j<n;j++)	
	    {
	    	if(arr[j]<arr[min_index])
	    	{
	        	min_index=j;
	        	
	        }
		}
		temp=arr[i];
		arr[i]=arr[min_index];
		arr[min_index]=temp;
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
	selection_sort(arr,n);
	for(i=0;i<n;i++)
	{
	   printf("%d ",arr[i]);	
	}	
}
