#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string urlify(string s)
{
  for (string::size_type i = 0; i < s.size() - 1; i++)
  {
    if (s[i] == ' ' && s[i + 1] != ' ')
      s.replace(i, 1, "%20");
  }

  return s;
}

int main()
{
  cout << urlify("qwerty is great");   // querty%20is%20great
  cout << urlify("Mr John Smith");     // Mr%20John%20Smith
  cout << urlify("hello there      "); // hello%20there
}
