#include<iostream>
#include<bits/stdc++.h> 
using namespace std ; 
class color {
    protected :
   string name , id ; 
   public:
   color() {
    name = id = " " ; 
   }  
   color(string name , string id) {
    this->name = name ; 
    this->id = id ; 
   } 
   ~color() {
    name = id = " " ; 
   } 
  friend istream& operator >> (istream&, color &) ; 
  friend ostream& operator << (ostream& ,color ) ; 
  void getTenMau() ; 
} ; 
// xay dung cac phuong thuc nap chong 
istream& operator >> (istream&in, color &a) {
    cout<<"ma mau: " ; 
    in>>a.id; 
    cin.ignore() ; 
    cout<<"ten mau: " ; 
    getline(cin,a.name) ; 
    return in ; 
} 
ostream& operator << (ostream&out , color a) {
       out <<"ma mau: " << a.id <<endl;  
       out<<"ten mau: " << a.name << endl ; 
       return out ; 
} 
void color::getTenMau() {
    cout<<"ten mau: " << name << endl ; 
} 
class Point{
    protected:
    int x ,y ;
    public:
    friend istream& operator >> (istream&, Point &) ; 
    friend ostream& operator << (ostream& ,Point ) ; 
    Point() {
        x=y=0; 
    }  
    Point(int x,int y) {
        this->x = x ; 
        this-> y =y ; 
    } 
    void cheochinh() ; 
} ; 
//xay dung cac phuong thuc lop Point  
istream& operator >> (istream&in, Point &a) {
    cout<<"x= " ; 
    in>>a.x;  
    cout<<"y= " ; 
    in >> a.y ;  
    return in ; 
}  
ostream& operator << (ostream&out , Point a) {
       out <<"x= " << a.x << endl;   
       out<<"y= "  << a.y << endl ; 
       return out ; 
}  
void Point::cheochinh() {
    if(x==y) cout<< "cheo chinh\n " ;  
    else cout << "cheo phu \n" ; 
}
class Pixel : public color , public Point  {
       public:
       Pixel() {
         x = y = 0 ; 
         id = name = " " ;  
       } 
       Pixel(string name, string id , int x, int y ) {
        color(name,id) ;  
        Point(x,y) ; 
       } 
       ~Pixel() {
        x=y=0 ; 
        name = id = " " ; 
       } 
      friend istream& operator >> (istream&,Pixel&) ; 
      friend ostream& operator <<(ostream& , Pixel) ; 
    bool check() ; 
}; 
istream& operator >> (istream& in,Pixel& a) {
    cout<<"ma mau: " ; 
    in>>a.id; 
    cin.ignore() ; 
    cout<<"ten mau: " ; 
    getline(cin,a.name) ; 
    cout<<"x= " ; 
    in>>a.x;  
    cout<<"y= " ; 
    in >> a.y ;  
    return in ; 
} 
ostream& operator <<(ostream&out , Pixel a) {
      out <<"ma mau: " << a.id <<endl;  
       out<<"ten mau: " << a.name << endl ; 
       out <<"x= " << a.x << endl;   
       out<<"y= "  << a.y << endl ; 
} 
bool Pixel::check() {
    if(x==y&&id=="#0000FF") 
    return true ;
    else return false ; 
} 
int main() {
    int n ; 
    cin >> n ;
    cin.ignore() ; 
    Pixel * arr ; 
    arr = new Pixel [n] ; 
    for(int i=0;i<n;i++) {
        cin >> arr[i] ; 
    }
    for(int i=0;i<n;i++) {
        if(arr[i].check()) 
        cout<<arr[i] ; 
    }
    delete [] arr ; 
    return 1;
}
