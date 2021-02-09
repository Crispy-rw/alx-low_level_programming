#include "holberton.h"


void print_alphabet_x10(void){

char alpha;
int counter;

for(counter = 0; counter <= 10; counter++){

	for(alpha = 'a'; alpha <= 'z'; alpha++){
		_putchar(alpha);
	}

	_putchar('\n');
}

}
