#ifndef SOPHUC_H
#define SOPHUC_H
#include <bits/stdc++.h>
using namespace std;

class SoPhuc
{
private:
    double a, b;
public:
    SoPhuc(double a = 0, double b = 0);
    friend istream& operator>>(istream& is, SoPhuc& u);
    friend ostream& operator<<(ostream& os, SoPhuc u);
    SoPhuc operator+(SoPhuc u);
    SoPhuc operator-(SoPhuc u);
    SoPhuc operator *(SoPhuc u);
    SoPhuc operator/(SoPhuc u);
    bool operator==(SoPhuc u);
    bool operator!=(SoPhuc u);
    virtual ~SoPhuc();
};

#endif // SOPHUC_H
