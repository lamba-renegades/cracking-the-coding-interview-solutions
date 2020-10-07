#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool checkPermutation(string s1, string s2)
{
  if (s1.size() != s2.size())
    return false;

  sort(s1.begin(), s1.end());
  sort(s2.begin(), s2.end());

  if (s1.compare(s2) == 0)
    return true;
  else
    return false;
}

int main()
{
  cout << checkPermutation("", "taco");         // 0
  cout << checkPermutation("door", "");         // 0
  cout << checkPermutation("acot", "taco");     // 1
  cout << checkPermutation("qwerty", "yqtwre"); // 1
  cout << checkPermutation("qwerty", "dvorak"); // 0
}