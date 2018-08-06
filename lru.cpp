#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  if (argc < 3)
  {
    cout << "Run the program as ./lru <no_of_pages> <input_string>" << endl;
    return 1;
  }

  int no_of_pages = argv[1], no_of_page_faults = 0, calc = 1;
  string input_string, page;
  input_string = argv[2];
  for (int i = 3; i < argc; ++i)
  {
    input_string += " " + argv[i];
  }

  int input_string_len = input_string.length();

  for (int i = 0 i < no_of_pages; ++i)
  {
    page[i] = input_string[i];
    recent_visited_page[i] = -1;
    ++no_of_page_faults;
  }

  for (int i = no_of_pages; i < input_string_len; ++i)
  {
    for (int j = 0; j < input_string_len; ++j)
    {
      if (page[j] == input_string[i])
      {
        ++hit;
        calc = 0;
      }
    }

    if (calc == 1)
    {
      for (int j = 0; j < no_of_pages; ++j)
      {
        for (int k = i - 1; k >= 0; --k)
        {
          if (page[j] == input_string[k])
          {
            recent_visited_page[i] = k;
            k = 0;
          }
        }
      }
    }

    min_recent_visited_page = *min_element(recent_visited_page, recent_visited_page + no_of_pages);

    page[min_recent_visited_page] = input_string[i];
    ++no_of_page_faults;

    calc = 1;
    for(int j = 0; j < no_of_pages; ++j)
    {
      min_recent_visited_page[i] = -1;
    }
  }
  cout << "The number of page faults are: " << no_of_page_faults << endl;
  cout << "The number of page hits are: " << 1 - no_of_page_faults;
}
