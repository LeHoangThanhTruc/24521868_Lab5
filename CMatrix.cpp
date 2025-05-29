#include "CMatrix.h"
#include <bits/stdc++.h>
using namespace std;
CMatrix::CMatrix(int m, int n,vector<vector<double>> data):m(m),n(n){
}
void CMatrix::Nhap(){
    cout << "Nhap so hang : "; cin >> n;
    cout << "Nhap so cot : "; cin >> m;
    data.resize(n,vector<double>(m,0));//Khởi tạo toàn 0
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
        cin >> data[i][j];
       }
    }
}
void CMatrix::Xuat(){
    for(int i = 0; i < n; i++){
       for(int j = 0; j < m; j++){
        cout << data[i][j] << " ";
       }
       cout << endl;
    }
}
int CMatrix::getSoHang()const{
    return n;
}
int CMatrix::getSoCot()const{
    return m;
}
//Hàm truy cập phần tử : 2 loại : truy cập đọc và truy cập ghi
//Truy cập đọc (getter)
double CMatrix::docGiaTri(int i, int j)const{
    i = i -1;
    j = j -1;
    if (i>=0 && i<n && j>=0 && j<m){
        return data[i][j];
    }
    else cout << "Chi so vuot ngoai kich thuoc ma tran" << endl;
}
//Truy cập ghi (setter)
double CMatrix::GanGiaTri(int i, int j, double value){
    i = i -1;
    j = j -1;
    if (i>=0 && i<n && j>=0 && j<m){
        data[i][j]=value;
    }
    else cout << "Chi so vuot ngoai kich thuoc ma tran" << endl;
}
////Nạp chồng toán tử () để dùng như A(i,j) có thể vừa truy cập đọc vừa truy cập ghi:
double& CMatrix::operator()(int i, int j){
    i = i -1;
    j = j -1;
    if (i>=0 && i<n && j>=0 && j<m){
        return data[i][j];
    }
    else cout << "Chi so vuot ngoai kich thuoc ma tran" << endl;
}
//Lý thuyết nhân 2 ma trận: Ma trận A: kích thước n * m, Ma trận B: kích thước m * p
//Số cột của A phải bằng số hàng của B. Ma trận C = A × B sẽ có kích thước n × p
//C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + ... + A[i][m-1]*B[m-1][j]
CMatrix CMatrix::operator*(CMatrix other){
    if(m != other.n){
        cout << "So cot cua A phai bang so hang cua B " << endl;
    }
    else{
        CMatrix kq(n,other.m);
        kq.data.resize(n, vector<double>(other.m, 0.0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < other.m; j++){
                for(int k = 0; k < m; k++){
                    kq.data[i][j] += data[i][k]*other.data[k][j];
                }
            }
        }
        return kq;
    }
}
//Lý thuyết nhân ma trận với vector : Ma trận A: kích thước n * m, Vector v: kích thước m
//Số cột của ma trận phải bằng số phần tử của vector . Vector kết quả có kích thước n
//result[i] = A[i][0]*v[0] + A[i][1]*v[1] + ... + A[i][m-1]*v[m-1]
vector<double> CMatrix::operator*(vector<double> v){
    if(m != v.size()){
        cout << "So co cua ma tran phai bang so phan tu cua vector " << endl;
    }
    else{
        vector<double> kq(n, 0);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                kq[i] += data[i][j]*v[j];
            }
        }
        return kq;
    }
}
//Cộng hai ma trận: Hai ma trận phải cùng kích thước (số hàng và cột giống nhau)
//C[i][j] = A[i][j] + B[i][j]
CMatrix CMatrix::operator+(CMatrix other){
    if(n!=other.n || m != other.m){
        cout << "Hai ma tran phai co cung kich thuoc " << endl;
    }
    else{
        CMatrix kq(n, m);
        kq.data.resize(n,vector<double>(m, 0.0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                kq.data[i][j] = data[i][j] + other.data[i][j];
            }
        }
        return kq;
    }
}
//Trừ 2 ma trận có cách làm như cộng 2 ma trận
CMatrix CMatrix::operator-(CMatrix other){
    if(n!=other.n || m != other.m){
        cout << "Hai ma tran phai co cung kich thuoc " << endl;
    }
    else{
        CMatrix kq(n, m);
        kq.data.resize(n,vector<double>(m, 0.0));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                kq.data[i][j] = data[i][j] - other.data[i][j];
            }
        }
        return kq;
    }
}
//Nhân một số với ma trận: C[i][j] = k × A[i][j]
CMatrix CMatrix::operator*(double d){
    CMatrix kq(n, m);
    kq.data.resize(n,vector<double>(m, 0.0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            kq.data[i][j] = data[i][j]*d;
        }
    }
    return kq;
}
//nạp chồng toán tử * từ bên trái để viết k * A thay vì chỉ A * k
CMatrix operator*(double d,CMatrix A){
    return A * d; // gọi lại toán tử đã viết
}
CMatrix::~CMatrix()
{
    //dtor
}
