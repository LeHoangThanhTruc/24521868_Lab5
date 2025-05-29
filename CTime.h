#ifndef CTIME_H
#define CTIME_H
#include <bits/stdc++.h>
using namespace std;

class CTime
{
private:
    int gio, phut, giay;
public:
    CTime(int gio = 0, int phut = 0, int giay = 0);
    friend istream& operator>>(istream& is, CTime& u);
    friend ostream& operator<<(ostream& os, CTime u);
    CTime operator+(int s);
    CTime operator-(int s);
    CTime& operator++();
    CTime& operator--();
    virtual ~CTime();
};

#endif // CTIME_H
