#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char* argv[])
{
  // Read an integer n from the command line
  std::stringstream stream;
  stream << argv[1];
  
  int n;
  stream >> n;

  std::cout << " n = " << n << std::endl;

  // Add the integers from 1 through n
  int s = 0;
  for (int i = 1; i <= n; i++)
  {
    s += i;
  }

  std::cout << " s = " << s << std::endl;
  
  return 0;
}
