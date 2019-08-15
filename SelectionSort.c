#include <stdio.h>
void selection_sort(int A[], int n){
    int index_min;
    for (int i = 0; i < n; i++) {
        index_min = i;
        for (int j = i + 1; j < n; j++) {
            if(A[j] < A[index_min]){
                index_min = j;
            }
        }
        if (index_min != i) {
            int temp = A[i];
            A[i] = A[index_min];
            A[index_min] = temp;
        }
    }
}

int main(int argc, const char * argv[]) {
    int A[] = {3, 1, 40, 20, 10, 20, 21, 13, 14, 18};
    binary_search(A, 10);
    for (int i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
