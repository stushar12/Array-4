#include<stdio.h>
int main()
{
int arr[10];
int n,max=0,count=0;
printf("\n Enter the size of array   ");
scanf("%d",&n);
printf("\n Enter the elements of array   \n");
for(int i=0;i<n;i++)
{
  scanf("%d",&arr[i]);
}
for(int i=0;i<n;i++)
{
  if(arr[i]>max)
  max=arr[i];
}
for(int i=0;i<n;i++)
{
  count=0;
  for(int j=0;j<n;j++)
  {
    if(arr[i]==arr[j]&&count!=0)
    {
    arr[j]=++max;
  }
    else if(arr[i]==arr[j]&&count==0)
    {
      count++;
    }
  }
}
printf("\n Final Array is ");
for(int i=0;i<n;i++)
{
  printf("%d ",arr[i]);
}
}
