#include <unistd.h>

void ft_print_numbers(void)
{
	int num;
	num =48; // we must use the Ascii code for the number as Memory don't know
			 // the numbers and it's simbol for Memory

	while(num <= 57)
	{
		write(1,&num, 1);
		num ++;
	}
}

int	 main()
{

	ft_print_numbers(); 
}
