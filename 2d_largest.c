// header file
#include <stdio.h>
// main function
int main() 
{
   int arr[10];
   int arr1[10];
   int n,i,j;
   int max,max1;
   
   // getting  array 1 inputs from the user
   
   printf("enter the size:");
   scanf("%d",&n);
   printf("enter the elements:\n");
   for(i=0;i<n;i++)
   {
           scanf("%d",&arr[i]);
       }
       
       // getting 2nd array inputs from the user
       
       
       printf("enter the 2nd array element:\n");
       for(j=0;j<n;j++)
       {
           scanf("%d",&arr1[j]);
       }
       
       // check max value in array 1
       
       
  max=arr[0];
  for(i=1;i<n;i++)
  {
      if(max<arr[i])
      {
       max=arr[i];
      }
  }
   printf("the largest number in array 1 : %d",max);
printf("\n");

// check max value in array 2

max1=arr1[0];
for(j=1;j<n;j++)
{
    if(max1<arr1[j])
    {
        max1=arr1[j];
    }
}
 printf("the largest number in array 2 %d",max1); 
printf("\n");

// check max value in array 1 and array 2

if(max<max1)
{
    max=max1;
}
printf("the largest number in array 1 and array 2 is %d",max);
return 0;
}

