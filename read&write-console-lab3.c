/*Program to read from console and write to console*/

#include <stdio.h>
#include <fcntl.h>
int main() {
	int n, m;
	char buffer[100];
	n = write(1, "Hello World", 11);
	printf("Number of bytes written: %d \n", n);
	m = read(0, buffer, 12);
	printf("Number of bytes read: %d \n", m);
	return 0;
}
