#include <stdio.h>
void Input(int a[], int n);
void select_sort(int a[],int n);

int main() {
    int a[5];
    printf("Please enter the array unsorted:\n");
    Input(a,5);
    select_sort(a,5);

    //输出排序后的数列
    printf("The array after selection_sort is :\n");
    for (i=0; i<5; i++) {
        printf("%d ",a[i]);
    }
    return 0;
}

void select_sort(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j] < a[min_index])
            {
                min_index = j;
            }
        }
        if( i != min_index)
        {
            int temp = a[i];
            a[i] = a[min_index];
            a[min_index] = temp;
        }
    }
}

void Input(int a[], int n) {
    int i;
    for (i=0; i<n; i++)
        scanf("%d", &a[i]);   //数组作为实参传入时，传的是数组名称
}