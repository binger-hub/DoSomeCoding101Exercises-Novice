#include <iostream>
using namespace std;
int main()
{
    int n;
    int hundred, fifty, twenty, ten, five, two, one;
    cin>>n;
    hundred = n/100;
    fifty = n%100/50;
    twenty = n%100%50/20;
    ten = n%100%50%20/10;
    five = n%100%50%20%10/5;
    two = n%100%50%20%10%5/2;
    one = n%100%50%20%10%5%2;
    cout<<n<<endl;
    cout<<hundred<<" nota(s) de R$ 100,00"<<endl;
    cout<<fifty<<" nota(s) de R$ 50,00"<<endl;
    cout<<twenty<<" nota(s) de R$ 20,00"<<endl;
    cout<<ten<<" nota(s) de R$ 10,00"<<endl;
    cout<<five<<" nota(s) de R$ 5,00"<<endl;
    cout<<two<<" nota(s) de R$ 2,00"<<endl;
    cout<<one<<" nota(s) de R$ 1,00"<<endl;
    return 0;
}
