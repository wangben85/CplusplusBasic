#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<algorithm>
using namespace std;
class a
{
private:

public:
	a() {    

	}
	
	virtual  void  xhs() {          
		cout << "output xhs()" << endl;
	}  

	 
	virtual void cxhs() = 0;  
};

class b :public a
{
private:

public: virtual  void  cxhs() {
    cout << "output cout()" << endl;
 } 
};             
int main()     
{             
	b c;        
	c.xhs();    
	c.cxhs();
	system("pause");
}