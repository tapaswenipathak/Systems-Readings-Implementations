#include <string>
#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
  if (argc < 3)
  {
    cout << "Run the program as ./fifo <no_of_pages> <input_string>" << endl;
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

  for (int i = 0; i < input_string_len; ++i)
  {
    for (int j = 0; j < no_of_pages; ++j)
    {
      if (input_string[i] == page[j])
      {
        calc = 0;
      }
    }
    if (calc = 1)
    {
      page[no_of_page_faults % no_of_pages] = input_string[i];
      ++no_of_page_faults;
    }
    calc = 1;
  }

  cout << "The number of page faults are: " << no_of_page_faults;
  cout << "The number of page hits are: " << 1 - no_of_page_faults;
}
