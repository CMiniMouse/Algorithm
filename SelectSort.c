#include<stdio.h>

void SelectSort(int a[], int len)
{
    int min = 0;
    int temp = 0;
    
    for (int i = 0; i <= len - 2; i ++)
    {
	min = i;
	for (int j = i + 1; j <= len - 1; j++)
	{
	    if (a[j] < a[min])
	    {
		min = j;
	    }   
	}
	if (i != min)
	{
	    temp = a[i];
	    a[i] = a[min];
	    a[min] = temp;
	}
    }
}

int main()
{
    int A[] = { 8, 5, 2, 6, 9, 3, 1, 4, 0, 7 };
    int len = sizeof(A)/sizeof(int);

    SelectSort(A, len);

    printf("选择排序结果：");
    for (int i = 0; i < len; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    return 0;
}
