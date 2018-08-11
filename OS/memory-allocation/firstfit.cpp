#include <iostream>
#include <vector>

using namespace std;

int main()
{
  mt19937 mt_rand(time(0));
  memory_obj.num_available_blocks = mt_rand();
  memory_obj.num_process = mt_rand();
  mt19937 range;
  range.seed(random_device()());
  uniform_int_distribution<mt19937::result> dist(1, memory_obj.num_available_blocks);
  for(auto const &block_size: memory_obj.num_available_blocks){
    memory_obj.block_size.push_back(memory_obj.num_available_blocks(range));
  }
  uniform_int_distribution<mt19937::result> dist(1, memory_obj.num_process);
  for(auto const &process_size: memory_obj.num_process){
    memory_obj.process_size.push_back(memory_obj.size_processes(range));
  }

  vector<int> allocated_chunk(vector<int> vect(memory_obj.num_process, -1));

  for(int i = 0; i < memory_obj.num_process; ++i)
  {
    for(int j = 0; j < memory_obj.num_available_blocks; ++j)
    {
      if(memory_obj.block_size[j] > memory_obj.process_size[i])
      {
        allocated_chunk[i] = j;
        j = num_available_blocks;
        memory_obj.block_size[j] = 0;
      }
    }
  }

  cout << "Allocated process to blocks" << endl;

  for(int i = 0; i < num_process; ++i)
  {
    if(allocated_chunk[i] != -1)
    {
      cout << "Process" << i + 1 << " of " process_size[i] << "-->  Block " << allocated[i] + 1;
    }
    else
    {
      cout << "Process" << i + 1 << " of " process_size[i] << " is not allocated.";
    }
  }
  return 0;
}
