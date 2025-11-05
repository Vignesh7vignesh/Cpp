#include<iostream> 
using namespace std; 
class Student{ 
string name;int age; 
public: 
Student(){name="Unknown";age=0;cout<<"Default Constructor called"<<endl;} 
Student(string n,int a){name=n;age=a;cout<<"Parameterized Constructor called"<<endl;} 
Student(string n){name=n;age=-1;cout<<"Single Parameter Constructor called"<<endl;} 
void display(){cout<<"Name: "<<name<<", Age: "<<age<<endl;} 
}; 
int main(){ 
Student s1;s1.display(); 
Student s2("Rahul",20);s2.display(); 
Student s3("Priya");s3.display(); 
retur
