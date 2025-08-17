#include <stdio.h>
#define SIZE 4

int main(){

	int arr[SIZE];
	

	for(int i = 0; i<SIZE; i++){

		scanf("%d",&arr[i]);

	}

	int max = arr[0];

	for(int i = 1; i<SIZE; i++){

		if(arr[i] > max){

			max = arr[i];	

		}

	}	

	printf("%d",max);

	return 0;

}
