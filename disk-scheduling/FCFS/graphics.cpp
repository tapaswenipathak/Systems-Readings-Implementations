#include <cstdio>
#include <algorithm>

using namespace std;

void display_graphics(int n, queue<int>)
{
  // decide on library

  cout << "###############################";

  cout << "FCFS Disk Scheduling" << endl;
  cout << "No of requests: " << n << endl;
  cout << "Request queue" << endl;
  for(auto const &val: queue)
  {
    cout << val << " ";
  }

  cout << endl;
  cout << "The requests are services in the following order" << endl;
  for(auto const &val: queue)
  {
    cout << val << " ";
  }

  cout << endl;
  cout << "Total head movement in cylinders: " << total_head_movement << endl;

}
