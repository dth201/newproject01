#include<bits/stdc++.h>

using namespace std;
class PKKTS;
class TAISAN
{
    char Tentaisan[20];
    int Soluong;
    char Tinhtrang[20];
public:
    void nhap();
    void xuat();
    friend class PKKTS;
    friend void bonus1(PKKTS c);
    friend void bonus2(PKKTS c);
};
class PKKTS
{
    char Maphieu[20];
    char Ngaykiemke[20];
    char Nvkiemke[20];
    char Chucvu[20];
    char Phongkiemke[20];
    char Maphong[20];
    char Truongphong[20];
    TAISAN *a;
    int n;
public:
    void nhap();
    void xuat();
    friend void bonus1(PKKTS c);
    friend void bonus2(PKKTS c);
};
void TAISAN::nhap()
{
    cout<<"ten tai san: ";fflush(stdin);gets(Tentaisan);
    cout<<"so luong: ";cin>>Soluong;
    cout<<"tinh trang: ";fflush(stdin);gets(Tinhtrang);
}
void TAISAN::xuat()
{
    cout<<setw(20)<<Tentaisan<<setw(10)<<Soluong<<setw(20)<<Tinhtrang<<endl;
}
void PKKTS::nhap()
{
    cout<<"ma phieu: ";fflush(stdin);gets(Maphieu);
    cout<<"ngay kiem ke: ";fflush(stdin);gets(Ngaykiemke);
    cout<<"nv kiem ke: ";fflush(stdin);gets(Nvkiemke);
    cout<<"chuc vu: ";fflush(stdin);gets(Chucvu);
    cout<<"phong kiem ke: ";fflush(stdin);gets(Phongkiemke);
    cout<<"ma phong: ";fflush(stdin);gets(Maphong);
    cout<<"truong phong: ";fflush(stdin);gets(Truongphong);
    cout<<"So tai san : ";cin>>n;
    a = new TAISAN[n];
    for(int i=0 ; i<n ; i++)
        a[i].nhap();
}
void PKKTS::xuat()
{
    int T=0;
    cout<<setw(20)<<"Ma phieu"<<setw(20)<<"Ngay kiem ke"<<setw(20)<<"Nhan vien kiem ke"<<setw(20)<<"Chuc vu"
    <<setw(20)<<"Phong kiem ke"<<setw(20)<<"Ma phong"<<setw(20)<<"Truong phong"<<endl;
    cout<<setw(20)<<Maphieu<<setw(20)<<Ngaykiemke<<setw(20)<<Nvkiemke<<setw(20)<<Chucvu<<setw(20)<<Phongkiemke<<setw(20)<<Maphong<<setw(20)<<Truongphong<<endl;
    cout<<setw(20)<<"Ten tai san"<<setw(20)<<"So luong"<<setw(20)<<"Tinh trang"<<endl;
    for(int i=0 ; i<n ; i++)
    {
        a[i].xuat();
        T+=a[i].Soluong;
    }
    cout<<"So tai san da kiem ke: "<<n<<endl;
    cout<<"Tong so luong: "<<T<<endl;
}
void bonus1(PKKTS c)
{
    int sua,vt;
    cout<<"Nhap so can sua ";
    cin>>sua;
    cout<<"Nhap vi tri can sua: ";
    cin>>vt;
    if(vt>0 || vt==0 )
        for(int i=c.n ; i>vt ; i--)
            c.a[i]=c.a[i-1];
        c.a[vt].Soluong= sua;
}
void bonus2(PKKTS c)
{
    for(int i=0 ; i<c.n ; i++)
        for(int j=i+1; j<c.n ; j++)
            if(c.a[i].Soluong>c.a[j].Soluong)
                swap(c.a[i],c.a[j]);
}
int main()
{
    PKKTS c;
    c.nhap();
    c.xuat();
    bonus1(c);
    c.xuat();
    bonus2(c);
    c.xuat();
}
