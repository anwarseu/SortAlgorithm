#include <stdio.h>
void insertion_sort(int A[], int n){
    int i, j, item;
    for (i = 1; i < n; i++) {
        item = A[i];
        j = i - 1;
        
        while (j >= 0 && A[j] > item) {
            A[j + 1] = A[j];
            j = j - 1;
        }
        A[j + 1] = item;
    }
}

int main(int argc, const char * argv[]) {
    int A[] = {90, 80, 70, 60, 50, 40, 30, 20, 10, 0};
    insertion_sort(A, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
