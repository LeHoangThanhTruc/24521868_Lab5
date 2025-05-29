#include "CTime.h"
#include <bits/stdc++.h>
using namespace std;

int main()
{
    CTime t1;
    cin >> t1;
    cout << "Thoi gian t1 da nhap : ";
    cout << t1;
    //Dùng tiền tố ++t : tăng thêm 1 giây và không tăng thêm giá trị cũ trước khi tăng
    //Dùng tiến tố ++t phù hợp cho ứng dụng đồng hồ (vì ta không cần giữ lại giá trị thời điểm trước đó)
    //Dùng hậu tố t++ khi cần giữ lại giá trị cũ trước khi tăng, rồi dùng giá trị đó CTime t2 = t1++;
    //Cú pháp tiền tố đơn giản hơn hậu tố
    ++t1;
    cout << "Thoi gian t1 sau khi tang 1 giay : " << t1;
    --t1;
    cout << "Thoi gian t1 sau khi giam 1 giay : " << t1;
    CTime t2 = t1 + 8;
    cout << "Thoi gian t1 sau khi tang 8 giay : " << t2;
    t2 = t1 - 8;
    cout << "Thoi gian t1 sau khi giam 8 giay : " << t2;
    return 0;
}
/* Mẫu Input và output
Nhap gio : 0
Nhap phut : 0
Nhap giay : 0
Thoi gian t1 da nhap : 00:00:00
Thoi gian t1 sau khi tang 1 giay : 00:00:01
Thoi gian t1 sau khi giam 1 giay : 00:00:00
Thoi gian t1 sau khi tang 8 giay : 00:00:08
Thoi gian t1 sau khi giam 8 giay : 23:59:52
*/
