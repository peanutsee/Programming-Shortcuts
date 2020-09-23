#include <stdio.h>

int swap(int *left, int *right){ // Receives pointer for memory location
    /// Swaps memory location
    int temp = *left;
    *left = *right;
    *right = temp;
}

int bubble_sort(int values[], int len){
    for (int i=0;i<len-1;i++){
        for (int j=0;j<len-i-1;j++){
            if (values[j] > values[j+1]){
                swap(&values[j], &values[j+1]); // Passes values into swap()
            }
        }
    }
    return values;
}

void print_array(int values[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", values[i]);
    }
    printf("\n");
}

int main(void){
    int values[] = {7, 3, 6, 5, 1};
    bubble_sort(values, sizeof(values)/sizeof(int));
    printf("Expected:1 3 5 6 7\n");
    printf("Actual  :");
    print_array(values, sizeof(values)/sizeof(int));
    printf("\n");
}
