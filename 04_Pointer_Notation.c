#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int n, i;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    ptr = (int *)malloc(n * sizeof(int));

    if(ptr == NULL)
    {
        printf("Memory allocation failed.");
        return 1;
    }

    printf("Enter %d integers:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", ptr + i);
    }

    printf("\nStored Integers:\n");

    for(i = 0; i < n; i++)
    {
        printf("%d ", *(ptr + i));
    }

    free(ptr);

    return 0;
}
