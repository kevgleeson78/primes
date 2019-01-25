#include <stdio.h>

int isprime(unsigned int test){

	
	unsigned int i;

	for ( i =2; i < test; i++){
		
		if(test % i ==0){

			return 0;

		}
	}
	
	return 1;	

}

int main(int argc, char *argv[]){
	unsigned int test  = 11;
	if(isprime(test)){
		printf("%u is a prime.\n", test);

	}
	else {
		printf("%u is not a prime number. \n" , test);
	}
	
	return 0;

}

