#include <bits/stdc++.h>
#include "SoPhuc.h"
using namespace std;

int main()
{
    SoPhuc z1(5), z2;
    cout << "z1 = " << z1;
    cout << "Nhap so phuc z2" << endl;
    cin >> z2;
    cout << "z1 = " << z1 << "z2 = " << z2;
    SoPhuc z3 = z1+z2;
    cout << "z1+z2 = " << z3;
    z3 = z1-z2;
    cout << "z1-z2 = " << z3;
    z3 = z1*z2;
    cout << "z1*z2 = " << z3;
    z3 = z1/z2;
    cout << "z1/z2 = " << z3;
    if (z1==z2) cout << "z1 va z2 bang nhau " << endl;
    else cout << "z1 va z2 khong bang nhau " << endl;
    return 0;
}
/*Mẫu Input và Output
z1 = 5+0i
Nhap so phuc z2
Nhap phan thuc : 7
Nhap phan ao : 8
z1 = 5+0i
z2 = 7+8i
z1+z2 = 12+8i
z1-z2 = -2-8i
z1*z2 = 35+40i
z1/z2 = 0.309735-0.353982i
z1 va z2 khong bang nhau
*/
