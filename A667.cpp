#include <iostream>
using namespace std;
int main()
{
    int a,b;
    int s;
    cin>>a>>b;
    if(a>b) s=b+24-a;
    else if(a<b) s=b-a;
    else s=24;
    cout<<"O JOGO DUROU "<<s<<" HORA(S)"<<endl;
    return 0;
}