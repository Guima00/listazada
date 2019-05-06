#include <iostream>
#include "Ponto.h"
#include "ListaCont.h"

using namespace std;

int main()
{
    ListaCont l1(50);
    ListaCont l2(25);
    ListaCont l3(25);
    for(int i=0; i<50; i++)
    {
        l1.insereFinal(i);
    }
    l1.imprime();
    cout<<endl;
    //l2.insereInicio(l1.get(0));
    //l2.insereFinal(l1.get(24));
    for(int i=0; i<25; i++)
    {
        l2.insereFinal(l1.get(0));
        l1.removeInicio();
    }
    l2.imprime();
    cout<<endl;
    for(int i=0; i<25; i++)
    {
        l3.insereFinal(l1.get(0));
        l1.removeInicio();
    }
//    l3.insereInicio(l1.get(25));
//    l3.insereFinal(l1.get(49));
//    for(int i=26,k=0;i<49;i++,k++)
//    {
//        l3.insereK(k,l1.get(i));
//    }
    l3.imprime();
    return 0;
}
