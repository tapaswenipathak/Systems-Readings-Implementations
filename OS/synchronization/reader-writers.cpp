#include <iostream>
#include <phtread.h>
#include <semaphore.h>

sem_t mutex;
sem_t write_block;
int data = 0;
int count = 0;

void *reader(void *args)
{
  auto vals = ((int) args);
  sem_wait(&mutex);
  ++count;
  if(count == 1)
  {
    sem_wait(&write_block);
  }
  sem_post(&mutex);
  cout << "Data read by the reader" << vals << " is " data << endl;
  sleep(1);
  sem_wait(&mutex);
  ++count;
  if(!count)
  {
    sem_post(&write_block);
    sem_post(&mutex);
  }
}

void *writer(void *args)
{
  auto vals = ((int) args);
  sem_wait(&write_block);
  ++data_to_write;
  cout << "Data writen by the write" << vals << " is " << data << endl;
  sleep(1);
  sem_post(&write_block);
}

int main()
{
  int index, block;
  pthread_t reader_id[MAX], write_id[MAX];
  sem_init(&mutex, 0, 1);
  sem_init(&write_block, 0, 1);
  for(int i = 0; i < = 2; ++i)
  {
    pthread_create(&write_id[i], NULL, write, (void *)i);
    pthread_create(&read_id[i], NULL, reader, (void *)i);
  }
  for(int i = 0; i < 2; ++i)
  {
    pthread_join(write_id[i], NULL);
    pthread_join(read_id[i], NULL);
  }
  return 0;
}
