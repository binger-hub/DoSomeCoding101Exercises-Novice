#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int y=n/365;
    int m=n%365/30;
    int d=n%365%30;
    cout<<y<<" ano(s)"<<endl<<m<<" mes(es)"<<endl<<d<<" dia(s)"<<endl;
    return 0;
}