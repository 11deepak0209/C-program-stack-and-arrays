#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct array
{ 
    int total_size;
    int used_size;
    int *ptr;
    
};
void createArray(struct array *b, int tsize, int usize )
{
    (*b).total_size = tsize;
    (*b).used_size = usize;
    int *ptr = (int *) malloc ( tsize*sizeof (int) );

}
void insert( struct array *b  )
{   int n;
    for (int i = 0; i <b->used_size; i++)
    {   
    
        printf("Enter the value of %d\n",i);
        scanf("%d",&n);
        (b->ptr)[i] = n ;
    }
    
}

void show(struct array *b)
{   int i;
    for (int i = 0; i <b->used_size; i++)
    {
        printf("\t%d",(b->ptr)[i]);
    }
    
   


}
int main()
{
    struct array number;
    createArray(&number,100,2);
    insert(&number);
    show(&number);
    
    return 0;
}