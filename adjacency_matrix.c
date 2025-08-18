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

    // allocate memory for row pointer
    adj=(int**)malloc(row*sizeof(int*));

    //allocate memory space for each row
    for(counter1=0;counter1<row;counter1++)
    {
        adj[counter1]=(int*)malloc(column*sizeof(int));
    }

    //input adjacency matrix from the user
    printf("enter the adjacency matrix:\n");
    for(counter1=0;counter1<row;counter1++)
    {
        for(counter2=0;counter2<column;counter2++)
        {
            printf("[%d][%d]:",counter1,counter2);
            scanf("%d",&adj[counter1][counter2]);
        }
    }

    //print adjacency matrix
    printf("\t\tADJACENCY MATRIX\n");
    for(counter1=0;counter1<row;counter1++)
    {
        for(counter2=0;counter2<column;counter2++)
        {
            printf("%d ",adj[counter1][counter2]);
        }
        printf("\n");
    }

    //free memory
    for(counter1=0;counter1<row;counter1++)
    {
        free(adj[counter1]);
    }
    free(adj);
    return 0;
}