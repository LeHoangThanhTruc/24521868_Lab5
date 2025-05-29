/* Đề bài
Định nghĩa lớp CDate biểu diễn khái niệm ngày, tháng, năm với các phép toán +, -
(cộng, trừ thêm một số ngày), ++, -- (thêm bớt một ngày), - (khoảng cách giữa hai
CDate tính bằng ngày). Phép toán <<, >> để xuất, nhập dữ liệu loại CDate. Áp dụng
lớp CDate để giải bài toán tính lãi suất tiền gởi ngân hàng.
*/
#include "CDate.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    CDate ngay;
    cout << "Nhap ngay thang nam dinh dang dd/mm/yyyy : ";
    cin >> ngay;
    cout << "Ngay da nhap : ";
    cout << ngay <<endl;
    cout << "Tang len 1 ngay : ";
    ++ngay;
    cout << ngay << endl;
    cout << "Thoi gian sau khi tang 5 ngay : " ;
    CDate ngay1 = ngay +5;
    cout << ngay1 << endl;
    cout << "Thoi gian sau khi giam 35 ngay : " ;
    ngay1 = ngay - 35;
    cout << ngay1 << endl;
    cout << "Giam di 1 ngay : ";
    --ngay1;
    cout << ngay1 << endl;
    long long ngay2 = ngay1 - ngay;
    cout << "Khoang cach giua " << ngay1 << " va " << ngay << " la " << ngay2 << " ngay " <<endl;
    ngay.LaiSuat();
    return 0;
}
/*Mẫu Input và Output
Nhap ngay thang nam dinh dang dd/mm/yyyy : 28/12/2024
Ngay da nhap : 28/12/2024
Tang len 1 ngay : 29/12/2024
Thoi gian sau khi tang 5 ngay : 3/1/2025
Thoi gian sau khi giam 35 ngay : 24/11/2024
Giam di 1 ngay : 23/11/2024
Khoang cach giua 23/11/2024 va 29/12/2024 la 36 ngay
Nhap ngay gui tien : 28/2/2025
Nhap ngay rut tien : 28/2/2026
Nhap lai suat hang nam : 3.5
Nhap so tien gui : 1000000
Lai suat nhan duoc : 35000
Tong tien nhan duoc (bao gom lai suat) : 1.035e+06
*/
