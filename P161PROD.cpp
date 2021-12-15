#include<bits/stdc++.h>
using namespace std;
    
int main()
{
    string s1="qwertyuiopqwertyuiop" , s2="asdfghjkl;asdfghjkl;" , s3="zxcvbnm,./zxcvbnm,./";
    char x;
    string s;
    cin >> x >> s;
    if(x=='L')
    {
        for(int i=0;i<s.size();i++)
        {
            int ok=0;
            if(ok==0)
                for(int j=0;j<s1.size();j++)
                {
                    if(s[i]==s1[j])
                    {
                        ok=1;
                        cout<<s1[j+1];
                        break;
                    }
                }
            if(ok==0)
                for(int j=0;j<s2.size();j++)
                {
                    if(s[i]==s2[j])
                    {
                        ok=1;
                        cout<<s2[j+1];
                        break;
                    }
                }
            if(ok==0)
                for(int j=0;j<s3.size();j++)
                {
                    if(s[i]==s3[j])
                    {
                        ok=1;
                        cout<<s3[j+1];
                        break;
                    }
                }
        }
    }
    else
    {
        for(int i=0;i<s.size();i++)
        {
            int ok=0;
            if(ok==0)
                for(int j=s1.size()-1;j>=0;j--)
                {
                    if(s[i]==s1[j])
                    {
                        ok=1;
                        cout<<s1[j-1];
                        break;
                    }
                }
            if(ok==0)
                for(int j=s2.size()-1;j>=0;j--)
                {
                    if(s[i]==s2[j])
                    {
                        ok=1;
                        cout<<s2[j-1];
                        break;
                    }
                }
            if(ok==0)
                for(int j=s3.size()-1;j>=0;j--)
                {
                    if(s[i]==s3[j])
                    {
                        ok=1;
                        cout<<s3[j-1];
                        break;
                    }
                }
        }
    }
}