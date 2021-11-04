#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int luhn(char *number_ascii_array, int *next_digit, int *luhn_check, int calculate){
	
	int acc = 0;
	
	for(int i = strlen(number_ascii_array) - 1; i >= 0; i--){
		int digit = number_ascii_array[i] - '0';

		if((i -  strlen(number_ascii_array) - 1) % 2 != 0){
			digit *= 2;

			if(digit > 9)
				digit -= 9;
		}

		acc += digit;
	}	

	*luhn_check = acc % 10;
	if(calculate){
		char *append = (char*)calloc(strlen(number_ascii_array) + 2, sizeof(char));
	
		strcat(append, number_ascii_array);
		strcat(append, "0");
		int a;
		int b;
	
		luhn(append, &a, &b, 0);

		free(append);
	
		if(b == 0)
			*next_digit = 0;
		else
			*next_digit = 10 - b;
	}

	if(acc % 10 == 0)
		return 1;
	else
		return 0;
}

int main(int argc, char **argv){
	if(argc != 2){
		printf("Number of arguments is invalid!. Usage: luhn [NUMBER]\n");
		exit(-1);
	}

	int next_digit;
	int luhn_check;

	int valid = luhn(argv[1], &next_digit, &luhn_check, 1);

	printf("Luhn checksum mod 10 is: [%d], the number is %s.\nNext check digit is: [%d].\n", luhn_check, (valid ? "valid" : "invalid"), next_digit); 

	return 0;
}
