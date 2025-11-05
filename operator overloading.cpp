#include<bits/stdc++.h>
using namespace std;

class Marks{
	int mark;
	public:
		Marks()
		{
			mark=0;
		}
		Marks(int m)
		{
			mark=m;
		}
//		 Marks &operator +=(int x){
//			mark+=x;
//			return *this;			
//		}
		Marks &operator ++(int x) {
			mark++;
			return *this;
		}
		int display()
		{
			cout<<mark;
		}		
};
int main()
{
	Marks s(20);
	s++;
	s.display();
	return 0;
	
}
