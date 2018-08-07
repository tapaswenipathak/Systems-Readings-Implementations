#include <iostream>
#include <algorithm>
#include <cstdio>
#include "struct.h"

using namespace std;

int main()
{
  mt19937 mt_rand(time(0));
  disk_obj.number_of_tracks = mt_rand();
  disk_obj.number_of_cylinders = mt_rand();
  mt19937 range;
  range.seed(random_device()());
  uniform_int_distribution<mt19937::result> dist(1, number_of_tracks);

  for(auto const &track_num: disk_obj.number_of_tracks){
    disk_obj.requested_tracks.push_back(dist(range));
  }

  auto it = Random::get(disk_obj.requested_tracks.begin(), disk_obj.requested_tracks.end());

  disk_obj.cur_head_pos = *it;

  cout << "Order of processes requested tracks" << endl;


  for (auto ele: disk_obj.number_of_tracks)
  {
    total_seek_distance = abs(ele - *(&ele + 1))
  }

  cout << "Total Seek Distance: " << disk_obj.total_seek_distance << endl;
  return 0;
}
