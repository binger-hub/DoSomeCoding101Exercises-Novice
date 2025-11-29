#include <iostream>
using namespace std;
int main()
{
    double x,y;
    cin>>x>>y;
    if(x==0&&y==0) cout<<"Origem";
    else if(x>0&&y>0) cout<<"Q1";
    else if(x>0&&y<0) cout<<"Q4";
    else if(x<0&&y>0) cout<<"Q2";
    else if(x<0&&y<0) cout<<"Q3";
    else if(x==0) cout<<"Eixo Y";
    else if(y==0) cout<<"Eixo X";
    return 0;
}
// int main()
// {
//     double a,b;
//     cin>>a>>b;
//     if(a>0&&b>0){cout<<"Q1";return 0;}
//     if(a>0&&b<0){cout<<"Q4";return 0;}
//     if(a<0&&b>0){cout<<"Q2";return 0;}
//     if(a<0&&b<0){cout<<"Q3";return 0;}
//     if(a==0&&b==0){cout<<"Origem";return 0;}
//     if(a==0){cout<<"Eixo Y";return 0;}
//     if(b==0){cout<<"Eixo X";return 0;}
// }
