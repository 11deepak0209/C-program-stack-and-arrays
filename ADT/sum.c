#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int a[]= { 10 , 20 , 30, 10}, sum=0, a1, a2, result, pos1 , pos2;
    int size =  sizeof(a)/sizeof(int);

   printf("Element in array are \t ");

    for (int i = 0; i <size; i++)
    {
        printf("%d,\t",a[i]);
    }
     
some of element in array is

printf("\n sum of element in array is ");
for (int i = 0; i < size; i++)
{
    sum = sum+a[i];
}

     printf("%d\n",sum);

printf("Enter the pos 1 and pos 2 for multyply element\n");
scanf("%d%d",&a1,&a2);
for (int i = 0; i <size; i++)
{
        a1= a[pos1 -1];    
}
 for (int i = 0; i <size; i++)
{
        a2= a[pos2 -1];    
}

result = a1*a2;



printf("multiply of both pos is  %d",result);
    return 0;
}


