#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

clock_t t, u;

void mergeSort(int arr[], int m, int l, int r)
// l=left, m=mid, r=right
{
    int i = 0, j = 0;
    int n1 = l - m - 1;
    int n2 = m - r;
    int L[n1], R[n2];

    while (l <= r)
    {
        m = (r + l) / 2;
        for (i = 0; i < n1; i++)
            L[i] = arr[l + i];
        for (j = 0; j < n2; j++)
            R[j] = arr[m + 1 + j];

        while (i < n1 && j < n2)
            if (L[i] <= R[j])
            {
                arr[l] = L[i];
                i++;
            }
            else
            {
                arr[l] = R[j];
                j++;
            }
        l++;

        while (i < n1)
        {
            arr[l] = L[i];
            i++;
            l++;

            while (j < n2)
            {
                arr[l] = R[j];
                j++;
                l++;
            }
        }
    }
}



