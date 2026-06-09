#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Enter m: ");
    scanf("%d", &m);

    for(int i = 0; ; i++)
    {
        int left = n - i;
        int right = n + i;

        int leftDiv = (left % m == 0);
        int rightDiv = (right % m == 0);

        if(leftDiv && rightDiv)
        {
            if(abs(left) > abs(right))
                printf("%d", left);
            else
                printf("%d", right);
            break;
        }
        else if(leftDiv)
        {
            printf("%d", left);
            break;
        }
        else if(rightDiv)
        {
            printf("%d", right);
            break;
        }
    }

    return 0;
}