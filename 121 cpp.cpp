#include<iostream>
#include<cmath> 
using namespace std ;
double round(double x , int n) ;
double round(double x , int n) 
{
   double result ;
   double scale = pow(10 , n) ;
   x *= scale ;
   if ( x>= 0)
   {
   	result = floor(x+0.5)/scale ;
	 
   } else 
   {
   	result = - floor(-x + 0.5) / scale ;
   }
   return result ;
   
}
int main()
{
	double a, y ;
	int m ;
	cout << "Input a = " ;
	cin >> a ;
	cout << "Round to m = " ;
	cin >> m ;
	y = round(a, m );
	cout << " Ket qua la " << y << endl;
	return 1 ;
	//tran viet thang da o day
}
