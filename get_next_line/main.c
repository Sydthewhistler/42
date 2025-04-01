
#include "get_next_line.h"
#include <fcntl.h>

int main()
{
	int fd = open("test.txt",O_RDONLY);

    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd));
	
	return 0;
}

/*int main()
{
	int fd = open("test.txt",O_RDONLY);
    int fd2 = open("test2.txt",O_RDONLY);
    int fd3 = open("test3.txt",O_RDONLY);
    int fd4 = open("test4.txt",O_RDONLY);

	printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd2));
    printf("%s\n",get_next_line(fd3));
    printf("%s\n",get_next_line(fd4));
	printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd2));
    printf("%s\n",get_next_line(fd3));
    printf("%s\n",get_next_line(fd4));
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd2));
    printf("%s\n",get_next_line(fd3));
    printf("%s\n",get_next_line(fd4));
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd2));
    printf("%s\n",get_next_line(fd3));
    printf("%s\n",get_next_line(fd4));
    printf("%s\n",get_next_line(fd));
    printf("%s\n",get_next_line(fd2));
    printf("%s\n",get_next_line(fd3));
    printf("%s\n",get_next_line(fd4));
	
	return 0;
}*/