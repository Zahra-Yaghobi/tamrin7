
// Programmer is : Zahra Yaghubi
// ID : 95440288
#include <iostream>
#include <chrono>
#include <windows.h>
using namespace std;

char arr[10],mark;
arr[10] = {'o','1','2','3','4','5','6','7','8','9'};

int win();
void board();

int main()
{
	int i,gamer,choose;
    gamer=1;
    do
    {
    	board();

        // if (gamer%2)
        //     gamer = 1;
        // else
        //     GAMER = 2;

        gamer=(gamer%2)?1:2;  // SHORTLY
		if(gamer==1){
			system("The Color 09");
		}
		if(gamer==2){
			system("The Color 0A");
		}
        cout << "The " << gamer << " player, Please enter a number:  ";
        cin >> choose;
        mark=(gamer == 1) ? 'X' : 'O'; // SHORTLY
		
        if (choose == 1 && arr[1] == '1')
            arr[1] = mark;
        else if (choose == 2 && arr[2] == '2')
            arr[2] = mark;
        else if (choose == 3 && arr[3] == '3')
            arr[3] = mark;
        else if (choose == 4 && arr[4] == '4')
            arr[4] = mark;
        else if (choose == 5 && arr[5] == '5')
            arr[5] = mark;
        else if (choose == 6 && arr[6] == '6')
            arr[6] = mark;
        else if (choose == 7 && arr[7] == '7')
            arr[7] = mark;
        else if (choose == 8 && arr[8] == '8')
            arr[8] = mark;
        else if (choose == 9 && arr[9] == '9')
            arr[9] = mark;
        else
        {
            cout<<"the movements is NOT valid";

            gamer = gamer - 1;
            cin.ignore();
            cin.get();
        }
        i=win();
        gamer++;
    }while(i==-1);
    board();
    if(i==1){
    	cout<<"==>\agamer "<<--gamer<<" win ";
        clock_t ends = clock();
    	cout<<"\n"<<ends<<"miliseconds";
	} 
    else
        cout<<"==>\aGame draw";

    cin.ignore();
    cin.get();
    return 0;
}

int win()
{
    if (arr[1] == arr[2] && arr[2] == arr[3])

        return 1;
    else if (arr[4] == arr[5] && arr[5] == arr[6])

        return 1;
    else if (arr[7] == arr[8] && arr[8] == arr[9])

        return 1;
    else if (arr[1] == arr[4] && arr[4] == arr[7])

        return 1;
    else if (arr[2] == arr[5] && arr[5] == arr[8])

        return 1;
    else if (arr[3] == arr[6] && arr[6] == arr[9])

        return 1;
    else if (arr[1] == arr[5] && arr[5] == arr[9])

        return 1;
    else if (arr[3] == arr[5] && arr[5] == arr[7])

        return 1;
    else if (arr[1] != '1' && arr[2] != '2' && arr[3] != '3' 
                    && arr[4] != '4' && arr[5] != '5' && arr[6] != '6' 
                  && arr[7] != '7' && arr[8] != '8' && arr[9] != '9')

        return 0;
    else
        return -1;
}

void board()
{
    system("cls");

    cout << "gamer 1 (X)  -  gamer 2 (O)" << endl << endl << endl << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[1] << "  |  " << arr[2] << "  |  " << arr[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[4] << "  |  " << arr[5] << "  |  " << arr[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << arr[7] << "  |  " << arr[8] << "  |  " << arr[9] << endl;
    cout << "     |     |     " << endl << endl;
}