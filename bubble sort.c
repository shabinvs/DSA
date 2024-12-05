
#include <stdio.h>

void sort(int a, int b[]) {

	for(int i=0; i<a-1; i++) {
		for(int j=0; j<a-i-1; j++) {
			if(b[j]>b[j+1]) {
				int temp = b[j+1];
				b[j+1] = b[j];
				b[j] = temp;
			}
		}
	}
	
}


int main()
{
	int size;

	printf("enter the size: ");
	scanf("%d",&size);

	int arr[size];
    printf("enter the elements: ");
	for(int i=0; i<size; i++) {
		scanf("%d",&arr[i]);
	}

	sort(size, arr);
	
	printf("sorted array: ");
	for(int i=0; i<size; i++) {
		printf("%d ",arr[i]);
	}



	return 0;
}