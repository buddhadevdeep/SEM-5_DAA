#include <stdio.h>

int main() {
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    int found = 0;

    for (int start = 1; start < n; start++) {
        int sum = 0;

        for (int i = start; sum < n; i++) {
            sum += i;

            if (sum == n) {
                found = 1;
                break;
            }
        }

        if (found)
            break;
    }

    if (found)
        printf("true");
    else
        printf("false");

    return 0;
}