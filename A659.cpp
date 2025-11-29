#include <iostream>
using namespace std;
int main()
{
    double x;
    cin>>x;
    if(x>100||x<0) cout<<"Fora de intervalo";
    else if(x>75) cout<<"Intervalo (75,100]";
    else if(x>50) cout<<"Intervalo (50,75]";
    else if(x>25) cout<<"Intervalo (25,50]";
    else cout<<"Intervalo [0,25]";
    return 0;
}