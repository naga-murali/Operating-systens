/*Program to create and open a file using system calls*/

#include <stdio.h>
#include <fcntl.h>
int main() {
	int n, m;
	n = open("new_file", O_RDONLY);
	printf("File descriptor is %d \n", n);
	m = open("new_file1", O_CREAT | O_WRONLY, 0777);
	printf("File descriptor is %d \n", m);
	return 0;
}
