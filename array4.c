#include <stdio.h>
#define SIZE 5

int main(){

	int arr[SIZE];

	for(int i = 0; i<SIZE; i++){
		scanf("%d", &arr[i]);


	}

	int min = 0;

	for(int i = 0; i<SIZE; i++){

		if(arr[min] > arr[i]){
			min = i;
		}


	}


	printf("%d",min);
	return 0;

}
