#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Subarrays:\n");

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {

            printf("[ ");

            for (int k = i; k <= j; k++)
                printf("%d ", arr[k]);

            printf("]\n");
        }
    }

    return 0;
}