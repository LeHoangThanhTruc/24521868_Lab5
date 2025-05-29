#include "CVector.h"
#include <bits/stdc++.h>
using namespace std;
CVector::CVector()
{
    //ctor
}
CVector::CVector(vector<double> vT){
    this->vT = vT;
}
istream& operator>>(istream& is, CVector& u){
    int n;
    cout << "Nhap vao so chieu cua vector : "; cin >> n;
    u.vT.resize(n);
    for(int i = 0;i < n; i++){
        is>>u.vT[i];
    }
    return is;
}
 ostream& operator<<(ostream& os, CVector u){
    for(size_t i = 0; i < u.vT.size(); i++){
        os << u.vT[i] << " ";
    }
    return os;
}
//Độ dài của vector
double CVector::DoDai(){
    double length = 0;
    for(size_t i = 0; i < vT.size(); i++){
        length += pow(vT[i],2);
    }
    return sqrt(length);
}
//Cộng hai vector
CVector CVector::operator+(const CVector& u){
    vector<double> kq(this->vT.size(),0.0);
    double tong = 0;
    for(size_t i = 0; i < this->vT.size(); i++){
        tong = this->vT[i] + u.vT[i];
        kq[i] = tong;
    }
    return CVector(kq);
}
//Trừ hai vector
CVector CVector::operator-(const CVector& u){
    vector<double> kq(this->vT.size(),0.0);
    double hieu = 0;
    for(size_t i = 0; i < this->vT.size(); i++){
        hieu = this->vT[i] - u.vT[i];
        kq[i] = hieu;
    }
    return CVector(kq);
}
// Tích vô hướng
double CVector::operator*(const CVector& u){
    double tichVH = 0;
    for(size_t i = 0; i < this->vT.size(); i++){
        tichVH += (this->vT[i]*u.vT[i]);
    }
    return tichVH;
}
//Nhân vector với một số thực
CVector CVector::operator*(double d){
    vector<double> kq(this->vT.size(),0.0);
    double tich = 0;
    for(size_t i = 0; i < this->vT.size(); i++){
        tich = this->vT[i] * d;
        kq[i] = tich;
    }
    return CVector(kq);
}
bool CVector::operator==(CVector& u){
    for(size_t i = 0; i < this->vT.size(); i++){
        if (this->vT[i] != u.vT[i]) return false;
    }
    return true;
}
bool CVector::operator>(CVector& u){
    return this->DoDai() > u.DoDai();
}
bool CVector::operator<(CVector& u){
    return this->DoDai() < u.DoDai();
}
CVector::~CVector()
{
    //dtor
}
