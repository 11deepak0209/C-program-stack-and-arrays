#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{   
    // let us take the input manually by the user
    int a[10]= {12, 7 , 209 ,27};
      int size=4, index;
      printf("Index : \t");
      for (int i = 0; i <size; i++)
      {
          printf("%d\t",i);
      }
          printf("\n\t\t");
      for (int i = 0; i <size; i++)
      {
          printf("%d\t",a[i]);
      }
      
      printf("\nEnter the index to delete element\n");
       scanf("%d",&index); // enter the index to enter the index
    
      
      
      
      for (int i = index; i <size ; i++)
      {
          a[i]=a[i+1];
      }
       size -=1;
        
     for (int i = 0; i <size; i++)
      {
          printf("%d\t",i);
      }
          printf("\n");
      for (int i = 0; i <size; i++)
      {
          printf("%d\t",a[i]);
      }  
      
    
    
    
    
    
    return 0;
}
