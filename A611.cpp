#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x1,x2,y1,y2;
    double z1,z2;
    cin>>x1>>y1>>z1;
    cin>>x2>>y2>>z2;
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<y1*z1+y2*z2<<endl;
    return 0;
}