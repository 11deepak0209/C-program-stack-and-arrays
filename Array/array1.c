#include <stdio.h>
#include <string.h>
#include <conio.h>
void insert();
void display();
void display();
int a[10];
int main()
{   int i;  //use int size to conrol array size
   
   printf("Enter the element in array\n");    
    insert(i);
   printf("element in array are:->\n"); 
    display(a);
    return 0;
}
void insert()
{ 
 for(int i=0; i<5; i++)   //for(int i=0; i<size; i++)  size of array
 {
   scanf("%d" ,&a[i]);

 }

}

void display()
{   
    for (int i = 0; i <5; i++) //for(int i=0; i<size; i++)
    {
        printf("%d\n",a[i]);
    }
    

}