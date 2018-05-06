#include <stdio.h>
int sort(int *arr,int n)
{
	int i,j,temp;
	 for(i =0; i<n-1;i++)
    {
        for(j = 0;j<n-i-1;j++)
        {
            if( arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            } 
        }
}}
void main()
{
   int n,i,k=0;
   scanf("%d",&n);
   int arr[10],temp[10];
   for(i=0;i<n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
  {
  	if(arr[i]==i)
  	temp[k++]=arr[i];
}
  if(temp[i]==NULL)
  {
  	printf("unique");
  }
  sort(temp,k);
  for(i=0;i<k;i++)
  printf("%d ",temp[i]);
}
 
