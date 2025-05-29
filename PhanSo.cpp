#include "PhanSo.h"
#include <bits/stdc++.h>
using namespace std;
PhanSo::PhanSo(double a, double b):a(a),b(b){}
istream& operator>>(istream& is, PhanSo& u){
    cout << "Nhap tu so : "; is >> u.a;
    cout << "Nhap mau so : "; is >> u.b;
    return is;
}
ostream& operator<<(ostream& os, PhanSo u){
    //u.RutGon();
    os << u.a << "/" << u.b << endl;
    return os;
}
/*int PhanSo::UCLN(int a, int b){
    if (b==0) return a;
    return UCLN(b, a%b);
}
void PhanSO::RutGon(){
    int u = UCLN(a,b);
    a /= u;
    b /= u;
}*/
PhanSo PhanSo::operator+(PhanSo u){
    return PhanSo(a*u.b + u.a*b, b*u.b);
}
PhanSo PhanSo::operator-(PhanSo u){
    return PhanSo(a*u.b - u.a*b, b*u.b);
}
PhanSo PhanSo::operator*(PhanSo u){
    return PhanSo(a*u.a, b*u.b);
}
PhanSo PhanSo::operator/(PhanSo u){
    return PhanSo(a*u.b, b*u.a);
}
bool PhanSo::operator==(PhanSo u){
    return a/b == u.a/u.b;
}
bool PhanSo::operator>(PhanSo u){
    return a/b > u.a/u.b;
}
bool PhanSo::operator<(PhanSo u){
    return a/b < u.a/u.b;
}
PhanSo::~PhanSo()
{
    //dtor
}
