
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s ; 
    getline(cin,s) ;
	// dung ham stringsream  
    stringstream ss(s) ;
    string word ;
	int cnt ;  
    while (ss>>word) {
       cnt ++ ; 
	} 
	cout<< cnt << endl ; 
return 0;
}

