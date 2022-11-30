// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class complex{
    float real,img;
    public:
      complex(){
          real=0;
          img=0;
          
      }
      complex(float x,float y){
          real=x;
          img=y;
      }
      complex operator+(complex);
       friend istream & operator >>(istream& ,complex&);
     complex operator*(complex);
     friend ostream & operator <<(ostream& ,complex& );
   
    friend istream & operator >>(istream& ,complex&);
    friend ostream & operator <<(ostream& ,complex& );
    
};
complex complex::operator+(complex m){
    complex temp;
    temp.real=real+m.real;
    temp.img=img+m.img;
    return temp;
}
complex complex::operator*(complex m){
    complex num;
    num.real = real *m.real - img  *m.img;
   num.img = img *m.img + real *m.real;
   return num;
}
ostream& operator <<(ostream& out,complex& temp){
    out<<temp.real<<"+"<<temp.img <<"i"<<endl;
    return out;
}
istream& operator >>(istream& in,complex& r){
   
    in>>r.real;
     cout<<"Enter the img  part of  complex number :";
    in>>r.img;
    return in;
}


int main() {
    int s;
   
    while(true){
    complex c1,c2,c3,c4;
    cout<<"Enter for first  complex number"<<endl;
    cout<<"Enter the real part of  complex number :";
    cin>>c1;
    cout<<"Enter for second complex number"<<endl;
    cout<<"Enter the real part of  complex number :";
    cin>>c2;
    cout<<"Press 1:Addition \nPress 2:Multiplication \nEnter your choice :";
    cin>>s;
    if(s==1){
    c3=c1+c2;
    cout<<"The Addition of two complex number is :"<<c3;}
    if(s==2){
    c4=c1*c2;
    cout<<"The Multiplication of two complex number is :"<<c4;}
    if(s>2){
        cout<<"Enter the valid choice"<<endl;
    
    }
} 
    return 0;
}

