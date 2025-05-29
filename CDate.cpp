#include "CDate.h"
#include <bits/stdc++.h>
using namespace std;

CDate::CDate(string date):date(date){}
istream& operator>>(istream& is, CDate& u){
    getline(is>>ws,u.date);
    u.Tach(u.date); //Gọi hàm thanh viên thông qua đối tượng
    return is;
}
ostream& operator<<(ostream& os, CDate u){
    for(size_t i = 0; i < u.ds.size(); i++){ //u.ds.size() trả về kiểu size_t (unsigned), còn i là int (signed), gây cảnh báo.
        os << u.ds[i];
        if (i != u.ds.size() - 1) os << "/";
    }
    //u.ds.pop_back(); là SAI vì in ra rồi mới pop_back() nên dấu '/' ở cuối vẫn bị in
    return os;
}
void CDate::Tach(string& date){
    stringstream ss(date);
    string word;
    while(getline(ss,word,'/')){
        ds.push_back(stoll(word));
    }
}
bool CDate::LaNamNhuan(long long nam){
    return (nam%4==0 && nam%100!=0)||(nam%400==0);
}
long long CDate::SoNgayTrongThang(long long thang, long long nam){
    if (thang == 2) return LaNamNhuan(nam) ? 29 : 28;
    if (thang == 4 || thang == 6 || thang == 9 || thang == 11) return 30;
    return 31;
}
CDate CDate::operator+(long long num){
    CDate kq = *this;
    while(num>0){
        long long SoNgayThangNay = SoNgayTrongThang(kq.ds[1],kq.ds[2]);
        long long SoNgayConLai = SoNgayThangNay - kq.ds[0];
        if(num <= SoNgayConLai){
            kq.ds[0] += num;
            num = 0;
        }
        else{
            num -= (SoNgayConLai+1);
            kq.ds[0]=1;
            kq.ds[1]++;
            if(kq.ds[1]>12){
                kq.ds[1]=1;
                kq.ds[2]++;
            }
        }
    }
    return kq;
}
CDate CDate::operator-(long long num){
    CDate kq = *this;
    while(num>0){
        if(kq.ds[0] == 1){
            if (kq.ds[1]==1){
                kq.ds[1] = 12;
                kq.ds[2] -= 1;
            }
            else kq.ds[1]-=1;
            kq.ds[0] = SoNgayTrongThang(kq.ds[1],kq.ds[2]);
        }
        else kq.ds[0] -= 1;
        num -= 1;
    }
    return kq;
}
CDate CDate::operator++(){
    *this = *this + 1;
    return *this;
}
CDate CDate::operator--(){
    *this = *this - 1;
    return *this;
}
long long CDate::SoNgayTuNam1(){
    long long tong = 0;
    // Cong so ngay cua cac nam truoc
    for (int nam = 1; nam < ds[2]; nam++){
        tong += 365;
        if(LaNamNhuan(nam)) tong+=1;
    }
    //Cộng số ngày của các tháng trước trong năm hiện tại
    for(int thang = 1; thang < ds[1]; thang++){
        tong += SoNgayTrongThang(thang,ds[2]);
    }
    //Cộng số ngày của tháng hiện tại
    tong += ds[0];
    return tong;
}
long long CDate::operator-(CDate& other){
    return abs(this->SoNgayTuNam1()-other.SoNgayTuNam1());
}
//Áp dụng lớp CDate để tính lãi suất tiền gửi ngân hàng
void CDate::LaiSuat(){
    CDate d1, d2;
    double ls1nam, tienGui;
    cout << "Nhap ngay gui tien : "; cin>> d1;
    cout << "Nhap ngay rut tien : "; cin>>d2;
    long long soNgay = d2 - d1;
    cout << "Nhap lai suat hang nam : ";cin>>ls1nam;
    cout << "Nhap so tien gui : " ;cin>>tienGui;
    double laiDon = (soNgay * ls1nam * tienGui)/(365*100);
    cout << "Lai suat nhan duoc : " << laiDon << endl;
    cout << "Tong tien nhan duoc (bao gom lai suat) : " <<tienGui + laiDon << endl;
}
CDate::~CDate()
{
    //dtor
}
