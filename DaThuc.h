#ifndef DATHUC_H
#define DATHUC_H
#include <bits/stdc++.h>
using namespace std;

class DaThuc{
private:
    int bac;
    vector<double> hs;
public:
    DaThuc(int bac = 0);
    void Nhap();
    void Xuat();
    double ThaySo(double num);
    DaThuc Tong(DaThuc& b);
    DaThuc operator-(DaThuc& other);
    DaThuc operator*(DaThuc& other);
    DaThuc operator/(DaThuc& b);
    DaThuc operator%(DaThuc& b);
    bool operator==(DaThuc& b);
    bool operator>(DaThuc& b);
    bool operator<(DaThuc& b);
    virtual ~DaThuc();
};
#endif // DATHUC_H
