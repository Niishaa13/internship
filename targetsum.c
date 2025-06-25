#include<stdio.h>
void findTargetSum(int *arr,int n ,int target );
int main()
{
    int arr[5];
    int n,i,target;
    printf("enter the array size of element:");
    scanf("%d",&n);
    printf("enter the array elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the target element:");
    scanf("%d",&target);
    findTargetSum(arr,n,target);
    return 0;
}
void findTargetSum(int *arr,int n,int target)
{
    int i,j,k;
    printf("the target element is :\n");
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==target)
                {
                    
                    printf("%d+%d+%d=%d",arr[i],arr[j],arr[k],target);
                    return ;
                }
            }
        }
    }
    printf("no pair found");
}
