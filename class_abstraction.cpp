//#include<iostream>
//using namespace std;
//class st{
//	public:
//		void display();    // class members
//};
//void st::display()
//{
//	cout<<"Swaroopa"<<endl;
//}
//
//int main()
//{
//	st s;
//	s.display();
//}
//----------------------------------------------------------
//#include<iostream>
//using namespace std;
//class st{
//	public:
//	static int id;      // static members
//};
//int st::id=35;
//int main()
//{
//	cout<<st::id<<endl;
//}
//-----------------------------------------------------------
//#include<iostream>
//using namespace std;
//namespace st{
// int id=35;         // namespace members      
//};
//int main()
//{
//	cout<<st::id<<endl;
//}
//-----------------------------------------------------------
//
//#include<iostream>
//using namespace std;
//class members{
//	private:
//		static int count;
//	public:
//		//constructor
//		members()
//		{
//			count++;
//		}
//		static void display()
//		{
//			cout<<count<<endl;    // access specifiers
//		}
//};
//int members::count=0;           //global declaration mandatory
//int main()
//{
//	members m1;
//	m1.display();
//	members m2;
//	m2.display();
//	
//}
//-----------------------------------------------------------------
//#include <iostream>
//using namespace std;
//// Function with default arguments
//void greet(string name = "Guest", int age = 18) {
//    cout << "Hello " << name << "! You are " << age << " years old.\n";
//}
//
//int main() {
//    greet();                 // Uses both default values   // default arguments 
//    greet("Alice");          // Uses default age
//    greet("Bob", 25);        // No defaults used
//
//    return 0;
//}
//------------------------------------------------------------------
//#include <iostream>
//using namespace std;
//
//inline int square(int x) {
//    return x * x;
//}                              // inline function
//
//int main() {
//    cout << "Square of 5: " << square(5);
//}
//-------------------------------------------------------------------
//#include <iostream>
//using namespace std;
//
//class Student {
//public:
//    string name;
//    int age;
//    Student(string n, int a) {
//        name = n;
//        age = a;
//    }
//    void display() {
//        cout << "Name: " << name << ", Age: " << age << endl;
//    }
//};
//
//                                             // Function that takes object as parameter
//void showStudent(Student s) {
//    cout << "Student Details (from function): ";
//    s.display();
//}
//
//int main() {
//    Student s1("Alice", 20);  // Create object
//    showStudent(s1);          // Pass object to function
//}
//------------------------------------------------------------------
//class MyClass {
//public:
//    MyClass(int x) : data(x) {}
//    MyClass(const MyClass& other) : data(other.data) {} // Copy constructor
//    int getData() { return data; }
//private:
//    int data;
//};
//
//MyClass obj1(10);
//MyClass obj2(obj1); // Copy constructor called
//-------------------------------------------------------------------
#include <iostream>
using namespace std;
class Rectangle {
    int length, width;
public:
    // Function defined INSIDE the class (automatically inline)
    void setData(int l, int w) {
        length = l;
        width = w;
    }
    // Function declared inside, defined OUTSIDE the class
    int area();
};
// Definition OUTSIDE the class using scope resolution operator
int Rectangle::area() {
    return length * width;
}
int main() {
    Rectangle r;
    r.setData(10, 5); // Inside-class function call
    cout << "Area: " << r.area(); // Outside-class function call
    return 0;
}





