#include<bits/stdc++.h>
using namespace std;
#define endl '\n';
char s[250] , x[250];
vector<string> S(2);
void a()
{
    cout << "a" << endl;
    gets(s);
    strcpy(x,s);
}
void b()
{
    cout << "b" << endl;
    for(int i=0;i<strlen(s);i++)
    {
        if(isdigit(s[i]))
        {
            S[0].push_back(s[i]);
        }
        else S[0].push_back(' ');
        if(isalpha(s[i]))
        {
            S[1].push_back(s[i]);
        }
        else S[1].push_back(' ');
    }
}
void c()
{
    cout << "c" << endl;
    cout << strlen(s) << " " << s << endl;
}
void d()
{
    cout << "d" << endl;
    sort(s,s+strlen(s));
    cout << s << endl;
}
vector<string> chars;
vector<string> name;
void process()
{
    char *p=strtok(x," ");
    while(p!=NULL)
    {
        chars.push_back(p);
        p=strtok(NULL," ");
    }
}
void e()
{
    cout << "e" << endl;
    for(int i=0;i<chars.size();i++)
    {
        if(chars[i]=="Nguyen"||chars[i]=="Cong"||chars[i]=="Doan")
        {
            name.push_back(chars[i]);
        }
    }
    for(int i=0;i<name.size();i++)
    {
        cout << name[i] << " ";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    a();
    process();
    b();
    c();
    d();
    e();
}