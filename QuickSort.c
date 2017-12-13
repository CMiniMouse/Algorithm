#include<stdio.h>

void QuickSort(int *a, int low, int high)
{
    int first = low;
    int last  = high;
    int key   = a[first];
    if (low >= high) {
    	return;
    }

    /*控制在当组内寻找一遍*/
    while (first < last) {
        /*而寻找结束的条件就是
        1，找到一个小于或者大于key的数（大于或小于取决于你想升序还是降序）
        2，没有符合条件1的，并且first与last的大小没有反转
        */
        while (first < last && a[last] >= key) {
            last--;		//向前寻找
        }

        /*找到一个这样的数后就把它赋给前面的被拿走的i的值（如果第一次循环且key是a[left]，那么就是给key）*/
        a[first] = a[last];

            /*这是first在当组内向后寻找，同上，不过注意与key的大小关系停止循环和上面相反，
              因为排序思想是把数往两边扔，所以左右两边的数大小与key的关系相反*/
        while (first < last && a[first] <= key) {
            first++;		//向后寻找
        }
        a[last] = a[first];
    }

    a[first] = key;
    QuickSort(a, low, first - 1);
    QuickSort(a, first + 1, high);
}

int main() {
    int a[] = {57, 68, 59, 52, 72, 28, 96, 33, 24};
    QuickSort(a, 0, sizeof(a)/sizeof(int) - 1);

    for(int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
    {
        printf("%d  ", a[i]);
    }

    printf("\n");

    return 0;
}
