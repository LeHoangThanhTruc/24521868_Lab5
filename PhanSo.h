#ifndef PHANSO_H
#define PHANSO_H
#include <bits/stdc++.h>
using namespace std;

class PhanSo
{
private:
    double a, b;
public:
    PhanSo(double a = 0, double b = 1);
    friend istream& operator>>(istream& is, PhanSo& u);
    friend ostream& operator<<(ostream& os, PhanSo u);
    PhanSo operator+(PhanSo u);
    PhanSo operator-(PhanSo u);
    PhanSo operator*(PhanSo u);
    PhanSo operator/(PhanSo u);
    bool operator==(PhanSo u);
    bool operator>(PhanSo u);
    bool operator<(PhanSo u);
    virtual ~PhanSo();
};

#endif // PHANSO_H
