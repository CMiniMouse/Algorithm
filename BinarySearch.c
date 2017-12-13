#include<stdio.h>
int BinarySearch(int iArray[], int iTarget, int iNum)
{
    int left = 0;
    int right = iNum - 1;
    while (left <= right)
    {
	int mid = 0;
	mid = (left + right)/2;
	if (iTarget == iArray[mid])
	{
	    return mid;
	}
	if (iArray[mid] < iTarget)
	{
	    left = mid + 1;
	}
	else
	{
	    right = mid - 1;
	}
    }

    return -1;
}

int main()
{
    int iArray[] = {1, 3 , 4, 6, 8, 11, 21, 31, 41, 44, 45, 55, 56, 57, 77, 88, 89};
    int iPos;
    iPos = BinarySearch(iArray, 55, 17);
    printf("The Target Position is:%d, iArray[%d]=%d\n", iPos, iPos, iArray[iPos]);   
}
