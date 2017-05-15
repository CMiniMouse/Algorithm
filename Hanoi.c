#include <stdio.h>

void move(int n, char from, char to)
{
    printf("move No.%d plane from %c to %c\n", n, from, to);   
}

void hanoi(int n, char from, char to, char depend_on)
{
    if (n > 0)
    {
        hanoi(n-1, from, depend_on, to);
        move(n, from, to);
	hanoi(n-1, depend_on, to, from);
    }
}

int main()
{
    printf("Enter the number of plane:\n");
    int iPlaneNum;
    scanf("%d", &iPlaneNum);
    char x = 'A', y = 'B', z = 'C';
    printf("The plane move:\n");
    hanoi(iPlaneNum, x, y, z);

    return 1;
}
