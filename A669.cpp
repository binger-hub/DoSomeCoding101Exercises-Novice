#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    int flag;
    double n,new_s,r_s;
    double percentage[]={0,0.15,0.12,0.1,0.07,0.04};
    cin>>n;
    if(n>2000) flag=5;
    else if(n>1200) flag=4;
    else if(n>800) flag=3;
    else if(n>400) flag=2;
    else flag=1;
    new_s=n +n*percentage[flag];
    r_s=n*percentage[flag];
    printf("Novo salario: %.2f\n",new_s);
    printf("Reajuste ganho: %.2f\n",r_s);
    printf("Em percentual: %.0f %%",percentage[flag]*100);
    return 0;
}