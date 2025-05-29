#include "CVector.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    CVector v1,v2;
    cout << "Nhap vector thu 1" << endl;
    cin >> v1;
    cout << "Nhap vector thu 2" << endl;
    cin >> v2;
    cout << "Vector thu 1 : ";
    cout << v1;
    cout << endl;
    cout << "Vector thu 2 : ";
    cout << v2;
    cout << endl;
    cout << "Do dai v1 = " << v1.DoDai() << endl;
    cout << "Do dai v2 = " << v2.DoDai() << endl;
    CVector v = v1 + v2;
    cout << "v1 + v2 = " << v << endl;
     v = v1 - v2;
    cout << "v1 - v2 = " << v << endl;
     double t = v1 * v2;
    cout << "Tich vo huong cua hai vector v1 va v2 : " << t << endl;
    double d;
    cout << "Nhap so thuc d : "; cin >> d ;
     v = v1 * d;
    cout << "v1 * " << d << " = " << v << endl;
    if(v1==v2) cout << "v1 = v2" << endl;
    else if(v1>v2) cout << "v1 > v2" << endl;
    else cout << "v1 < v2" << endl;
    return 0;
}
/*Mẫu Input và Output
Nhap vector thu 1
Nhap vao so chieu cua vector : 3
4 5 6
Nhap vector thu 2
Nhap vao so chieu cua vector : 3
7 8 8
Vector thu 1 : 4 5 6
Vector thu 2 : 7 8 8
Do dai v1 = 8.77496
Do dai v2 = 13.3041
v1 + v2 = 11 13 14
v1 - v2 = -3 -3 -2
Tich vo huong cua hai vector v1 va v2 : 116
Nhap so thuc d : 2
v1 * 2 = 8 10 12
v1 < v2
*/
