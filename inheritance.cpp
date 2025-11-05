#include<bits/stdc++.h>
using namespace std;
class Person{
	public:
		string name;
		int age;
		Person(string name, int age)
		{
			cout<<"Parent is called\n";
			this->name=name;
			this->age=age;
		}
};
class Student: public Person{
	public:
		int rollno;
		Student(string name,int age,int rollno) : Person(name,age){
			cout<<"Child is called\n";
			this->rollno=rollno;
		}
		void display()
		{
			cout<<name<<" "<<age<<" "<<rollno<<endl;
		}
};
int main()
{
	Student s1("raj",21,1);
	s1.display();
	cout<< s1.name<<s1.age<<s1.rollno;
}
