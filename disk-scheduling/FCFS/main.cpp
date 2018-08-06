#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <algorithm>

using namespace std;


void display_graphics(int, queue<int>);

int main(int argc, char **argv)
{
  if (argc != 2)
  {
    cout << "Run fcfs <count_of_track_numbers>" << endl;
    return 0;
  }
  int count = *argv[1];
  queue<int> track_num;
  mt19937 range;
  range.seed(random_device()());
  uniform_int_distribution<mt19937::result> dist(1, n);
  cout << dist(range) << endl;

  for (auto const &x : dist)
  {
    queue.push(x);
  }

  display_graphics(n, queue);

  return 0;
}
