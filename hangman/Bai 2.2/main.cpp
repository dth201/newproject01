#include<bits/stdc++.h>

using namespace std;
class nsx{
    char tennsx[20];
    char dcnsx[30];
};
class date{
    int D,M,Y;
public:
    void nhap();
    void xuat();
};
class hang{
protected:
    char tenh[30];
    nsx x;
    int dongia;
public:
    void nhap();
    void xuat();
};
class tivi:public hang{
    int kichthuoc;
    date ngaynhap;
    char tenh[30];
    nsx x;
    int dongia;
public:
    void nhap();
    void xuat();
};
void date::nhap(){
    cout<<"Ngay: ";cin>>D;
    cout<<"Thang:";cin>>M;
    cout<<"Nam: ";cin>>Y;
}
void date::xuat(){
    cout<<D<<"/"<<M<<"/"<<Y;
}
void hang::nhap(){
    cout<<"Ten hang: ";fflush(stdin);gets(tenh);
    cout<<"Ten nsx: ";fflush(stdin);gets(x.tennsx);
    cout<<"Dia chi nsx: ";fflush(stdin);gets(x.dcnsx);
    cout<<"Don gia: ";cin>>dongia;
}
void hang::xuat(){
    cout<<"Ten hang: "<<tenhang<<endl;
    cout<<"Ten nsx: "<<x.tennsx<<endl;
    cout<<"Dia chi nsx: "<<x.dcnsx<<endl;
    cout<<"Don gia: "<<dongia;
}
void tivi::nhap(){
    hang::nhap();
    cout<<"Kich thuoc: ";fflush(stdin);gets(kichthuoc);
    ngaynhap.nhap();
}
void tivi::xuat(){
    hang::xuat();
    cout<<"Kich thuoc: "<<kichthuoc<<endl;
    ngaynhap.xuat();
}
void InTheoHang(tivi *a,int n){
    int dem=0;
    for(int i=0;i<n;i++)
        if()
}
int main(){
    tivi *a;int n;
    cout<<"Nhap so tivi: ";cin>>n;
    a = new tivi[n];
    for(int i=0;i<n;i++)
        a[i].nhap;
    for(int i=0;i<n;i++)
        a[i].xuat();

}
