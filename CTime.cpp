#include "CTime.h"
#include <bits/stdc++.h>
using namespace std;
CTime::CTime(int gio, int phut, int giay):gio(gio),phut(phut),giay(giay){}
istream& operator>>(istream& is, CTime& u){
    cout << "Nhap gio : "; is >> u.gio;
    cout << "Nhap phut : "; is >> u.phut;
    cout << "Nhap giay : "; is >> u.giay;
    return is;
}
ostream& operator<<(ostream& os, CTime u){
    os << setw(2) << setfill('0') << u.gio << ":" <<setw(2) << setfill('0') << u.phut << ":" << setw(2) << setfill('0') << u.giay <<endl;
    return os;
}
//setw(2) đặt độ rộng tối thiểu là 2 ký tự
//setfill('0'): nếu không lấp đầy độ độ rộng thì thêm số 0 vào phía bên trái
CTime CTime::operator+(int s){
    // Nếu dùng CTime kq thay vì CTime kq = *this sẽ sai vì CTime kq sẽ tạo ra một đối tượng mới hoàn toàn
    //có giá trị mặc định (00:00:00), không chứa thông tin của đối tượng gốc.
    CTime kq = *this; //Tạo bản sao có chứa thông tin đối tượng gốc
    kq.giay += s;
    if(kq.giay >= 60){
        kq.phut += kq.giay/60;
        kq.giay = kq.giay%60;
    }
    if(kq.phut >= 60){
        kq.gio += kq.phut/60;
        kq.phut = kq.phut%60;
    }
    if(kq.gio >= 24){
        kq.gio = kq.gio%24;
    }
    return kq;
}
CTime CTime::operator-(int s){
    CTime kq = *this;
    int total = gio*3600 + phut*60 + giay - s;
    if(total < 0) total += 24*3600;
    kq.gio = (total/3600)%24;
    kq.phut = (total%3600)/60;
    kq.giay = total%60;
    return kq;
}
//Cú pháp tiền tố ++t
CTime& CTime::operator++(){
    *this = *this + 1;
    return *this;
}
CTime& CTime::operator--(){
    *this = *this - 1;
    return *this;
}
//Cú pháp hậu tố t++
/* CTime CTime::operator++(int){
    CTime temp = *this;
    *this = *this + 1;
    return temp;
}
CTime CTime::operator++(int){
    CTime temp = *this;
    *this = *this - 1;
    return temp;
} */
//Hậu tố phải nhận một tham số giả int để phân biệt với tiền tố.
//Vì hậu tố thực hiện hành động sau khi trả về giá trị cũ nên phải lưu lại temp = *this.

CTime::~CTime()
{
    //dtor
}
