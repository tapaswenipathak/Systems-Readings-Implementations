#include <cstdio>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <iostream>
#include "struct.h"

using namespace std;

int main()
{
  key_t key;
  int msg_id;

  key = ftok("shmfile", 65);

  msg_id = msgget(key, 0666|IPC_CREAT);

  msgrcv(msg_id, &message, sizeof(message), 1, 0);

  cout << "Data received: " << message_obj.message_text;

  msgctl(msg_id, IPC_RMID, NULL);

  return 0;
}
