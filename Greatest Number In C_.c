#include<stdio.h>

int main()
{
   int num,great=0;
   printf("ENTER NUM = ");
   scanf("%d",&num);

   int arr[num];
   
   for(int i=0;i<=num;i++)
    {
    printf("ENTER NUMBER %d =",i);
    scanf("%d",&arr[i]);
    }
    
    for(int i=0;i<=num;i++)
    {
    printf("%d::->",arr[i]);
    }
    
 //////////////////

    for(int i=0;i<=num;i++)
    {
    
      if(arr[i]>arr[i+1])
     {
      great=arr[i];
   //   printf("\n::> %d  <::",great);
      break;
     }
    else
      {
       great=arr[i+1];
   //   printf("\n::> %d  <::",great);
       break;
      }
    }
    
    
    for(int i=1;i<=num;i++)
     {
    if(great>arr[i+1])
     {
      great=arr[i];
    break;
     }
    else
      {
       great=arr[i+1];
    break;
      }
    }
    
    for(int i=2;i<=num;i++)
    {
    if(great>arr[i+1])
     {
      break;
     }
    else
      {
       great=arr[i+1];
    break;
      }
    }
    
    for(int i=3;i<=num;i++)
    {
     if(great>arr[i+1])
      {
      break;
      }
    else
      {
       great=arr[i+1];
    break;
      }
    }
    
    
    for(int i=4;i<=num;i++)
    {
     if(great>arr[i+1])
      {
      break;
      }
    else
      {
       great=arr[i+1];
    break;
      }
    }
    
    printf("\n GREATEST NUMBER= %dß",great);
    
     
    return 0;
 }
    