#include <stdio.h>
#include <conio.h>
int search(int a[],int size, int element )
{    
     int start=0 ,  last=size-1;
    int mid = (start+last)/2;
    while (start<=last)
    {
        
    
     
         if (a[mid]==element)
         {
             return mid;
         }
         if (a[mid]<element)
         {
             start = mid+1;
         }
         else
         {
             start = mid-1;
         }
                      
  
         
    }
   return -1;
};
int main()
{   int temp = 0,i;
    int a[ ]= {11,12,13,14,22,209 };
    int size= sizeof(a)/sizeof(int);     
    int element, start=0 , last= 5  ;
     printf("array is \t");
     for (int i = 0; i <size; i++)
     {
         printf("%d\t",a[i]);
     }
     
     printf("\n Enter the elment for search\n");
     scanf("%d",&element);
    int b = search(a,size,element);
         
         printf("\n%d is elemnet at %d", element, b);
      
 
    return 0;
}