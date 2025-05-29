#ifndef CMATRIX_H
#define CMATRIX_H
#include <bits/stdc++.h>
using namespace std;

class CMatrix
{
private:
    //m : số cột, n : số hàng
    int m, n;
    vector<vector<double>> data;
public:
    CMatrix(int m = 0, int n = 0,vector<vector<double>> data={});
    void Nhap();
    void Xuat();
    int getSoHang() const;
    int getSoCot() const;
    //Hàm truy cập phần tử : 2 loại : truy cập đọc và truy cập ghi
    //Truy cập đọc (getter)
    double docGiaTri(int i, int j) const;
    //Truy cập ghi (setter)
    double GanGiaTri(int i, int j, double value);
    //Nạp chồng toán tử () để dùng như A(i,j):
    double& operator()(int i, int j);
    //Nhân hai ma trận
    CMatrix operator*(CMatrix other);
    //Nhân ma trận với vector;
    vector<double> operator*(vector<double> v);
    //Cộng hai ma trận
    CMatrix operator+(CMatrix other);
    CMatrix operator-(CMatrix other);
    CMatrix operator*(double d);
    //nạp chồng toán tử * từ bên trái để viết k * A thay vì chỉ A * k
    friend CMatrix operator*(double d, CMatrix A);
    virtual ~CMatrix();
};

#endif // CMATRIX_H
