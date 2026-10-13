#include <stdio.h>
// Function declarations
void fish();
void frogFunction();
// Global variable
int frog = 100;
void fish()
{
    // Local variable
    int sand = 10;
    printf("Inside fish function:\n");
    printf("Sand = %d\n", sand);
    printf("Frog = %d\n", frog);
}
void frogFunction()
{
    // Local variable
    int water = 20;
    printf("\nInside frogFunction:\n");
    printf("Water = %d\n", water);
    printf("Frog = %d\n", frog);
}
int main()
{
    printf("Inside main function:\n");
    printf("Frog = %d\n", frog);

    fish();
    frogFunction();

    return 0;
}

