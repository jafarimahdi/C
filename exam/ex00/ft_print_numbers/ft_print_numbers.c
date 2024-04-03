#include <unistd.h>

int main(void){

	char num;
	num = '0';

	while(num <= '9'){
		write(1,&num, 1);
		num ++;

	}
	write(1," \n",1);
	return 0; 
}
