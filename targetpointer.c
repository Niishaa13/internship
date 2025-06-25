#include<stdio.h>
void findTargetSum(int *arr,int n ,int target );
int main()
{
    int arr[5];
    int size,counter1,target;
    printf("enter the array size of element:");
    scanf("%d",&size);
    printf("enter the array elements:\n");
    for(counter1=0;counter1<size;counter1++)
    {
        scanf("%d",&arr[counter1]);
    }
    printf("enter the target element:");
    scanf("%d",&target);
    findTargetSum(arr,size,target);
    return 0;
}
void findTargetSum(int *arr,int size,int target)
{
    int counter1,counter2,counter3;
    printf("the target element is :\n");
    for(counter1=0;counter1<size;counter1++)
    {
        for(counter2=counter1+1;counter2<size;counter2++)
        {
            for(counter3=counter2+1;counter3<size;counter3++)
            {
                if(arr[counter1]+arr[counter2]+arr[counter3]==target)
                {
 printf("%d+%d+%d=%d",arr[counter1],arr[counter2],arr[counter3],target);
                    return ;
                }
            }
        }
    }
    printf("no pair found");
}