#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class sinhvien {
     private:
     	string lop , hoten , ma , email ; 
    public:
    	 sinhvien() {
    	 	lop = " " ; 
    	 	hoten = " " ; 
    	 	ma = " " ; 
    	 	email = " " ; 
		 } 
		friend ostream & operator << (ostream&, sinhvien) ;
		friend istream& operator >>(istream& , sinhvien&) ;   
		string getlop () {
			return this->lop ; 
		}
}; 
ostream&operator << (ostream& out, sinhvien a) {
	out << a.ma<<setw(10)<<" "<< a.hoten <<setw(10)<< " " << a.lop<<setw(10)<<" " <<a.email<< endl; 
	return out  ; 
} 
istream&operator >> (istream& in , sinhvien &a) {
	in >> a.ma ; 
	cin.ignore() ; 
	getline(cin,a.hoten) ;  
	in >> a.lop >> a.email ; 
	return in ; 
} 
#define a() a;
bool cmp (sinhvien a, sinhvien b) {
	return a.getlop() < b.getlop() ;
} 
int main(){
  int n ; 
  cin >> n ;
  sinhvien a[n] ; 
  for(int i=0;i<n;i++) {
  	cin >> a[i] ;  
  } 
  string tmp ;
  cin >> tmp ; 
  cout<<"Danh sach sinh vien lop: " << tmp << endl; 
  for(int i=0;i<n;i++) {
	  if(tmp==a[i].getlop()) {
		  cout<<a[i] ; 
	  }
  }
return 0;
}

