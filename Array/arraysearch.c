#include <stdio.h>
#include <string.h>
#include <conio.h>
int pos=0;
int arr[100],element,size,i,find;
void elementinsert();
void display();
void search();
 int main()
{    
    printf("Enter the Size of array MAX size is 100 \n");
     scanf("%d",&size);
     elementinsert();
     display();
      search();
     return 0;
}
void elementinsert()
{
    printf("Enter the elment in Array \n");
    for (int i = 0; i <size; i++)
   {
    scanf("%d",&arr[i]);
   }

}
void display()
{  
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
    
}

void search()
{
   int temp=0;
   printf("\n\tEnter the element for find in array\n");
   scanf("%d",&find);
    for ( i = 0; i <size; i++)
    {
    
       if (arr[i]==find)
      {
       temp +=1;
       break;
      }  
        /* code */
    }
      
       if (temp==1)
       {
        printf("Elemnet %d is found in array at\n",find);       
         
       }
          /* code */
      
    else
      {
          printf("element does not exist in array \n");
      }

      for (int i = 0; i <size; i++)
      {
             if(arr[i]==find)
             {
               printf("%d\t",pos);
             }
      
        pos++;
      
      }
      
      

}