#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a==61) cout<<"Brasilia";
    else if(a==71) cout<<"Salvador";
    else if(a==11) cout<<"Sao Paulo";
    else if(a==21) cout<<"Rio de Janeiro";
    else if(a==32) cout<<"Juiz de Fora";
    else if(a==19) cout<<"Campinas";
    else if(a==27) cout<<"Vitoria";
    else if(a==31) cout<<"Belo Horizonte";
    else cout<<"DDD nao cadastrado";
    return 0;
}
// #include <iostream>
// using namespace std;
// int main()
// {
//     int a[]={61,71,11,21,32,19,27,31};
//     string str[]={"Brasilia","Salvador","Sao Paulo","Rio de Janeiro","Juiz de Fora","Campinas","Vitoria","Belo Horizonte"};
//     string s="a";
//     int num;
//     cin>>num;
//     for(int i =0;i<8;i++)
//     {
//         if(num==a[i])
//         {
//             s=str[i];
//             cout<<s;
//             break;
//         }
//     }
//     if(s=="a") cout<<"DDD nao cadastrado";
//     return 0;
// }