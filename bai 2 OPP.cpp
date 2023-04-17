#include<iostream>
#include<string> 
using namespace std ; 
class SinhVien{
    private:
    string id ; 
    string name ; 
    int age ; 
    float diem ; 
    public:
    SinhVien() {} 
    void nhap() {
        cout<<"Moi nhap thong tin: "<< endl ; 
        cout<<"Moi nhap ma sinh vien:" << endl; 
        getline(cin,id) ; 
        cout<< "Moi nhap ten:  " << endl; 
        getline(cin,name) ;
        cout<<"Moi nhap tuoi: " << endl ; 
        cin >> age  ;
        cout <<"Moi nhap diem: " << endl ; 
        cin>> diem ; 
    }  
    void xuat() {
        cout <<"---------------------------------------------------\n" ; 
        cout <<"Ma sinh vien\t:\t" << id << endl ; 
        cout <<"Ho va ten\t:\t" << name << endl ; 
        cout<<"Tuoi    \t:\t" << age << endl  ;
        cout<<"diem    \t:\t" << diem << endl; 
    }
} ; 
int main() {
    SinhVien a, b ; 
    a.nhap() ;
    cin.ignore() ;
    b.nhap() ;
    a.xuat() ;
    b.xuat() ;
}
