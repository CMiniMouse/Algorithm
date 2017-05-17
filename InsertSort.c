#include<stdio.h>

void InsertSort(int a[], int len)
{
    int cmp = 0;
    int i,j = 0;

    for (i = 1; i < len; i++)
    {
	cmp = a[i];
	j = i - 1;
	
	while (j >= 0 && a[j] > cmp)
	{
	    a[j + 1] = a[j];
	    j --;
	}
	a[j + 1] = cmp;
    }
}

int main()
{
    int A[] = { 6, 5, 3, 1, 8, 7, 2, 4 };// 从小到大插入排序
    int n = sizeof(A) / sizeof(int);

    InsertSort(A, n);

    printf("插入排序结果：");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
    return 0;
}
