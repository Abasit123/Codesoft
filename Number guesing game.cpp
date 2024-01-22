#include<iostream>
#include<cstdlib>
#include<ctime>
#include<conio.h>

using namespace std;
int main()
{
	int number, guess_number;
	char choice;
	
	srand((unsigned int) time(NULL));

	do
	{
	    system("cls");
	   cout<<"\t\t\t\t----------------------------\n";
	   cout<<"\t\t\t\t   NUMBER GUESSING GAME\n";
	   cout<<"\t\t\t\t----------------------------\n\n";
	   
	   
	   number=rand()%50;
	   
	   cout<<"A random number has been generated...\n\n";
	   
	    	while(number!=guess_number)
		
		      {
	             cout<<"\nGuess the number (1-50): ";
		   
		          cin>>guess_number;
		   
		   
	    	         if(number>guess_number)
	    	              cout<<"\tThe guessed number is too low!";
	    	     
		             else if(number<guess_number)
		                  cout<<"\tThe guessed number is too high!";
		    
	    }
	    
	    
	    cout<<"\nYou Guessed Correct!";
	    
	    cout<<"\n\nDo you want to play again(Y/N)?";
	    cin>>choice;
	    
		
	}  while(choice=='Y' || choice=='y' );
	
	cout<<"\n\n Have a great day!....\n";
	
}
