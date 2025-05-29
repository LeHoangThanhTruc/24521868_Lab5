#include "PhanSo.h"
#include <bits/stdc++.h>
using namespace std;
int main()
{
    PhanSo p1(5), p2;
    cout << "p1 = " << p1;
    cout << "Nhap phan so p2 " << endl;
    cin >> p2;
    cout << "p2 = " << p2;
    PhanSo p3 = p1 + p2;
    cout << "p1 + p2 = " << p3;
    p3 = p1 - p2;
    cout << "p1 - p2 = " << p3;
    p3 = p1 * p2;
    cout << "p1 * p2 = " << p3;
    p3 = p1 / p2;
    cout << "p1 / p2 = " << p3;
    if (p1 == p2) cout << "p1 bang p2 "<<endl;
    else if (p1 > p2) cout<< "p1 lon hon p2"<<endl;
    else cout<< "p1 be hon p2"<<endl;
    return 0;
}
/*Mẫu input và ouput
p1 = 5/1
Nhap phan so p2
Nhap tu so : 2.5
Nhap mau so : 3.15
p2 = 2.5/3.15
p1 + p2 = 18.25/3.15
p1 - p2 = 13.25/3.15
p1 * p2 = 12.5/3.15
p1 / p2 = 15.75/2.5
p1 lon hon p2
*/
