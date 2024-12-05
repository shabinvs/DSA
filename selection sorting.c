#include <stdio.h>

int main()
{
    int size;

    printf("Enter the size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < size - 1; i++) {
        int sort = i; 
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[sort]) {
                sort = j;
            }
        }

        if (sort != i) {
            int temp = arr[sort];
            arr[sort] = arr[i];
            arr[i] = temp;
        }
    }

    printf("After sorting: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
