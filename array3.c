#include <stdio.h>
#define SIZE 5

int main(){

	int arr[SIZE];

	for(int i = 0; i<SIZE;i++){
		
		scanf("%d",&arr[i]);

	}

	int max = 0;

	for(int i = 0; i<SIZE; i++){
		if(arr[i] > arr[max]){

			max = i;

		}

	}

	printf("%d",max);

	return 0;

}
