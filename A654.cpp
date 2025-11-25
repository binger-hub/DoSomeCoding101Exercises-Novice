#include <iostream>
using namespace std;
int main()
{
    int n;
    int hour,min,sec;
    cin>>n;
    hour = n/3600;
    min = n%3600/60;
    sec = n%3600%60;
    cout<<hour<<':'<<min<<':'<<sec<<endl;
    return 0;
}