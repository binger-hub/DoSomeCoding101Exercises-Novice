#include <iostream>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    if(a=="vertebrado")
    {
        if(b=="ave")
        {
            if(c=="carnivoro")cout<<"aguia";
            else cout<<"pomba";
        }
        else
        {
            if(c=="onivoro")cout<<"homem";
            else cout<<"vaca";
        }
    }
    else
    {
        if(b=="inseto")
        {
            if(c=="hematofago") cout<<"pulga";
            else cout<<"lagarta";
        }
        else
        {
            if(c=="hematofago") cout<<"sanguessuga";
            else cout<<"minhoca";
        }
    }
    return 0;
}
// int main()
// {
//     string a,b,c;
//     cin>>a>>b>>c;
//     if(a=="vertebrado"&&b=="ave"&&c=="carnivoro") cout<<"aguia";
//     if(a=="vertebrado"&&b=="ave"&&c=="onivoro") cout<<"pomba";
//     if(a=="vertabrado"&&b=="mamifero"&&c=="onivoro") cout<<"homem";
//     if(a=="vertabrado"&&b=="mamifero"&&c=="herbivoro") cout<<"vaca";
//     if(a=="invertebrado"&&b=="inseto"&&c=="hematofago") cout<<"pulga";
//     if(a=="invertebrado"&&b=="inseto"&&c=="herbivoro") cout<<"lagarta";
//     if(a=="invertebrado"&&b=="anelideo"&&c=="hematofago") cout<<"sanguessuga";
//     if(a=="invertebrado"&&b=="anelideo"&&c=="onivoro") cout<<"minhoca";
//     return 0;
// }