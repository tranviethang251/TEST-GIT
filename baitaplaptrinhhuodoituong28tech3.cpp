#include<iostream>
#include<bits/stdc++.h> 
#include<string>
using namespace std;
class sinhvien{
	private:
		string ten , lop , ma , email ; 
	public: 
	  friend istream& operator >> (istream& , sinhvien&) ; 
	  friend ostream& operator <<(ostream& ,sinhvien) ; 
	  string getlop() {
	  	return this->lop ; 
	  }  
}; 
ostream& operator << (ostream & out , sinhvien a) {
	out << a.ma <<setw(10)<<a.ten << setw(10) << a.lop <<setw(10) << a.email << endl;  
    return out ; 
} 
istream& operator >> (istream& in , sinhvien &a) {
	in>> a.ma ; 
	cin.ignore() ;
    getline(cin,a.ten) ; 
    in >> a.lop >> a.email ; 
    return in ; 
} 
int main(){
      int n ; 
      cin >> n ;
      sinhvien a[n] ; 
      for(int i=0;i<n;i++) {
      	cin >> a[i] ; 
	  } 
	  int q ; 
	  cin >> q ; 
	  while(q--) {
	  	string s ; 
	  	cin >> s ; 
	  	cout<<"Danh sach sinh vien nien khoa: " << s << endl ; 
	  	s = s[2] + s[3] ; 
		for(int i=0 ;i<n;i++) {
			string tmp = a[i].getlop() ; 
			tmp = tmp[0] + tmp [1] ;
			if(tmp==s) {
				cout<<a[i] ; 
			}
		}
	  }
 return 0;
}

