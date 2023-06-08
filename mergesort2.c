#include<stdio.h>
void merge(int *arr,int L,int M,int R)
{
   int res[R-L+1],i=L,j=M+1,k=0,z;
   while(i<=M && j<=R)
   {
     if(arr[i]<=arr[j])   return res[k++]=arr[i++];
     else res[k++]=arr[j++];
   }
   	while(i<=M)
    	res[k++]=arr[i++];
	while(j<=R)
	    res[k++]=arr[j++];
	for(i=L;i<=R;i++)
      arr[i]=res[z++];  //printf("%d ",res[z]);
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
    merge(arr,0,2,n-1);
    for(i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}	
    return 0;
}
