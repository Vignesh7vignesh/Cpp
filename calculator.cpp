#include<iostream>
#include<cstring>
using namespace std;
class calculator{
	public:
		int a,b;
	calculator(int a,int b)
	{
		this->a=a;
		this->b=b;
	}
	add(int a,int b){
		cout<<"add: "<<a+b<<endl;
	}
	sub(int a,int b){
		cout<<"substract: "<<a-b<<endl;
	}
	mul(int a,int b){
		cout<<"multiply: "<<a*b<<endl;
	}
};
int main()
{
	int a,b;
	cin>>a>>b;
	calculator c(a,b);
	c.add(a,b);
	c.sub(a,b);
	c.mul(a,b);
}
