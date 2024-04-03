#include <unistd.h>

int main(void){

	char num;
	num = '9';

	while (num >= '0') {
		write(1,&num,1);
		num --;

	}
	write(1, "\n", 1);
	return (0);
}
