#include <iostream>
using namespace::std;

int POW (int input,int nilai_pangkat)
{
    if(nilai_pangkat==0)
        return 1;
    else if(nilai_pangkat>=1)
        return input*POW(input,nilai_pangkat-1);
    else if(nilai_pangkat<0)
        return 1/input*POW(input,nilai_pangkat+1);
}

main()
{
    int a,p;
    cout<<"Angka Inputan = ";
    cin>>a;
    cout<<"Nilai Pangkat = ";
    cin>>p;
    cout<<a<<" Pangkat "<<p<<" = "<<POW(a,p);
}
