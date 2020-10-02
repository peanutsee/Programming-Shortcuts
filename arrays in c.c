#include <stdio.h>

int print_array(int arr[], int len){
    for (int i=0;i<len;i++){
        printf("%d ", arr[i]);
    }
}

void digits_to_array(int n){
    int MAX = 100;
    int array[MAX];
    int length = 0;

    while (n!=0){
        int last_digit = n % 10;
        array[length] = last_digit;
        length++;
        n/=10;
    }
    printf("Length of array: %d\n", length);

    int array2[MAX];
    int m = 1;
    for (int i=0;i<length;i++){
        array2[i] = array[length-m];
        m++;
    }

    print_array(array2,length);

}

int main(){
    digits_to_array(1101);
}
