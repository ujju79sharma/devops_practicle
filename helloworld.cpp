#include<iostream>
using namespace std;

class Calculator
{
	private:
		int num1,num2;
	public:
		Calculator(int x, int y):num1(x),num2(y){}
		int Sum()
		{
			
			return num1+num2;
		}

		int Subtract()
		{
			return num1-num2;
		}
		int Multiplication()
		{
			return num1*num2;
		}

		int Division()
		{
			
			return num1/num2;
		}
};
int main()
{

	Calculator c11(20,10);
	int ch;
	while(1)
	{
		cout<<"Menu--Driven"<<endl;
		cout<<"1. Addition"<<endl;
		cout<<"2. Subtractio"<<endl;
		cout<<"3. Multiplication"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"5. Exit"<<endl;
		cout<<"Enter Your Choice"<<endl;
		cin>>ch;
		switch(ch){
				case 1:
					cout<<"Addition Of Two Numbers is ::"<<c11.Sum()<<endl;
					break;
				case 2:
					cout<<"Subtraction of two number is ::"<<c11.Subtract()<<endl;
					break;
				case 3:
					cout<<"Multiplication::"<<c11.Multiplication()<<endl;
					break;
				case 4:
					cout<<"Division::"<<c11.Division()<<endl;
					break;
				case 5:
					cout<<"Exiting Application........"<<endl;
					return 0;
			  }
	}
}

