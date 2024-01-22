#include<iostream>

using namespace std;
class calculator{
	
	private:
		 float num1, num2, result;
		 
    public:
		char op;
		
    	void getnumbers()
    	{
    	    cout<<"\n\nEnter two numbers with operator(+,-,*,/): "; cin>>num1>>op>>num2;	
		}
		int add()
		{
			result=num1+num2;
			return result;
		}
		int substract()
		{
			result=num1-num2;
			return result;
		} 
		int multiply()
		{
			result=num1*num2;
			return result;
		}
		float divide()
		{
			result=num1/num2;
			return result;
		}
};
int main()
{
	calculator C;
	char choice;
	
	cout<<"\t\t\t\t------------------------\n";
	cout<<"\t\t\t\t   SIMPLE CALCULATOR \n";
	cout<<"\t\t\t\t------------------------";
	do{
		C.getnumbers();
		if(C.op=='+')
		   { 
			  cout<<"Result: "<<C.add();
			  
		   }
		else if(C.op=='-')
		   {
			  cout<<"Result: "<<C.substract();
			 
		   }
		else if(C.op=='*')
		   {
			  cout<<"Result: "<<C.multiply();
		   }
		else if(C.op=='/')
		   {
			  cout<<"Result: "<<C.divide();
		   }
		else
		   cout<<"Invalid Opetrator!"<<endl;
		   
		   cout<<"\n\nDo you want to do it again(Y/N)?";
		   cin>>choice;
		
	}while(choice=='Y'||choice=='y');
	
	cout<<"\nHave a great day!...";

}

