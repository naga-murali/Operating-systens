/*Program to append a file*/

#include <stdio.h>
#include <fcntl.h>
int main() {
	int a, b, c, d;
	char buffer[100];
	a = open("new_file2.txt", O_WRONLY | O_APPEND, 0777);
	printf("File descriptor is %d \n", a);
	b = read(0, buffer, 10);
	c = write(a, buffer, b);
	printf("Value of b: %d , c: %d", b, c);
	return 0;
}
