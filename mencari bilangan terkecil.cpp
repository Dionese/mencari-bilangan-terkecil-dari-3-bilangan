#include<iostream>
using namespace std;
int main()
{
    int a,b,c,terkecil;
    cout<<"Masukan bilangan A :";cin>>a;
    cout<<"Masukan bilangan B :";cin>>b;
    cout<<"Masukan Bilangan C :";cin>>c;
    {
        if(a>b)
            terkecil=b;
        else
            terkecil=a;
        if(c<terkecil)
            terkecil=c;
        cout<<endl;
        cout<<"Nilai Terkecil nya adalah : "<<terkecil;cout<<endl;
    }
    return 0;
}
