/*Program to read and write from and to a file*/

#include <stdio.h>
#include <fcntl.h>
int main() {
	int a, b, c, d;
	char buffer[100];
	a = open("new_file2", O_CREAT | O_WRONLY, 0777);
	printf("File descriptor is %d \n", a);
	b = read(0, buffer, 10);
	c = write(a, buffer, b);
	printf("The value of b: %d , c: %d \n", b, c);
	return 0;
}
