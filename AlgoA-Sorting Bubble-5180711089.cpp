#include <iostream>

using namespace::std;

main()
{
    int L[10],temp,i,j,n;
    cout<<"pengurutan berdasarkan Bublle sort \nmasukkan elements: \n";
    cin>>n;
    for(i=0;i<n;i++)
        {cin>>L[i];}

    cout<<"\nsebelum sorting: ";

    for(i=0;i<n;i++){cout<<L[i];}

    for(i=n-2;i>=0;i--){
        for(j=0;j<=i;j++){
            if(L[j]>L[j+1]){
                temp=L[j];
                L[j]=L[j+1];
                L[j+1]=temp;
            }
        }
    }
    cout<<"\nsetelah sorting: ";
    for(i=0;i<n;i++){cout<<L[i];}

}
