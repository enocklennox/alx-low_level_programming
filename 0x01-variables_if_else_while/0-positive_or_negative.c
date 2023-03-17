#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    srand(time(NULL));
    int n = rand() % RAND_MAX - RAND_MAX / 2;
    printf("%d is ", n);
    if (n > 0)
        printf("positive\n");
    else if (n == 0)
        printf("zero\n");
    else
        printf("negative\n");
    return (0);
}
