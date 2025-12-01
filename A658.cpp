#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    if(b*b-4*a*c>=0&&a!=0)
    {
        printf("R1 = %.5lf\nR2 = %.5lf",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
        return 0;
    }
    else
    cout<<"Impossivel calcular";
}