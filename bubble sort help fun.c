#include<stdio.h>
void printarray(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	 {
	   printf("%d ",arr[i]);
     }
     printf("/n");
}
void bubble_sort(int *arr,int n)
{
   int i,j,temp,swap;
   for(i=0;i<n;i++)
   {
   	 printf("Pass: %d",i+1);
   	 for(j=0;j<n-1;j++)
   	 {
   	  if(arr[j]>arr[j+1])
   	  {
       temp=arr[j];
       arr[j]=arr[j+1];
       arr[j+1]=temp;
       swap=1;
      }
     }  
   } 
   if(swap==1)
   printf(arr,n);
}
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble_sort(arr,n);
    for(i=0;i<n;i++)
    {
    	printf("%d ",arr[i]);
	}
	    	
}
