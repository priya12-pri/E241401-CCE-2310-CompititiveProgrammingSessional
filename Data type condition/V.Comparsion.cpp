#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int a,b;
    char c;
    cin >> a >> c >> b;
    if(c=='<' && a<b)
        cout << "Right" << endl;
    else if(c=='>' && a>b)
        cout << "Right" << endl;
    else if(c=='=' && a==b)
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;
}