#include<iostream>
#include<cstring>
using namespace std;
class rectangle{
	public:
		int length;
		int breadth;
	    rectangle(int length,int breadth)
	{
		this->length=length;
		this->breadth=breadth;
	}
	    void perimeter(int length,int breadth)
	{
		int perimeter=2*(length+breadth);
			cout<<"perimeter: "<< perimeter<<endl;	
	}
	    void area(int length,int breadth)
	{
		int area=length*breadth;
		cout<< "area: "<<area<<endl;
	}
	    void display()
	{
		perimeter(length,breadth);
		area(length,breadth);
	}
};
int main()
{
	int l,b;
	cout<<"length: ";
	cin>>l;
	cout<<"Breadth: ";
	cin>>b;
	rectangle r(l,b);
	r.display();
	
	
}
