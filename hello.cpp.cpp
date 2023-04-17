//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	long long a, b, gt1 = 1, gt2 = 1, ucln;
//	scanf("%lld %lld",&a,&b);
//	if (a == 0 || b == 0) {
//		printf("1");
//	} else {
//		for (int i = 1 ; i <= a ; i++) {
//			gt1 *= i ; }
//		for (int j = 1 ; j <= b ; j ++){
//			gt2 *= j ;
//		}
//		long long c ;
//		fmin(gt1, gt2) ; 
//		c = fmax(gt1, gt2) ;
//	
//		for (int i = 1 ; i<=fmin(gt1, gt2); i++ ) {
//			if  ( c % i  == 0) {
//				ucln = i ; 
//			}
//		}
//			printf("%lld", ucln) ;
//	}
//}
#include <iostream>
#include <cmath>
using namespace std;
void nhap(int &n){
	cout << "nhap n" <<" ";
	cin >> n;
}
int snt(int&n){
nhap(n) ;
int prime;
if (n<0) n=-n;
int sqrtn=sqrt(n);
if(n<=1) prime=0;
else {
for(int i=2;i<=sqrtn;i++){
	if (n%i==0){
	return 0;}
} }
return 1;
}
int main(){
	int n;
	int prime = snt(n);
	cout << n <<" "; 
	if (prime==0)cout<<"khong phai so nguyen to";
	else cout << "day la so nguyen to";

}
