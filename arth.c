#include <stdio.h>

void printArray(int arr[])
{
    for (int i=0; i<10; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void printArrayAddress(int arr[])
{
    for (int i=0; i<10; i++)
        printf("%x ", &arr[i]);
    printf("\n");
}

int main()
{
    int intArr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printArray(intArr);
    printArrayAddress(intArr);

    int *intPtr = intArr;           // defaults to &intArr[0]
    printf("intPtr=%x\n", intPtr);
    printf("*intPtr=%d\n", *intPtr);

    int *intPtr2 = &intArr[2];      // address of intArr[2]
    printf("intPtr2=%x\n", intPtr2);
    printf("*intPtr2=%d\n", *intPtr2);

    printf("\n");

    *intPtr2 = *intPtr2 + 10;       // adds 10 to arr[2]
    printf("intPtr2=%x\n", intPtr2);
    printf("*intPtr=%d\n", *intPtr2);

    int y;
    y = *intPtr2 + 1;               // gets arr[2] and adds 1
    printf("y=%d\n", y);

    *intPtr2 += 10;                 // adds 10 to arr[2]
    y = *intPtr2;
    printf("y=%d\n", y);

    ++*intPtr2;                     // adds 1 to arr[2]
    y = *intPtr2;
    printf("y=%d\n", y);

    (*intPtr2)++;                   // adds 1 to arr[2]
    y = *intPtr2;
    printf("y=%d\n", y);

    *intPtr2++;                     // increments pointer to arr[3]! That's it!
    y = *intPtr2;
    printf("y=%d\n", y);

	*(++intPtr2) = 666;
    y = *intPtr2;
    printf("y=%d\n", y);

	*(intPtr2++) = 777;
    y = *intPtr2;
    printf("y=%d\n", y);

    printArray(intArr);
    printArrayAddress(intArr);

    return 0;
}
