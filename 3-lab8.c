#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/shm.h>
#include <string.h>

int main() {
	void *shm;
	char buf[200];
	int shmid;
	shmid = shmget((key_t)123, 2048, 0666 | IPC_CREAT); // Creation of shared memory
	segment
	printf("The Key value of shared memory is %d\n", shmid);
	shm = shmat(shmid, NULL, 0); // Attaching the process to the shared memory segment
	printf("Process attached to the address of %p\n", shm);
	printf("Write the data to shared memory\n");
	read(0, buf, 100);
	strcpy(shm, buf);
	printf("The stored data in shared memory is: %s\n", (char *)shm);
	return 0;
}
