#include <stdio.h>

int main(){
    int x = 2;
    int y = 3;
    int temp = x;
    x = y;
    y = temp;
    printf("%d\n%d", x, y);
}
