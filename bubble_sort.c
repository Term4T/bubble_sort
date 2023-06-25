#include <stdio.h>

void switchE(int *a, int* b)
{
    int buffer = *a;
    *a = *b;
    *b = buffer;
}

void bubbleSort(int arr[], int n)
{
    int switched;
    for (int i = 0; i < n - 1; i++) {
        switched = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                switchE(&arr[j], &arr[j + 1]);
                switched = 1;
            }
        }
        if (switched == 0)
            break;
    }
}

int main()
{
    int a[10]={2,3,5,1,10,9,8,7,6,4};
    bubbleSort(a,10);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
