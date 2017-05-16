#include<stdio.h>
#include<stdlib.h>

void Merge(int *pArray, int left, int mid, int right)
{
    int iLen = right - left + 1
    int iTemp[iLen] = {0};
    
    for (int i = 0; i < iLen; i++)
    {
        iTemp[i] = pArray[left + i];
    }
    
    int iIterL = 0;
    int iIterR = iLen/2;
    
    for (int i = 0; i < iLen; i++)
    {
        if (iTemp[iIterL] < iTemp[iIterR])
        {
            pArray[left +i] = iTemp[iIterL];
            iIterL++;
        }
        else
        {
            pArray[left +i] = iTemp[iIterR];
            iIterR++;
        }
    }
    
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
    
    MergeSort(iArray, 0, 6);
    
    printf("MergeSort result is:\n")
    for(int i = 0; i < 7; i++)
    {
        printf("%d,", iArray[i]);
    }
    
    return 0;
}
