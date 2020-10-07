#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool isUnique(string s)
{
  if (s == "")
    return true;

  sort(s.begin(), s.end());

  for (string::size_type i = 0; i < s.size() - 1; i++)
  {
    if (s[i] == s[i + 1])
      return false;
  }

  return true;
}

int main()
{
  cout << isUnique("qwerty");                     // 1
  cout << isUnique("");                           // 1
  cout << isUnique("sdfghiojvci");                // 0
  cout << isUnique("qwertyuiopasdfghjklzxcvbnm"); // 1
  cout << isUnique("cvnbofoqaolo");               // 0
}
