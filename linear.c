#include <stdio.h>
int main()
{
    int i, key;
    int arr[5] = {10, 20, 35, 40, 89};
    printf("enter the number: ");
    scanf("%d", &key);
    for (i = 0; i < 5; i++)
    {
        
        if (arr[i] == key)
        {
            printf("Element found at index %d\n", i);
            printf("Element is %d\n", arr[i]);
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}
