#ifndef CVECTOR_H
#define CVECTOR_H
#include <bits/stdc++.h>
using namespace std;

class CVector
{
private:
    vector<double> vT;
public:
    CVector();
    CVector(vector<double> vT);
    friend istream& operator>>(istream& is, CVector& u);
    friend ostream& operator<<(ostream& os, CVector u);
    double DoDai();
    CVector operator+(const CVector& u);
    CVector operator-(const CVector& u);
    double operator*(const CVector& u);
    CVector operator*(double d);
    bool operator==(CVector& u);
    bool operator>(CVector& u);
    bool operator<(CVector& u);
    virtual ~CVector();
};

#endif // CVECTOR_H
