#include <bits/stdc++.h>
#include "DaThuc.h"
using namespace std;

int main()
{
    DaThuc a, b;
    cout << "Nhap da thuc a " << endl;
    a.Nhap();
    cout << "Nhap da thuc b " << endl;
    b.Nhap();
    cout << "Da thuc a = ";
    a.Xuat();
    cout << endl;
    cout << "Da thuc b = ";
    b.Xuat();
    cout << endl;
    double num;
    cout << "Tinh gia tri da thuc a khi x = "; cin>>num;
    double a1 = a.ThaySo(num);
    cout << "x = " << num << " => a = " << a1 << endl;
    cout << "Tinh gia tri da thuc b khi x = "; cin>>num;
    double b1 = b.ThaySo(num);
    cout << "x = " << num << " => b = " << b1 << endl;
    DaThuc kq = a.Tong(b);
    cout << "a + b = " ;
    kq.Xuat();
    cout << endl;
    kq = a - b;
    cout << "a - b = ";
    kq.Xuat();
    cout << endl;
    kq = a*b;
    cout << "a * b = ";
    kq.Xuat();
    cout << endl;
    kq = a/b;
    cout << "a / b = ";
    kq.Xuat();
    cout << endl;
    kq = a%b;
    cout << "a % b = ";
    kq.Xuat();
    cout << endl;
    if(a==b) cout << "a = b" << endl;
    else if(a>b) cout << "a > b" << endl;
    else cout << "a < b" << endl;
    return 0;
}
/*Mẫu Input và output
Nhap da thuc a
Nhap bac da thuc : 4
Nhap 5 he so theo thu tu tu bac thap den bac cao :
He so bac 0 : 5
He so bac 1 : -3
He so bac 2 : -4
He so bac 3 : 4
He so bac 4 : 1
Nhap da thuc b
Nhap bac da thuc : 2
Nhap 3 he so theo thu tu tu bac thap den bac cao :
He so bac 0 : 2
He so bac 1 : 4
He so bac 2 : 6
Da thuc a = x^4+4x^3-4x^2-3x+5
Da thuc b = 6x^2+4x+2
Tinh gia tri da thuc a khi x = 4
x = 4 => a = 441
Tinh gia tri da thuc b khi x = -2
x = -2 => b = 18
a + b = x^4+4x^3+2x^2+x+7
a - b = x^4+4x^3-10x^2-7x+3
a * b = 8.33232e-310x^7+6x^6+28x^5-6x^4-26x^3+10x^2+14x+10
a / b = 0.166667x^2+0.555556x-1.09259
a % b = 0.259259x+7.18519
a > b
*/
