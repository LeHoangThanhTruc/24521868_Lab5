#include <bits/stdc++.h>
#include "CMatrix.h"
using namespace std;

int main()
{
    CMatrix m1, m2;
    cout << "Nhap ma tran thu 1 (m1)" << endl;
    m1.Nhap();
    cout << "Nhap ma tran thu 2 (m2)" << endl;
    m2.Nhap();
    cout << "Ma tran thu 1 : " << endl;
    m1.Xuat();
    cout << endl;
    cout << "Ma tran thu 2 : "<<endl;
    m2.Xuat();
    cout << endl;
    //Truy cập phần tử đọc
    cout << "Doc phan tu o vi tri hang 2 cot 3 cua m1: ";
    cout << m1.docGiaTri(2,3);
    cout << endl;
    //Thay đổi phần tử của ma trận
    cout << "Thay doi phan tu o hang 1 cot 2 thanh 100 cua m2: " << endl;
    m2.GanGiaTri(1,2,100);
    m2.Xuat();
    cout << endl;
    cout << "Dung nap chong toan tu ()" << endl; //Toán tử () có thể vừa đọc vừa gán mà không cần chia ra 2 hàm
    cout << "Thay doi phan tu o hang 1 cot 2 thanh 5.5 cua m1: ";
    m1(1, 2) = 5.5;  //Truy cap phan tu doc bang operator ()
    m1.Xuat();
    cout << "In ra gia tri o hang 3 cot 3 cua m1 : " << m1(3, 3) << endl;  //Truy cap phan tu ghi bang operator ()
    //Nhân hai ma trận
    cout << "Nhan hai ma tran :";
    CMatrix m3 = m1*m2;
    cout << "m1*m2 = " << endl;
    m3.Xuat();
    //Nhan ma trận với một vector
    cout << "Nhan ma tran voi mot vector :" << endl;
    vector<double> v(m1.getSoCot());
    for(int i = 0; i < v.size();i++){
        cin >> v[i];
    }
    vector<double> result = m1*v;
    cout << "m1 * v = ";
    for(int i = 0; i < result.size(); i++){
        cout<<result[i]<< " ";
    }
    cout << endl;
    //Cộng 2 ma trận
    cout << "m1 + m2 = " << endl;
    m3 = m1 + m2;
    m3.Xuat();
    cout << endl;
    //Trừ 2 ma trận
    cout << "m1 - m2 = " << endl;
    m3 = m1 - m2;
    m3.Xuat();
    cout << endl;
    //Nhân một số với ma trận
    double k;
    cout << "Nhan mot so voi ma tran, nhap he so k tu do : "; cin >> k;
    m3 = m1*k;
    cout << "m1 * k = " << endl;
    m3.Xuat();
    return 0;
}
