#include <iostream>
#include <algorithm>
#include <cstdio>
#include "struct.h"

using namespace std;

int main()
{
  mt19937 mt_rand(time(0));
  disk_obj.number_of_tracks = mt_rand();
  mt19937 range;
  range.seed(random_device()());
  uniform_int_distribution<mt19937::result> dist(1, number_of_tracks);

  for(auto const &track_num: dist){
    disk_obj.requested_tracks.push(track_num);
  }

  auto it = Random::get(disk_obj.requested_tracks.begin(), disk_obj.requested_tracks.end());

  disk_obj.cur_head_pos = *it;

  cout << "Order of processes requested tracks" << endl;

  for (int i = 0; i < disk_obj.number_of_tracks; ++i)
  {
    if (i != disk_obj.number_of_tracks)
    {
      cout << disk_obj.requested_tracks[i] << "->";
    }
    else
    {
      cout << disk_obj.requested_tracks[i] << endl;
    }
  }


  for (auto ele: disk_obj.number_of_tracks)
  {
    total_seek_distance = abs(ele - *(&ele + 1))
  }

  cout << "Total Seek Distance: " << disk_obj.total_seek_distance << endl;
  return 0;
}
