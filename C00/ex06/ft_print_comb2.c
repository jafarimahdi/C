#include <unistd.h>
#include <stdio.h>

void ft_print_comb2(void)
{
	int i, j;
	
	char buffer[7]; //keep in store for  formating the output
	

	for(i = 0; i<= 98; ++i){
		for(j = i + 1;j <= 99;++j){
			snprintf(buffer, sizeof(buffer), "%02d %02d", i, j );

			write(1, buffer,6);

			if (i != 98 || j!= 99){
				write(1, ",", 2);
			}
		}
	}

	write(1,"\n", 1);
}

int main(){
	ft_print_comb2();
	return 0; 
}
