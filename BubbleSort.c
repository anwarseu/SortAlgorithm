#include <stdio.h>
void bubble_sort(int A[], int n){
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(A[j] > A[j + 1]){
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}

int main(int argc, const char * argv[]) {
    int A[] = {90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
    bubble_sort(A, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
