#include<stdio.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int lomuto_partition(int *arr,int L,int R)
{
   int i=L-1,j=L,pivot=arr[R],temp;
   for(;j<R;j++)
   {
   	 if(arr[j]<pivot)
   	 {
   	 	i++;
   	 	swap(&arr[i],&arr[j]);
   	 }
   }
   swap(&arr[i+1],&arr[R]);
   return i+1;	
}
int quick_sort(int *arr,int L,int R)
{
	if(L<R)
	{
		int p=lomuto_partition(arr,L,R);
		quick_sort(arr,L,p-1);
		quick_sort(arr,p+1,R);
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
    quick_sort(arr,0,n-1);
    for(i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}	
    return 0;
}

