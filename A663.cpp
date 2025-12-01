// #include <iostream>
// using namespace std;
// int main()
// {
//     int a,b,c;
//     int max,med,min;
//     cin>>a>>b>>c;
//     if(a>=b&b>=c) cout<<c<<endl<<b<<endl<<a<<endl<<endl;
//     if(a>=c&&c>=b) cout<<b<<endl<<c<<endl<<a<<endl<<endl;
//     if(b>=a&&a>=c) cout<<c<<endl<<a<<endl<<b<<endl<<endl;
//     if(b>=c&&c>=a) cout<<a<<endl<<c<<endl<<b<<endl<<endl;
//     if(c>=b&&b>=a) cout<<a<<endl<<b<<endl<<c<<endl<<endl;
//     if(c>=a&&a>=b) cout<<b<<endl<<a<<endl<<c<<endl<<endl;
//     cout<<a<<endl<<b<<endl<<c<<endl;

// }
// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     int a[10],b[10];
//     cin>>a[1]>>a[2]>>a[3];
//     b[1]=a[1];b[2]=a[2];b[3]=a[3];
//     if(a[1]<a[2]) swap(a[1],a[2]);
//     if(a[1]<a[3]) swap(a[1],a[3]);
//     if(a[2]<a[3]) swap(a[2],a[3]);
//     cout<<a[3]<<endl<<a[2]<<endl<<a[1]<<endl<<endl;
//     cout<<b[1]<<endl<<b[2]<<endl<<b[3]<<endl;
//     return 0;
// }
#include <iostream>
#include <algorithm>
using namespace std;

void s(int x,int y,int z)
{
    if(x>y) swap(x,y);
    if(x>z) swap(x,z);
    if(y>z) swap(y,z);
    cout<<x<<endl<<y<<endl<<z<<endl<<endl;
}
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    s(a,b,c);
    cout<<a<<endl<<b<<endl<<c<<endl;
}