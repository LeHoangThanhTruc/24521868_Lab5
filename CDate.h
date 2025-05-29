#ifndef CDATE_H
#define CDATE_H
#include <bits/stdc++.h>
using namespace std;

class CDate
{
private:
    string date;
    vector<long long> ds;
public:
    CDate(string date = "");
    friend istream& operator>>(istream& is, CDate& u);
    friend ostream& operator<<(ostream& os, CDate u);
    void Tach(string& date);
    bool LaNamNhuan(long long nam);
    long long SoNgayTrongThang(long long thang, long long nam);
    CDate operator+(long long num);
    CDate operator-(long long num);
    CDate operator++();
    CDate operator--();
    long long SoNgayTuNam1();
    long long operator-(CDate& other);
    //Áp dụng lớp CDate để tính lãi suất tiền gửi ngân hàng
    void LaiSuat();
    virtual ~CDate();
};

#endif // CDATE_H
