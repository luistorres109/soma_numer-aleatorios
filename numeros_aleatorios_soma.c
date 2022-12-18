#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

	int a = rand() % 10;
	if(a >= 7){
        a = a - 4;
	}
	printf("O primeiro numero eh: %d\n", a);

	int b = rand() % 10;
	if(b >= 7){
        b = b - 4;
	}
    printf("O segundo numero eh: %d\n", b);

	int c = rand() % 10;
	if(c >= 7){
        c = c - 4;
	}
    printf("O terceiro numero eh: %d\n", c);


	printf("Soma: %d", a + b + c);

    return 0;
}
