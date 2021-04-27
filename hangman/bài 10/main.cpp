#include<bits/stdc++.h>

using namespace std;
class nsx{
    char mansx[20];
    char tennsx[20];
    char dcnsx[20];
};
class hang{
    char mahang[20];
    char tenhang[20];
    float dongia;
    float trongluong;
    nsx x;
public:
    void nhap();
    void xuat();
};
void hang::nhap(){
    cout<<"Ma hang: ";fflush(stdin);gets(mahang);
    cout<<"Ten hang: ";fflush(stdin);gets(tenhang);
    cout<<"Don gia: ";cin>>dongia;
    cout<<"Trong luong: ";cin>>trongluong;
}
void hang::xuat(){
    cout<<setw(20)<<mahang<<setw(20)<<tenhang<<setw(20)<<dongia<<setw(20)<<trongluong<<endl;
}
