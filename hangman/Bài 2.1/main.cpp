#include<bits/stdc++.h>
using namespace std;

class DATE	 {
    int D,M,Y;
public:
    void nhap();
    void xuat();
    friend class TIVI;
};
void DATE::nhap()
{
    cout<<"Nhap ngay/thang/nam: ";
    cin>>D>>M>>Y;
}
void DATE::xuat(){
    cout<<"Day: "<<D<<" Month: "<<M<<" Year: "<<Y<<endl;
}

class NSX{
    char TenNSX[30];
    char Diachi[30];
public:
    void nhap();
    void xuat();
    friend class HANG;
};
void NSX::nhap()
{
    cout<<"Ten nha san xuat: ";fflush(stdin);gets(TenNSX);
    cout<<"Dia chi: ";fflush(stdin);gets(Diachi);
}
void NSX::xuat()
{
    cout<<setw(20)<<"Ten nha san xuat: "<<TenNSX<<setw(20)<<"Dia chi: "<<Diachi<<endl;
}

class HANG{
protected:
    char Tenhang[20];
    NSX a;
    float Dongia;
public:
    void nhap();
    void xuat();
    HANG();
};
HANG::HANG()
{
    strcpy(Tenhang, "");
    strcpy(a.TenNSX,"");
    strcpy(a.Diachi,"");
    Dongia=0;
}
void HANG::nhap()
{
    cout<<"Nhap ten hang: ";fflush(stdin);gets(Tenhang);
    a.nhap();
    cout<<"Nhap don gia: ";cin>>Dongia;
}
void HANG::xuat()
{
    cout<<setw(20)<<"Ten hang: "<<Tenhang<<setw(20)<<"Don gia: "<<Dongia<<endl;
    a.xuat();
}


class TIVI : public HANG
{
    float Kichthuoc;
    DATE Ngaynhap;
public:
    void nhap();
    void xuat();
    TIVI();
};
TIVI::TIVI():HANG()
{
    Kichthuoc=0;
    Ngaynhap.D=Ngaynhap.M=Ngaynhap.Y = 0;
}

void TIVI::nhap()
{
    HANG::nhap();
    cout<<"Nhap kich thuoc:";cin>>Kichthuoc;
    Ngaynhap.nhap();
}
void TIVI::xuat()
{
    HANG::xuat();
    cout<<"Kich thuoc: "<<Kichthuoc<<endl;
    Ngaynhap.xuat();
}

int main()
{
    TIVI x;
    x.nhap();
    x.xuat();
}
