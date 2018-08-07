#include <sys/ipc.h>
#include <sys/shm.h>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
  key_t shm_key = ftok("shmfile", 65);
  const int shm_size = 1024;
  const int shm_id = shmfet(key, shm_size, 0666 | IPC_CREAT);
  char *shm_addr = (char*) shmat(shm_id, (void*)0, 0);

  cout << "Writing Data: ";
  fgets(shm_addr, MAX, stdin);

  printf("Data written in memory: %s\n", shm_addr);

  system("./ipc-shared-memory-reader");
  shmdt(shm_addr);
  shmctl(shm_id, IPC_RMID, NULL);

  return 0;
}


