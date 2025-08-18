#include<stdio.h>
#include<stdlib.h>
int main()
{
    int **adj;
    int row,column;
    int counter1,counter2;
    printf("enter the row:");
    scanf("%d",&row);
    printf("enter the column:");
    scanf("%d",&column);
    adj=(int**)malloc(row*sizeof(int*));
    for(counter1=0;counter1<row;counter1++)
    {
        adj[counter1]=(int*)malloc(column*sizeof(int));
    }
    printf("enter the adjacency matrix:\n");
    for(counter1=0;counter1<row;counter1++)
    {
        for(counter2=0;counter2<column;counter2++)
        {
            printf("[%d][%d]:",counter1,counter2);
            scanf("%d",&adj[counter1][counter2]);
        }
    }
    printf("\t\tADJACENCY MATRIX\n");
    for(counter1=0;counter1<row;counter1++)
    {
        for(counter2=0;counter2<column;counter2++)
        {
            printf("%d ",adj[counter1][counter2]);
        }
        printf("\n");
    }
    for(counter1=0;counter1<row;counter1++)
    {
        free(adj[counter1]);
    }
    free(adj);
    return 0;
}