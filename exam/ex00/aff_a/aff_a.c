#include <unistd.h>
#include <string.h>


int main(int argc,char *argv[]){


	if (argc !=2 ) {
		write(1,"a\n",1);
	}else{
		int i;
		i = 0; 

		while (argv[1][i]) {
			
			if(argv[1][i] == 'a' ){

				write(1,"a\n",1);
				break;
			}

			i++;
		}

			write(1,"\n",1);
	}

	return (0);
}

