#include <stdio.h>
#include <conio.h>
int a[100],siz,pos,ch;
void size();
void inser();
void display();
void position();

int main()
{   //main paranthesis
             size();
    
    while (1)// 1 mean true infinite loop
    {//loop parenthesis
     printf("\n\t Choose Option by following number\n\t1: Inserting element in Array\n\t2: Display Element of Array\n\t3: Delete element from array by postion\n\t4:Exit the programme\n");
     scanf("%d",&ch);      
     switch (ch)
     {
     case 1:
        {
              inser();   
         break;
        }
     case 2:
         {
            display();
         break;
         }
     case 3: 
         { 
              position();
           break;
         }
     
     case 4:
       {
            if (ch==4)
         {
             goto stop;
         }
  
       }
     default :
         {
           printf("Enter right option\n");
         }
     
     }//switch paranthesis
         
    

  }//loop paranthesis
  stop:  
  printf("Exiting...........");
  return 0;
}

void size()
{
    printf("\tGive size of ARRAY Max** Size  is 100 \n");
     scanf("%d",&siz);
}

void inser()
{  
    printf("\tEnter the element in array\n");
   for (int i = 0; i <siz; i++)
   {   printf("\n\tEnter elment no. %d\n",i);
       scanf("%d",&a[i]);
   }
}

void display()
{
   for (int i = 0; i <siz; i++)
   {
       printf("\t Index:Pos %d - %d\n",i,a[i]);
   }
   

}

void position()
{
    printf("\tEnter the position delete  element\n");
    scanf("%d",&pos);
    if (pos<=0 || pos>siz)
    {
        printf("ENterd Wrong! Position\n");
    }
    else
    {
        for (int i = pos-1; i <=siz-1; i++)
        {
            a[i]=a[i+1]; // shifting array by indexing
        }
    }
  siz--; // decrease size after delted element
     printf("\t%d no. elment deleted is %d \n",pos,a[pos-1]);    //showing elment delted
 
}
