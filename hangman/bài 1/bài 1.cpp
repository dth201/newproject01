#include<bits/stdc++.h>

using namespace std;
class NCC{
    char MaNCC[20];
    char TenNCC[20];
    char Diachi[30];
public:
     void nhap();
     void xuat();
};
void NCC::nhap()
{
    cout<<"Ma ncc: ";fflush(stdin);gets(MaNCC);
    cout<<"Ten ncc: ";fflush(stdin);gets(TenNCC);
    cout<<"Dia chi: ";fflush(stdin);gets(Diachi);
}
void NCC::xuat()
{
    cout<<setw(15)<<MaNCC<<setw(20)<<TenNCC<<setw(20)<<Diachi<<endl;
}
class HANG{
    char Tenhang[20];
    float Dongia;
    int Soluong;

public:
    void nhap();
    void xuat();
    friend class PHIEU;
};
void HANG::nhap()
{
    cout<<"ten hang: ";fflush(stdin);gets(Tenhang);
    cout<<"don gia: ";cin>>Dongia;
    cout<<"so luong: ";cin>>Soluong;
}
void HANG::xuat()
{
    cout<<setw(15)<<Tenhang<<setw(20)<<Dongia<<setw(20)<<Soluong<<setw(20)<<Dongia*Soluong<<endl;
}
class PHIEU{
    char Maphieu[20];
    char Ngaylap[15];
    NCC X;
    HANG* Y;
    int n;
public:
    void nhap();
    void xuat();
};
void PHIEU::nhap(){
    cout<<"ma phieu: ";fflush(stdin);gets(Maphieu);
    cout<<"ngay lap: ";fflush(stdin);gets(Ngaylap);
    X.nhap();
    cout<<" So mat hang: ";cin>>n;
    Y=new HANG[n];
    for(int i=0;i<n;i++)
        Y[i].nhap();
}
void PHIEU::xuat(){
    X.xuat();
    cout<<setw(15)<<"Ten hang"<<setw(20)<<"Don gia"<<setw(30)<<"So luong "<<setw(20)<<"Thanh tien"<<endl;
    for(int i=0;i<n;i++)
        Y[i].xuat();
    float TONGTIEN=0;
    for(int i=0; i<n; i++) TONGTIEN += Y[i].Dongia*Y[i].Soluong;
    cout<<"Cong thanh tien: "<<TONGTIEN;

}
int main(){
    PHIEU a;
    a.nhap();
    a.xuat();
    return 0;
}


