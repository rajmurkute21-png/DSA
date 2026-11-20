
#include <stdio.h>

#define SIZE 10
#define INPUT 5

int main()
{
    int hashTable[SIZE];
    int key, index;
    int i;

    // Initialize hash table
    for(i = 0; i < SIZE; i++)
    {
        hashTable[i] = -1;
    }

    // Take 5 inputs from user
    printf("Enter 5 numbers:\n");

    for(i = 0; i < INPUT; i++)
    {
        scanf("%d", &key);

        index = key % SIZE;

        // Handle collision using Linear Probing
        while(hashTable[index] != -1)
        {
            index = (index + 1) % SIZE;
        }

        hashTable[index] = key;
    }

    // Display Hash Table
    printf("\nHash Table:\n");

    for(i = 0; i < SIZE; i++)
    {
        printf("Index %d : %d\n", i, hashTable[i]);
    }

    return 0;
}
