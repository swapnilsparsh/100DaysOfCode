#include <iostream>
using namespace std;
int main()
{
  int t;
  cin >> t;
  for (int i = 0; i < t; i++)
  {
    int n, k,countZero=0,res=0;
    cin >> n >> k;
    string s;
    cin >> s;
    for (int j = 0; j < s.length(); j++)
    {
      if (s[j] == '0')
      {
        ++countZero;
        if (countZero >= k)
        {
          res++;
          countZero = 0;
        }
      }
      else
      {
        countZero = 0;
      }
    }
    cout << res;
    cout << endl;
  }
  return 0;
}