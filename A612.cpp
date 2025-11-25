#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159
int main(){
    int R;
    cin>>R;
    double v = PI*pow(R,3)*(4/3.0);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<v<<endl;
    return 0;
}