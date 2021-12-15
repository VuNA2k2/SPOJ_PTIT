#include<bits/stdc++.h>
 
using namespace std;
 
int n;
void Try(string s)
{
  if (s.length() == n)
  {
    cout << s << " ";
  }
  else
  {
    Try(s + "0");
    Try(s + "1");
  }
 
}
 
int main()
{
 
  int t;
  cin >> t;
  while(t--)
  {
    cin >> n;
    Try("");
    cout << endl;
  }
  
 
  return 0;
}