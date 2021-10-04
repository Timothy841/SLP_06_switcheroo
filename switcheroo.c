#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int array[10];
	array[0] = 0;
	srand(time(NULL));
	int num;
	for (num = 1; num<=9; num++){
		array[num] = rand();
	}
	printf("Array: (");
	for (num = 0; num<=8; num++){
		printf("%d, ", array[num]);
	}
	printf("%d)\n", array[9]);
	int r_array[10];
	int *a = array;
	int *ra = r_array;
	for (num = 0; num<=9; num++){
		*(ra+num) = *(a+9-num);
	}
	printf("Reverse Array using *: (");
	for (num = 0; num<=8; num++){
		printf("%d, ", r_array[num]);
	}
	printf("%d)\n", r_array[9]);
	for (num = 0; num<=9; num++){
		r_array[num] = array[9-num];
	}
	printf("Reverse Array using []: (");
	for (num = 0; num<=8; num++){
		printf("%d, ", r_array[num]);
	}
	printf("%d)\n", r_array[9]);
}

