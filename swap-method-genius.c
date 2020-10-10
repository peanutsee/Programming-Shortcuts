#include <stdio.h>

int main(){
    int x = 2;
    int y = 3;
    x -= y; //x = -1
    y += x; //y = 2
    x = y - x;  //
    printf("%d\n%d", x, y);
}
