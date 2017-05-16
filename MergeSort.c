#include<stdio.h>
#include<stdlib.h>

void Merge(int *pArray, int left, int mid, int right)
{
    int iLen = right - left + 1;
    int iTempA[mid - left + 1];
    int iTempB[right - mid];

    for (int i = 0; i < mid - left + 1; i++)
    {
        iTempA[i] = pArray[left + i];
    }

    for (int i = 0; i < right - mid; i++)
    {
	iTempB[i] = pArray[mid + i + 1];
    }

    int iIterL = 0;
    int iIterR = 0;
    
    for (int i = 0; i < iLen; i++)
    {
        if (iIterR >= (right - mid))
	{
	    pArray[left +i] = iTempA[iIterL];
            return;
	}
 	if(iIterL >= (mid - left + 1))
	{
	    pArray[left +i] = iTempB[iIterR];
 	    return;
	}
        if (iTempA[iIterL] < iTempB[iIterR])
        {
            pArray[left +i] = iTempA[iIterL];
            iIterL++;
        }
        else
        {
            pArray[left +i] = iTempB[iIterR];
            iIterR++;
        }
    }

    return;
}

void MergeSort(int *pArray, int left, int right)
{
    if (left < right)
    {
        int mid = (left + right)/2;
        MergeSort(pArray, left, mid);
        MergeSort(pArray, mid+1, right);
        Merge(pArray, left, mid, right);
    }
}

int main()
{
    int iArray[] = {38,27,43,3,9,82,10};
    int iLen = sizeof(iArray)/sizeof(int); 
    MergeSort(iArray, 0, iLen-1);
    
    printf("MergeSort result is:\n");
    for(int i = 0; i < iLen; i++)
    {
        printf("%d,", iArray[i]);
    }
    
    printf("\n");
    return 0;
}
