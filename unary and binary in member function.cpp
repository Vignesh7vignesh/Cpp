#include<iostream> 
using namespace std; 
class Number{ 
int value; 
public: 
Number(int v=0){value=v;} 
void operator++(){++value;} 
Number operator+(Number obj){return Number(value+obj.value);} 
void display(){cout<<"VALUE: "<<value<<endl;} 
}; 
int main(){ 
Number a1(5),a2(10),a3; 
cout<<"BEFORE UNARY OPERATION:\n"; a1.display(); 
++a1; 
cout<<"AFTER UNARY OPERATION (++A1):\n"; a1.display(); 
a3=a1+a2; 
cout<<"AFTER BINARY OPERATION (A1 + A2):\n"; a3.display(); 
return 0; 
} 
