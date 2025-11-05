#include<iostream> 
using namespace std; 
class A{ 
public: 
void showA(){cout<<"Class A (Single Inheritance)"<<endl;} 
}; 
class B:public A{ 
public: 
void showB(){cout<<"Class B inherits A"<<endl;} 
}; 
class X{ 
public: 
void showX(){cout<<"Class X (Multiple Inheritance)"<<endl;} 
}; 
class Y{ 
public: 
void showY(){cout<<"Class Y (Multiple Inheritance)"<<endl;} 
}; 
class Z:public X,public Y{ 
public: 
void showZ(){cout<<"Class Z inherits X & Y"<<endl;} 
}; 
class P{ 
public: 
void showP(){cout<<"Parent class (Multi-level)"<<endl;} 
}; 
class C:public P{ 
public: 
12 
void showC(){cout<<"Child class inherits Parent"<<endl;} 
}; 
class G:public C{ 
public: 
void showG(){cout<<"GrandChild inherits Child"<<endl;} 
}; 
class Base{ 
public: 
void showBase(){cout<<"Base class (Hierarchical)"<<endl;} 
}; 
class D1:public Base{ 
public: 
void showD1(){cout<<"Derived1 from Base"<<endl;} 
}; 
class D2:public Base{ 
public: 
void showD2(){cout<<"Derived2 from Base"<<endl;} 
}; 
class M{ 
public: 
void showM(){cout<<"Class M (Hybrid base)"<<endl;} 
}; 
class N:public M{ 
public: 
void showN(){cout<<"Class N inherits M"<<endl;} 
}; 
class O{ 
public: 
void showO(){cout<<"Class O (Independent Hybrid base)"<<endl;} 
}; 
class P1:public N,public O{ 
public: 
void showP1(){cout<<"Class P1 inherits N & O"<<endl;} 
}; 
int main(){ 
B b;cout<<"\n--Single Inheritance--\n";b.showA();b.showB(); 
Z z;cout<<"\n--Multiple Inheritance--\n";z.showX();z.showY();z.showZ(); 
G g;cout<<"\n--Multi-level Inheritance--\n";g.showP();g.showC();g.showG(); 
D1 d1;D2 d2;cout<<"\n--Hierarchical Inheritance-
\n";d1.showBase();d1.showD1();d2.showBase();d2.showD2(); 
P1 p;cout<<"\n--Hybrid Inheritance--\n";p.showM();p.showN();p.showO();p.showP1(); 
return 0; 
}} 
