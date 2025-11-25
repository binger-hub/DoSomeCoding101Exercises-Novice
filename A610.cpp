#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    string name;
    double b,r;
    cin>>name>>b>>r;
    double sum = b+0.15*r;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<sum<<endl;
    return 0;
}