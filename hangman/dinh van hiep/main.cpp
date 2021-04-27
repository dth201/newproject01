#include<iostream>

using namespace std;
class SINHVIEN{
   char MASV[20];
   char HOTEN[20];
   int TUOI;
   float DIEM;
public:
    void NHAP();
    void XUAT();
};
void SINHVIEN::NHAP(){
   cout<<"ma sv: ";ffush(stdin);gets(MASV);
   cout<<"ho ten: ";ffush(stdin);gets(HOTEN);
   cout<<"Tuoi: ";cin>>TUOI;
   cout<<"Diem: ";cin>>DIEM;
}
void SINHVIEN::XUAT(){
    cout<<setw(20)<<MASV<<setw(20)<<HOTEN<<setw(10)<<TUOI<<setw(10)<<DIem<<endl;
}
int main(){
    SINHVIEN a,b;
    cout<<"Nhap thong tin cua sinh vien a: "<<endl;
    a.NHAP();
    cout<<"Nhap thong tin cua sinh vien b: "<<endl;
    b.NHAP();
    cout<<"sinh vien a: "<<endl;
    a.XUAT();
    cout<<"sinh vien b: "<<endl;
    b.XUAT();
    return 0;
}
