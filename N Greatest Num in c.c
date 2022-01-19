#include<stdio.h>

int main()
{
    int num,great,i=0;
    printf("ENTER NUM = ");
    scanf("%d",&num);

    int arr[num];

    for(int i=0; i<num; i++)
    {
        printf("ENTER NUMBER %d =",i);
        scanf("%d",&arr[i]);
    }

    for(int i=0; i<num; i++)
    {
        printf("%d::->",arr[i]);
    }
    
    i=0;
    great=arr[0];
    
    while(i!=num-1)
    {
        if(great<arr[i+1])
        {
            great=arr[i+1];
        }
        i++;
    }
    printf("\nThe Greatest No::-> %d",great);
    return 0;
}