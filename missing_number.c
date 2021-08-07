#include <stdio.h>
#include <stdlib.h>

using namespace std;

int missingNumber(int *, int);
void bubble_sort(int *, int);
void swap(int *, int *);

int main()
{
    int num[] = {0};
    int missing_number = missingNumber(num, 1);
    cout << missing_number;
    return 0;
}

int missingNumber(int *nums, int numsSize)
{
    bubble_sort(nums, numsSize);

    int size = (numsSize + 1);
    int hash_table[size];

    for (int i = 0; i < size; i++)
        hash_table[i] = -1;

    int i = 0;
    while (i < numsSize)
    {
        hash_table[nums[i]] = nums[i];
        i++;
    }

    i = 0;

    while (i < size)
    {
        if (hash_table[i] == -1)
            return i;
        i++;
    }
    return -1;
}

void bubble_sort(int *arr, int size)
{
    int flag;

    for (int i = 0; i < size - 1; i++)
    {
        flag = 1;
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 0;
            }
        }
        if (flag)
            break;
    }
}

void swap(int *a, int *b)
{
    int c;
    c = *a;
    *a = *b;
    *b = c;
}
