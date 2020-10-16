#include <stdio.h>
#include <string.h>
#include <conio.h>
 int main()  
{    
    int arr[100],element,size,i,find,temp=0;
    printf("Enter the Size of array MAX size is 100 \n");
     scanf("%d",&size);
     printf("Enter the elment in Array \n");
    for (int i = 0; i <size; i++)
   {
    scanf("%d",&arr[i]);
   }
    
    printf("\tArray  index :->");
    for ( i = 0; i < size; i++)
    {
        printf("\t%d",i);
    }
    printf("\n\tElement in array are");
    for ( i = 0; i < size; i++)
    {
        printf("\t%d",arr[i]);
    }
   printf("\n\tEnter the element for find in array\n");
   scanf("%d",&find);
    // temp = 0;
    for ( i = 0; i <size; i++)
    {
      if(arr[i]==find)
          {
                
            temp++;
         }      
    }
    
     if (temp>=1)
     {
         
           printf("Elemnet %d is found in array at %d\n",find,i-1);       
     }
     else
      {
          printf("element does not exist in array \n");
      }
     
  return 0;
}



