#include <stdio.h>

unsigned long int factorial(unsigned int i){

	if(i <= 1){
         return 1; 
	}
	return i*factorial(i - 1);
}

int main(void){
  int i=12;
  printf("Factorial of %d\n", i, factorial(i));
  return 0;
}
