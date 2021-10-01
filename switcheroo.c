#include <stdio.h>
#include <time.h>

int main(){
	int array[10];
	array[0] = 0;
	srand(time(NULL));
	int num;
	for (num = 1; num<=9; num++){
		array[num] = rand();
	}
	printf("(");
	for (num = 0; num<=8; num++){
		printf("%d, ", array[num]);
	}
	printf("%d)\n", array[9]);
	return 0;
}

