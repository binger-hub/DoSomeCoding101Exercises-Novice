#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double tangle = a*c/2;
    double round = PI*pow(c,2);
    double trapezoid = (a+b)*c/2;
    double square = pow(b,2);
    double rectangle=a*b;
    cout<<"TRIANGULO: "<<fixed<<setprecision(3)<<tangle<<endl;
    cout<<"CIRCULO: "<<fixed<<setprecision(3)<<round<<endl;
    cout<<"TRAPEZIO: "<<fixed<<setprecision(3)<<trapezoid<<endl;
    cout<<"QUADRADO: "<<fixed<<setprecision(3)<<square<<endl;
    cout<<"RETANGULO: "<<fixed<<setprecision(3)<<rectangle<<endl;
}