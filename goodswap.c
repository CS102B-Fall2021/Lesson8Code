#include <stdio.h>

// K&R Pg. 95
void swap(int* xptr, int* yptr)
{
    int temp;

    temp = *yptr;
    *yptr = *xptr;
    *xptr = temp;
}

int main()
{
    int x = 1;
    int y = 2;
    printf("before: x=%d, y=%d\n", x, y);

	int* mainxptr;
	int* mainyptr;
	mainxptr = &x;
	mainyptr = &y;

    swap(mainxptr, mainyptr);
    printf("after:  x=%d, y=%d\n", x, y);
	printf("&x=%x, &y=%x", &x, &y);
}
