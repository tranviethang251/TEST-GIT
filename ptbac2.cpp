#include<iostream>
#include<cmath>
using namespace std ; 
class PtBac2{
    private:
    float a, b , c ; 
    public:
    void nhap() ; 
    void xuat() ;
    void giai() ;
} ;
void PtBac2::nhap() {
    cout<<"Moi ban nhap vao so a" << endl; 
    cin>> a ; 
    cout<<"Moi ban nhap vao so b" << endl ; 
    cin>> b ; 
    cout<<"Moi ban nhap vao so c" << endl ;
    cin>> c ; 
} 
void PtBac2::xuat() {
     cout<<a<<"*x^2 + "<<b<<"*x + "<<c<<" = 0"<<endl; 
}
void PtBac2::giai(){
    float denta = b*b - 4*a*c ; 
    if(a==0) cout<<"tham so nhap vao khong thoa man la 1 phuong trinh bac 2 \n" ;
    else {
        if(denta<0) cout<<"phuong trinh vo nghiem \n" ; 
        else {
            if(denta==0) cout<<"X1 = X2 = "<<(-b+sqrt(denta))/(4*a) ;
            else {
                cout<<"X1 = "<<(-b+sqrt(denta))/(2*a) << endl;
                cout<<"X2 = "<<(-b-sqrt(denta))/(2*a) << endl ; 
            }
        }
    }
}
int main() {
    int n ; 
    cout<<"Moi ban nhap vao so phuong trinh bac 2 can giai \n" ; 
    cin>>n ;
    PtBac2 a[n] ;
    for(int i=0;i<n;i++) {
        a[i].nhap() ;
        a[i].xuat() ;
        a[i].giai() ;
    }
    return 0 ;  
}