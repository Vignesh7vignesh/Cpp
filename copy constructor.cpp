#include<iostream> 
using namespace std; 
class Student{ 
string name;int age; 
public: 
Student(string n,int a){ 
name=n;age=a;cout<<"Parameterized Constructor called"<<endl; 
} 
Student(const Student &s){ 
name=s.name;age=s.age;cout<<"Copy Constructor called"<<endl; 
} 
void display(){ 
cout<<"Name: "<<name<<", Age: "<<age<<endl; 
} 
}; 
int main(){ 
Student s1("Rahul",20);s1.display(); 
Student s2(s1);s2.display(); 
return 0; 
} 
