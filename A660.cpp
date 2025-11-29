#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int x, y;
    double price[6]={0,4,4.5,5,2,1.5};
    cin>>x>>y;
    cout<<"Total: R$ "<<fixed<<setprecision(2)<<price[x]*y<<endl;
    return 0;
}