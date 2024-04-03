#include <unistd.h>

int main(void)
{
	int z;
	int a;
	a = 97;

	for( z = 122; z >= a; --z)
	{
		if(z % 2 == 0){
			write(1, &z,1);
		}else{

			int upperCase = z - 32;
			write(1, &upperCase, 1);
		}
	}
	write(1,"\n",1);
	return (0);

}
