#include <stdio.h>
int main()
{
    int arr[5] = {10, 20, 35, 40, 50};
    int key, low = 0, high = 4, mid;
    printf("Enter the number: ");
    scanf("%d", &key);
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            printf("Element found at index %d\n", mid);
            printf("Element is %d\n", arr[mid]);
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    printf("Element not found\n");
    return 0;
}