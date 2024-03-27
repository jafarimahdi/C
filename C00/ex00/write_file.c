#include <unistd.h> // allow you to use read/write package
#include <fcntl.h> // allow you to control the file
#include <stdio.h> // allow you to have input/output 

int main(void)
{

	 // it will open the file/ it not exsited it will make a new one
	int fd = open("file.txt", O_RDWR | O_CREAT, 0600);
	

    	// undrestand fd concept
		write(fd, "hello", 5);

		printf("%d\n", fd);


}
