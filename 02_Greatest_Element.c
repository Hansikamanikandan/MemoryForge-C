#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i, max;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    max = *ptr;

    for(i = 1; i < n; i++)
    {
        if(*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Greatest Element = %d", max);

    free(ptr);

    return 0;
}
