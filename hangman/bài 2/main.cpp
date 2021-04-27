#include<bits/stdc++.h>

using namespace std;
class PHIEUBAODIEM;
class MONHOC;
class THONGTINSINHVIEN;
class THONGTINSINHVIEN{
    char Masv[20];
    char Tensv[30];
    char Lop[20];
    char Khoa[10];
public:
    void nhap();
    void xuat();
};
void THONGTINSINHVIEN::nhap(){
    cout<<"ma sv: ";fflush(stdin);gets(Masv);
    cout<<"ten sv: ";fflush(stdin);gets(Tensv);
    cout<<"lop: ";fflush(stdin);gets(Lop);
    cout<<"khoa: ";fflush(stdin);gets(Khoa);
}
void THONGTINSINHVIEN::xuat(){
    cout<<"Ma sinh vien: "<<Masv<<"        ";
    cout<<"Ten sinh vien: "<<Tensv<<endl;
    cout<<"Lop: "<<Lop<<"        ";
    cout<<"Khoa: "<<Khoa<<endl;
}
class MONHOC{
    char Tenmon[20];
    int Sotrinh;
    float Diem;
public:
    void nhap();
    void xuat();
    friend class PHIEUBAODIEM;
    friend void bonus1(PHIEUBAODIEM a);
    friend void bonus2(PHIEUBAODIEM &a);
};
void MONHOC::nhap(){
    cout<<"ten mon: ";fflush(stdin);gets(Tenmon);
    cout<<"so trinh: ";cin>>Sotrinh;
    cout<<"diem: ";cin>>Diem;
}
void MONHOC::xuat(){
    cout<<setw(30)<<Tenmon<<setw(10)<<Sotrinh<<setw(10)<<Diem<<endl;
}

class PHIEUBAODIEM{
    THONGTINSINHVIEN X;
    MONHOC *Y;
    int n;
public:
     void nhap();
     void xuat();
     friend void bonus1(PHIEUBAODIEM a);
     friend void bonus2(PHIEUBAODIEM &a);
};

void PHIEUBAODIEM::nhap(){
    X.nhap();
    cout<<"Nhap so mon: "; cin>>n;
    Y=new MONHOC[n];
    for(int i=0; i<n; i++)
    Y[i].nhap();
}
void PHIEUBAODIEM::xuat(){
    cout<<"PHIEU BAO DIEM"<<endl;
    X.xuat();
    cout<<"Bang diem: "<<endl;
    cout<<setw(30)<<"Ten mon"<<setw(10)<<"So trinh"<<setw(10)<<"Diem"<<endl;
    for(int i=0; i<n; i++)
        Y[i].xuat();
    float T=0; int TS=0;
    for(int i=0;i<n;i++){
        T += Y[i].Diem*Y[i].Sotrinh;
        TS+= Y[i].Sotrinh;
    }
    cout<<"Diem trung binh:"<<T/TS<<endl;
}
void bonus1(PHIEUBAODIEM a)
{
    int dem=0;
    for(int i=0 ; i<a.n ; i++)
    {
        if(a.Y[i].Sotrinh > 3 )
            dem++;
    }
    cout<<"So trinh lon hon 3: "<<dem<<endl;
}
void bonus2(PHIEUBAODIEM &a)
{
    int b;
    a.n++;
    cout<<"Nhap them mon hoc: ";cin>>b;
    a.Y= (MONHOC *)realloc(a.Y, sizeof(MONHOC)*a.n);
    for(int i=a.n; i>b; i--)
    {
        a.Y[i]= a.Y[i-1];
    }
    a.Y[b].nhap();

}

int main(){
   PHIEUBAODIEM a;
   a.nhap();
   a.xuat();
   bonus1(a);
   bonus2(a);
   a.xuat();
}
