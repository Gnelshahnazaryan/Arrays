#include <stdio.h>
#define ROWS 4
#define COLS 4

int main(){

int arr[ROWS][COLS] = 
{
{1,2,3,4},
{5,6,7,8},
{9,10,11,12},
{13,14,15,16}
};

	int sum = 0;

	for(int i = 0;i<ROWS;i++){
		for(int j = i+1; j<COLS; j++){

			sum+=arr[i][j];

		}


	}

	printf("%d",sum);

}
