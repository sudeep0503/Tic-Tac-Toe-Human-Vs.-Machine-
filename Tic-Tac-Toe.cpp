#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

char arr[10]={'o','1','2','3','4','5','6','7','8','9'};
string pl;

int win();
void display();
void intro();
void name();


int main()
{
	int player=1,i,move;
	srand(time(NULL));
	

    char pos;
    do
    {
        
        if(player==1)
        {
        	intro();
			name();
		}
		display();
        player=(player%2)?1:2;

        if(player==1)
		{
			//cout<<"Player "<<player<<", enter a number:  ";
			cout<<"Player "<<pl<<", enter a number:  ";
        	cin >>move;	
		}
		else
		{
			move=(1+rand()%9);
		}

        pos=(player==1) ? 'X' : 'O';

        if (move==1&&arr[1]=='1')

            arr[1]=pos;
        else if (move==2&&arr[2]=='2')

            arr[2]=pos;
        else if (move==3&&arr[3]=='3')

            arr[3]=pos;
        else if (move==4&&arr[4]=='4')

            arr[4]=pos;
        else if (move==5&&arr[5]=='5')

            arr[5]=pos;
        else if (move==6&&arr[6]=='6')

            arr[6]=pos;
        else if (move==7&&arr[7]=='7')

            arr[7]=pos;
        else if (move==8&&arr[8]=='8')

            arr[8]=pos;
        else if (move==9&&arr[9]=='9')

            arr[9]=pos;
        else
        {
            cout<<"Invalid move ";

            player--;
            cin.ignore();
            cin.get();
        }
        i=win();

        player++;
    }while(i==-1);
    
	display();
    if(i==1)

        cout<<"==>\aPlayer "<<--player<<" win ";
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

/*	Function To get Game Status		*/
/*	-1 to Continue					*/
/*	0 to Draw						*/
/*	1 to Win						*/

int win()
{
    if (arr[1]==arr[2]&&arr[2]==arr[3])

        return 1;
    else if (arr[4]==arr[5]&&arr[5]==arr[6])

        return 1;
    else if (arr[7]==arr[8]&&arr[8]==arr[9])

        return 1;
    else if (arr[1]==arr[4]&&arr[4]==arr[7])

        return 1;
    else if (arr[2]==arr[5]&&arr[5]==arr[8])

        return 1;
    else if (arr[3]==arr[6]&&arr[6]==arr[9])

        return 1;
    else if (arr[1]==arr[5]&&arr[5]==arr[9])

        return 1;
    else if (arr[3]==arr[5]&&arr[5]==arr[7])

        return 1;
    else if (arr[1] !='1'&&arr[2] !='2'&&arr[3] !='3' 
                   &&arr[4] !='4'&&arr[5] !='5'&&arr[6] !='6' 
                 &&arr[7] !='7'&&arr[8] !='8'&&arr[9] !='9')

        return 0;
    else
        return -1;
}


/*	Function To Display Tic-Tac-Toe Board	*/


void display()
{
    system("cls");
    cout<<"\n\n\tTic Tac Toe\n\n";

    cout<<"Player 1 (X)  -  Player 2 (O)"<<endl<<endl;
    cout<<endl;
    
    cout<<"Enter Player 1 Name:- "<<pl<<endl<<endl;

    cout<<"Welcome to the game "<<pl<<endl<<endl;

    cout<<"     |     |     "<<endl;
    cout<<"  "<<arr[1]<<"  |  "<<arr[2]<<"  |  "<<arr[3]<<endl;

    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;

    cout<<"  "<<arr[4]<<"  |  "<<arr[5]<<"  |  "<<arr[6]<<endl;

    cout<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl;

    cout<<"  "<<arr[7]<<"  |  "<<arr[8]<<"  |  "<<arr[9]<<endl;

    cout<<"     |     |     "<<endl<<endl;
}

void intro()
{
	system("cls");
    cout<<"\n\n\tTic Tac Toe\n\n";

    cout<<"Player 1 (X)  -  Player 2 (O)"<<endl<<endl;
    cout<<endl;
}

void name()
{
	cout<<"Enter Player 1 Name:- ";
    cin>>pl;
    cout<<"Welcome to the game "<<pl;
}
