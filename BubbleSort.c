#include<stdio.h>

void BubbleSort(int a[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
	for (int j = 0; j < len - 1 - i; j++)
	{
	    if (a[j] < a[j + 1])
	    {
		int temp = a[j];
		a[j] = a[j + 1];
		a[j + 1] = temp;
	    }
	}
    }
}

int main()
{
    int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };
    int len = sizeof(A)/sizeof(int);

    BubbleSort(A, len);

    printf("冒泡排序结果：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
