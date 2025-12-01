#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    a=a*60;
    c=c*60;
    int re=c+d-a-b;
    if(re<=0)re=re+24*60;
    int h=re/60;
    int min=re%60;
    cout<<"O JOGO DUROU "<<h<<" HORA(S) E "<<min<<" MINUTO(S)";
    return 0;
}
// if(d<b){c=c-1;d=d+60;}
// if(c<a)c=c+24;
// if(a==c&&b==d) c=c+24;
// printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)",c-a,d-b);