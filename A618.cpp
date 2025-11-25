#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double t,s;
    cin>>t>>s;
    cout<<fixed<<setprecision(3)<<s*t/12.0<<endl;
    return 0;
}