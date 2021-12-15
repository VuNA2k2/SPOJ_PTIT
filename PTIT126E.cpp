#include<bits/stdc++.h>
using namespace std;
string s;
void count()
{
    int county=0,countn=0,countp=0,counta=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='Y') county++;
        if(s[i]=='N') countn++;
        if(s[i]=='P') countp++;
        if(s[i]=='A') counta++;
    }
    if(counta>=ceil((float)s.size()/2)) cout << "need quorum";
    else
    {
        if(county==countn)cout << "tie";
        else
        {
            if(county>countn) cout << "yes";
            else cout << "no";
        }
    }
    cout << endl;
}
int main()
{
    while (true)
    {
        cin >> s;
        if(s=="#")break;
        count();
        
    }
        

}