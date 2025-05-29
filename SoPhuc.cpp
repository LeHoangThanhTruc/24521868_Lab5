#include "SoPhuc.h"
#include <bits/stdc++.h>
using namespace std;
SoPhuc::SoPhuc(double a, double b):a(a),b(b){}
istream& operator>>(istream& is, SoPhuc& u){
    cout << "Nhap phan thuc : "; is >> u.a;
    cout << "Nhap phan ao : "; is >> u.b;
    return is;
}
ostream& operator<<(ostream& os, SoPhuc u){
    os << u.a;
    if(u.b>=0) os << "+" << u.b << "i" << endl;
    else os << u.b << "i" << endl;
    return os;
}
SoPhuc SoPhuc::operator+(SoPhuc u){
    return SoPhuc(a+u.a, b+u.b);
}
SoPhuc SoPhuc::operator-(SoPhuc u){
    return SoPhuc(a-u.a, b-u.b);
}
SoPhuc SoPhuc::operator *(SoPhuc u){
    return SoPhuc((a*u.a)-(b*u.b),(a*u.b)+(b*u.a));
}
SoPhuc SoPhuc::operator/(SoPhuc u){
    return SoPhuc(((a*u.a)+(b*u.b))/(pow(u.a,2)+pow(u.b,2)),((b*u.a)-(a*u.b))/(pow(u.a,2)+pow(u.b,2)));
}
bool SoPhuc::operator==(SoPhuc u){
    return a==u.a && b==u.b;
}
bool SoPhuc::operator!=(SoPhuc u){
    return a!=u.a || b!=u.b;
}
SoPhuc::~SoPhuc()
{
    //dtor
}
/*
class SoPhuc{
private:
    double a, b;
public:
    SoPhuc(double a = 0, double b = 0):a(a),b(b){}
    friend istream& operator>>(istream& is, SoPhuc& u){
        cout << "Nhap phan thuc : "; is >> u.a;
        cout << "Nhap phan ao : "; is >> u.b;
        return is;
    }
    friend ostream& operator<<(ostream& os, SoPhuc u){
        os << u.a;
        if(u.b>=0) os << "+" << u.b << "i" << endl;
        else os << u.b << "i" << endl;
        return os;
    }
    SoPhuc operator+(SoPhuc u){
        return SoPhuc(a+u.a, b+u.b);
    }
    SoPhuc operator-(SoPhuc u){
        return SoPhuc(a-u.a, b-u.b);
    }
    SoPhuc operator *(SoPhuc u){
        return SoPhuc((a*u.a)-(b*u.b),(a*u.b)+(b*u.a));
    }
    SoPhuc operator/(SoPhuc u){
        return SoPhuc(((a*u.a)+(b*u.b))/(pow(u.a,2)+pow(u.b,2)),((b*u.a)-(a*u.b))/(pow(u.a,2)+pow(u.b,2)));
    }
    bool operator==(SoPhuc u){
        return a==u.a && b==u.b;
    }
    bool operator!=(SoPhuc u){
        return a!=u.a || b!=u.b;
    }
};
*/
