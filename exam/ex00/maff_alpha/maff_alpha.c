#include <unistd.h>

int main(void){
		
		int a;
		int z;
		z = 122;

		for(a = 97; a <= z; ++a) {

			if(a % 2 != 0){
				write(1,&a,1);
			}else{
				int uppercase =	a - 32;
				write(1, &uppercase, 1);
			}
		}
	write(1, "\n",1);
	return (0);
}
