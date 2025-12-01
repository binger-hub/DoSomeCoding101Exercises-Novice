// #include <iostream>
// using namespace std;
// int main()
// {
//     double a, b, c;
//     double temp;
//     cin>>a>>b>>c;
//     if(b>a&&b>c){
//         temp=a;
//         a=b;
//         b=temp;
//     } 
//     if(c>a&&c>b)
//     {
//         temp=a;
//         a=c;
//         c=temp;
//     }
//     if(a>=b+c)
//     {
//         cout<<"NAO FORMA TRIANGULO";
//     }
//     else
//     {
//         if(a*a==b*b+c*c)
//         {
//             cout<<"TRIANGULO RETANGULO"<<endl;
//         }
//         if(a*a>b*b+c*c)
//         {
//             cout<<"TRIANGULO OBTUSANGULO"<<endl;
//         }
//         if(a*a<b*b+c*c)
//         {
//             cout<<"TRIANGULO ACUTANGULO"<<endl;
//         }
//         if(a==b&&b==c)
//         {
//             cout<<"TRIANGULO EQUILATERO"<<endl;
//         }
//         if(a==b&&b!=c||a==c&&a!=b||b==c&&b!=a) 
//         {
//             cout<<"TRIANGULO ISOSCELES"<<endl;
//         }
//     }
//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    double a, b, c;
    cin>>a>>b>>c;
    if(c>a) swap(a,c);
    if(b>a) swap(a,b);
    if(a>=b+c) {cout<<"NAO FORMA TRIANGULO";return 0;}
    else
    {
        if(a*a==b*b+c*c)cout<<"TRIANGULO RETANGULO"<<endl;
        if(a*a>b*b+c*c)cout<<"TRIANGULO OBTUSANGULO"<<endl;
        if(a*a<b*b+c*c)cout<<"TRIANGULO ACUTANGULO"<<endl;
        if(a==b&&b==c)cout<<"TRIANGULO EQUILATERO"<<endl;
        if(a==b&&b!=c||a==c&&a!=b||b==c&&b!=a)cout<<"TRIANGULO ISOSCELES"<<endl;
    }
}
