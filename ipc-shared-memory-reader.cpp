#include <sys/shm.h>
#include <sys/stat.h>

int main()
{
  key_t shm_key = ftok("shmfile", 65);

  const int shm_size = 1024;
  int shm_id = shmget(shm_key, shm_size, 0666|IPC_CREAT);

  char *shm_addr = (char*) shmat(shmid, (void*)0, 0);

  cout << "Data read from memory" << shm_addr << endl;

  shmdt(shm_addr);

  shmctl(shm_id, IP_RMID, NULL);
  return 0;
}
