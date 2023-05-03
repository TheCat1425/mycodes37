#include <stdio.h>

void remove_duplicates(int arr[], int size, int index) {
    int i, j;
    if (index == size - 1) {
        return;
    } else {
        for (i = index + 1; i < size; i++) {
            if (arr[index] == arr[i]) {
                for (j = i; j < size - 1; j++) {
                    arr[j] = arr[j+1];
                }
                size--;
                i--;
            }
        }
        remove_duplicates(arr, size, index+1);
    }
}

int main() {
   
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++)
   {
        scanf("%d",&arr[i]);
   }
    remove_duplicates(arr, n, 0);
    printf("Array without duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
