#include "DaThuc.h"
#include <bits/stdc++.h>
using namespace std;
DaThuc::DaThuc(int bac):bac(bac){
    hs = vector<double>(bac+1,0);
}
void DaThuc::Nhap(){
    cout << "Nhap bac da thuc : "; cin>>bac;
    hs.resize(bac+1);
    cout << "Nhap " << bac+1 << " he so theo thu tu tu bac thap den bac cao : " << endl;
    for(int i = 0; i <= bac; i++){
        cout << "He so bac " << i <<" : ";
        cin >> hs[i];
    }
}
void DaThuc::Xuat(){
    bool first = true;
    for(int i = bac; i>=0; i--){
        if(hs[i]==0) continue;
        if( !first && hs[i]>0) cout << "+";
         if(i==0){
             cout << hs[i];
         }
         else if(i==1){
            if(hs[i]==1)cout << "x";
            else if(hs[i]==-1) cout <<"-x";
            else cout << hs[i] << "x";
         }
         else{
            if(hs[i]==1)cout << "x^" << i;
            else if(hs[i]==-1) cout <<"-x^" << i;
            else cout << hs[i] << "x^" << i;
         }
         first = false;
    }
    if(first) cout << "0";
}
double DaThuc::ThaySo(double num){
    double kq = 0;
    for(int i = 0; i <= bac; i++){
        kq += hs[i]*pow(num,i);
    }
    return kq;
}
DaThuc DaThuc::operator-(DaThuc& other){
    int maxBac=max(bac, other.bac);
    vector<double> Hieu(maxBac+1,0);
    for(int i = 0; i<=maxBac;i++){
        double a = (i <= bac)? hs[i] : 0;
        double b = (i <= other.bac) ? other.hs[i] : 0;
        Hieu[i] = a - b;
    }
    while(maxBac>0 && Hieu[maxBac]==0){
        maxBac--;
    }
    DaThuc kq(maxBac +1);
    kq.hs = Hieu;
    return kq;
}
DaThuc DaThuc::Tong(DaThuc& b){
    int maxBac = max(bac,b.bac);
    vector<double> Tong(maxBac+1, 0);
    for(int i = 0; i <= maxBac; i++){
        double c = (i<=bac)? hs[i] : 0;
        double d = (i<=b.bac)? b.hs[i] : 0;
        Tong[i] = c + d;
    }
    //Cắt bớt nếu hệ số cao nhất bằng 0;
    while(maxBac>0 && Tong[maxBac]==0){
        --maxBac;
    }
     DaThuc kq(maxBac+1);
     kq.hs=Tong;
     return kq;
}
DaThuc DaThuc::operator*(DaThuc& other){
    int maxBac = hs.size()+other.hs.size()-2;
    vector<double> Tich(maxBac+1,0);
    for(int i = 0; i < hs.size(); i++){
        for(int j = 0; j < other.hs.size();j++){
            Tich[i+j] += hs[i]*other.hs[j];
        }
    }
    while(maxBac>0 && Tich[maxBac]==0){
        --maxBac;
    }
    DaThuc kq(maxBac+1);
    kq.hs = Tich;
    return kq;
}
DaThuc DaThuc::operator/(DaThuc& b) {
    while(true){
        if (b.bac < 0 || (b.bac == 0 && b.hs[0] == 0)) {
            cout << "Khong the chia cho da thuc 0. Moi nhap lai da thuc so chia : " << endl;
            b.Nhap();
            continue;
        }
        break;
    }
    DaThuc a = *this;
    int bacThuong = a.bac - b.bac;
    if (bacThuong < 0) return DaThuc(0);
    vector<double> thuong(bacThuong + 1, 0);
    while (a.bac >= b.bac) {
        int bacHieu = a.bac - b.bac;
        double heSoHieu = a.hs[a.bac] / b.hs[b.bac];
        thuong[bacHieu] = heSoHieu;
        vector<double> giam(bacHieu + b.bac + 1, 0);
        for (int i = 0; i <= b.bac; i++) {
            giam[i + bacHieu] = b.hs[i] * heSoHieu;
        }
        for (int i = 0; i < giam.size(); i++) {
            if (i < a.hs.size()) a.hs[i] -= giam[i];
            else a.hs.push_back(-giam[i]);
        }
        while (a.bac > 0 && a.hs[a.bac] == 0) a.bac--;
    }
    DaThuc kq(bacThuong);
    kq.hs = thuong;
    return kq;
}

DaThuc DaThuc::operator%(DaThuc& b) {
    while(true){
        if (b.bac < 0 || (b.bac == 0 && b.hs[0] == 0)) {
            cout << "Khong the chia cho da thuc 0. Moi nhap lai da thuc so chia : " << endl;
            b.Nhap();
            continue;
        }
        break;
    }
    DaThuc a = *this;
    while (a.bac >= b.bac) {
        int bacHieu = a.bac - b.bac;
        double heSoHieu = a.hs[a.bac] / b.hs[b.bac];
        vector<double> giam(bacHieu + b.bac + 1, 0);
        for (int i = 0; i <= b.bac; i++) {
            giam[i + bacHieu] = b.hs[i] * heSoHieu;
        }
        for (int i = 0; i < giam.size(); i++) {
            if (i < a.hs.size()) a.hs[i] -= giam[i];
            else a.hs.push_back(-giam[i]);
        }
        while (a.bac > 0 && a.hs[a.bac] == 0) a.bac--;
    }
    while (a.bac > 0 && a.hs[a.bac] == 0) a.bac--;
    a.hs.resize(a.bac + 1);
    return a;
}
bool DaThuc::operator==(DaThuc& b){
    return this->ThaySo(10)==b.ThaySo(10);
}
bool DaThuc::operator>(DaThuc& b){
    return this->ThaySo(10)>b.ThaySo(10);
}
bool DaThuc::operator<(DaThuc& b){
    return this->ThaySo(10)<b.ThaySo(10);
}

DaThuc::~DaThuc()
{
    //dtor
}
