#include<iostream>
#include<conio.h>
using namespace std;

char position[10]={'0','1','2','3','4','5','6','7','8','9'};

int wincheck()
{
	if( position[1]== position[2] && position[2]== position[3])
	{
		  return 1;
	}
	else if( position[4]== position[5] && position[5]== position[6])
	{
		  return 1;
	}
	else if( position[7]== position[8] && position[8]== position[9])
	{
		  return 1;
	}
	else if( position[1]== position[4] && position[4]== position[7])
	{
		  return 1;
	}
	else if( position[2]== position[5] && position[5]== position[8])
	{
		  return 1;
	}
	else if( position[3]== position[6] && position[6]== position[9])
	{
		  return 1;
	}
	else if( position[1]== position[5] && position[5]== position[9])
	{
		  return 1;
	}
	else if( position[3]== position[5] && position[5]== position[7])
	{
		  return 1;
	}
	else if( position[1]!='1'&& position[2]!='2'&& position[3]!='3'&&
	         position[4]!='4'&& position[5]!='5'&& position[6]!='6'&&
			 position[7]!='7'&& position[8]!='8'&& position[9]!='9')
			 {
			 	return 0;
			 }
	else 
	   return -1;
}
void display_board()
{
	system("cls");
	cout<<"\t\t\t--------------------------------"<<endl;
   cout<<"\t\t\t       TIC-TAC-TOE GAME"<<endl;
   cout<<"\t\t\t--------------------------------\n\n";
   
   cout<<"\t\t\tPLAYER[1]=X and PLAYER[2]=O \n\n";
   
   cout<<"\t\t\t\t     |     |     "<<endl;
   cout<<"\t\t\t\t  "<<position[1] <<"  |  "<< position[2]<< "  |  "<< position[3]<<endl;
   
   cout<<"\t\t\t\t_____|_____|_____"<<endl;
   cout<<"\t\t\t\t     |     |     "<<endl;
   cout<<"\t\t\t\t  "<<position[4] <<"  |  "<< position[5]<< "  |  "<< position[6]<<endl;
   
   cout<<"\t\t\t\t_____|_____|_____"<<endl;
   cout<<"\t\t\t\t     |     |     "<<endl;
   cout<<"\t\t\t\t  "<<position[7] <<"  |  "<< position[8]<< "  |  "<< position[9]<<endl;
   
	
}

int main()
{
	
   cout<<"\t\t\t--------------------------------"<<endl;
   cout<<"\t\t\t       TIC TAC TOE GAME"<<endl;
   cout<<"\t\t\t--------------------------------"<<endl;
   
   cout<<"\n\n\t\t\tWELCOME TO THE GAME!!!"<<endl;
   
   cout<<"\n\n Press Enter to play the game....";
   getch();
   
   char choose;
   	int player=1, i, choice;
   	
   
 do{
 	
 
 
   do
   {
   	
	
     display_board();
	     char mark;
	
     player=(player%2)?1:2;
     
     cout<<"\n\t\t\tPlayer ["<<player <<"], Enter the Position: ";
     cin>>choice;
     
     mark=(player ==1)?'X': 'O';
     
     if(choice==1 && position[1]=='1')
     {
     	position[1]= mark;
	 }
	 else if(choice==2 && position[2]=='2')
     {
     	position[2]= mark;
	 }
	 else if(choice==3 && position[3]=='3')
     {
     	position[3]= mark;
	 }
	 else if(choice==4 && position[4]=='4')
     {
     	position[4]= mark;
	 }
	 else if(choice==5 && position[5]=='5')
     {
     	position[5]= mark;
	 }
	 else if(choice==6 && position[6]=='6')
     {
     	position[6]= mark;
	 }
	 else if(choice==7 && position[7]=='7')
     {
     	position[7]= mark;
	 }
	 else if(choice==8 && position[8]=='8')
     {
     	position[8]= mark;
	 }
	 else if(choice==9 && position[9]=='9')
     {
     	position[9]= mark;
	 }
	 else
	 {
	 	cout<<"Invalid Move!";
	 	player--;
	 	cin.ignore();
	 	cin.get();
	 }
	   i=wincheck();
	   player++;
	   
} while(i==-1);

 display_board();
 if(i==1)
 {
 	cout<<"\n\nCongratulations! PLAYER ["<<--player<<"] Wins!! ";
 	
 }
 else 
 {
 	cout<<"\nGame Drawn! ";
 }
 cin.ignore();
 cin.get();
 
 cout<<"\nDo you want to play again(Y/N)? ";
 cin>>choose;
 
 position[0]='0';
 position[1]='1';
 position[2]='2';
 position[3]='3';
 position[4]='4';
 position[5]='5';
 position[6]='6';
 position[7]='7';
 position[8]='8';
 position[9]='9';
}
 while(choose=='y'|| choose=='Y');
 
 cout<<"\n\nHave a great day!...";
 return 0;     
   
}
