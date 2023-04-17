#include<stdio.h>
#include<math.h>
long long uocso(long long n) {
	long long can; 
	if (1ll*pow(2,can)==n) return 1 ;
	else return 0 ; 

}
int main(){
       long long n ;
       scanf("%lld",&n) ;
       if (uocso(n)) printf("YES") ;
       else printf("NO") ;
return 0;
}

