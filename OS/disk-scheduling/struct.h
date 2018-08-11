/**
 * Structure declaration and definition.
 */

#include <vector>

struct disk
{
  int num_of_tracks;
  int curr_head_pos;
  int num_of_cylinders;
  vector<int> requested_tracks;
  int total_seek_distance;

} disk_obj;
