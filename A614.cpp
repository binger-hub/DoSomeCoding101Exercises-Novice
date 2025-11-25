#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a, b, c;
    cin>>a>>b>>c;
    int temp = (a+b+abs(a-b))/2;
    int max = (temp+c+abs(temp-c))/2;
    cout<<max<<" eh o maior"<<endl;
    return 0;
}