#include <iostream>
using namespace std;
int main()
{
    double a;
    cin>>a;
    int b =100*a;
    int N_H=b/10000;
    int N_F=b%10000/5000;
    int N_TW=b%10000%5000/2000;
    int N_TE=b%10000%5000%2000/1000;
    int N_FI=b%10000%5000%2000%1000/500;
    int N_TWO=b%10000%5000%2000%1000%500/200;
    int m_one=b%10000%5000%2000%1000%500%200/100;
    int m_z_fi=b%10000%5000%2000%1000%500%200%100/50;
    int m_z_twfi=b%10000%5000%2000%1000%500%200%100%50/25;
    int m_z_one=b%10000%5000%2000%1000%500%200%100%50%25/10;
    int m_z_z_fi=b%10000%5000%2000%1000%500%200%100%50%25%10/5;
    int m_z_z_one=b%10000%5000%2000%1000%500%200%100%50%25%10%5;
    cout<<"NOTAS:"<<endl;
    cout<<N_H<<" nota(s) de R$ 100.00"<<endl;
    cout<<N_F<<" nota(s) de R$ 50.00"<<endl;
    cout<<N_TW<<" nota(s) de R$ 20.00"<<endl;
    cout<<N_TE<<" nota(s) de R$ 10.00"<<endl;
    cout<<N_FI<<" nota(s) de R$ 5.00"<<endl;
    cout<<N_TWO<<" nota(s) de R$ 2.00"<<endl;
    cout<<"MOEDAS:"<<endl;
    cout<<m_one<<" moeda(s) de R$ 1.00"<<endl;
    cout<<m_z_fi<<" moeda(s) de R$ 0.50"<<endl;
    cout<<m_z_twfi<<" moeda(s) de R$ 0.25"<<endl;
    cout<<m_z_one<<" moeda(s) de R$ 0.10"<<endl;
    cout<<m_z_z_fi<<" moeda(s) de R$ 0.05"<<endl;
    cout<<m_z_z_one<<" moeda(s) de R$ 0.01"<<endl;
    return 0;
}