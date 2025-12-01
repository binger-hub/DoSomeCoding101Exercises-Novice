#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double salary;
    double taxes;
    cin>>salary;
    if(salary<=2000) {cout<<"Isento";return 0;}
    else if(salary<=3000) taxes=(salary-2000)*0.08;
    else if(salary<=4500) taxes=(salary-3000)*0.18+1000*0.08;
    else taxes=(salary-4500)*0.28+1500*0.18+1000*0.08;
    printf("R$ %.2lf",taxes);
}