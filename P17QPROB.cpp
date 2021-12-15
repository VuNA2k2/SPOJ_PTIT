#include<bits/stdc++.h>
using namespace std;



struct MyNameIsVu
{
    string a;
};

bool compare(MyNameIsVu s1, MyNameIsVu s2)
{
    if(s1.a+s2.a< s2.a+s1.a) return true;
    return false;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<MyNameIsVu> list(n);
        for(int i=0;i<n;i++)
        {
            cin >> list[i].a;
        }
        sort(list.begin(),list.end(),compare);
        for(int i=0;i<n;i++)
        {
            cout << list[i].a;
        }
        cout << endl;
    }
}