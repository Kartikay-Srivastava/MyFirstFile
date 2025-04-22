#include<iostream>
using namespace std;
class ABSfun
{
	private:
	int pin;
	public:
	string name;
	int acc_no;
	void input()
	{
		pin=321;
		name="kartikay";
		acc_no=196401;
	}	
	void output()
	{
		cout<<"user pin   "<<pin<<endl;
		cout<<"user name  "<<name<<endl;
		cout<<"user acc no  "<<acc_no<<endl;
	}
};
class ABScls
{
	public:
	void eye()
	{
		cout<<"abstract class"<<endl;	
	}	
	virtual void nain()=0;
	
};
class ABSclsb: public ABScls
{
	public:
	void nain()
	{
		cout<<"abstract class memeber call by derive class   ";
	}
};
int main()
{
//	ABSclsb obj;
//	obj.eye();
//	
//	obj.nain();
//	
	ABSfun ins;
	ins.input();
	ins.output();

//	cout<<ins.pin; // private member can't be called outside the class
	cout<<ins.name;
	cout<<ins.acc_no;
	
	return 0;
}


