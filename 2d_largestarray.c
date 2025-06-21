// header file
    #include <stdio.h>

// main function
int main() 
{
   int arr[10];
   int arr1[10];
   int size,counter1,counter2;
   int max,max1;
   
// getting  array 1 inputs from the user
   
   printf("enter the size:");
   scanf("%d",&size);
   printf("enter the elements:\n");
   for(counter1=0;counter1<size;counter1++)
    {
        scanf("%d",&arr[counter1]);
    }
       
// getting 2nd array inputs from the user
       
       
    printf("enter the 2nd array element:\n");
       for(counter2=0;counter2<size;counter2++)
       {
           scanf("%d",&arr1[counter2]);
       }
       
 // check max value in array 1
       
       
  max=arr[0];
  for(counter1=1;counter1<size;counter1++)
    {
      if(max<arr[counter1])
        {
            max=arr[counter1];
        }
    }
printf("the largest number in array 1 : %d",max);
printf("\n");

// check max value in array 2

max1=arr1[0];
for(counter2=1;counter2<size;counter2++)
    {
        if(max1<arr1[counter2])
            {
                max1=arr1[counter2];
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