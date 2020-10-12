#include <stdio.h>

void fun(int *px,int *py);

int main()

{

    int a,b;

    a=5;
    b=10;

    fun(&a,&b); // call by referencing 

    printf("%d %d\n",a,b);

    return 0;

}

void fun(int *px,int *py)

{

    int temp;

    temp=*px; // temp stores contents of memory location of a
    *px=*py; // contents at memory location of a is replaced by contents at memory location of b
    *py=temp; // contents at memory location of b is replaced by contents at memory location of temp

}
