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
   int n,i,j,count=0,k=0;
   scanf("%d",&n);
   int arr[10],temp[10];
   for(i=0;i<=n;i++)
  {
      scanf("%d",&arr[i]);
  }
  for(i=0;i<=n;i++)
  {
     count=1;
     for(j=i+1;j<=n;j++)
    {
        if(arr[i]==arr[j] && arr[i]!='\0')
       {
           count++;
            arr[j]='\0';
       }
        
    }
    if(count>1)
    temp[k++]=arr[i];
    else
    printf("unique");
    break;
    }
    
    sort(temp,k);
    for(i = 0; i < k; i++)
        printf("%d  ", temp[i]);  
  }
