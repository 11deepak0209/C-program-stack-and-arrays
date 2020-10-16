#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{   int element,size=3,max_size, index;
    int a[5]= { 11 , 22 , 5 } ;  
    for (int i = 0; i <3; i++)
    {
        printf("%d\t ",a[i]);
    }
    printf("\n enter the elemnt enter\n");
    scanf("%d",&element);
    printf("Enter the index \n");
    scanf("%d",&index);
   if (size>=max_size)
   {
       printf("Array is full\n");
   }
   
   else
   {
   for (int i =size ; i>=index-1 ; i--)
   {
       a[i+1]= a[i];
   
   }
       a[index]= element;
        size +=1;   /* code */
   }
           
  for (int i = 0; i <size; i++)
  {
   printf("%d\t",a[i]);
  }
           
        
return 0;
}