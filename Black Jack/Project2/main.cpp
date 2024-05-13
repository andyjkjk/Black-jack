#include<iostream>
#include<stdlib.h>
#include<string>
#include<time.h>
#include"poker.h"
#include<sstream>
#include<limits>
using namespace std;

int main()

{

    Poker poker;

    cout << ">>>>>>>>>>>>>>>> Welcome To Play Black Jack <<<<<<<<<<<<<<<<" << endl << endl;

    poker.shuffle();

    while (1)

    {
        int choose;
        cout << "1.�n�P 2.���n�P 3.���s�}�l 4.�h�X  >>�п�J�Ʀr��ܾާ@:";
        cin >> choose;
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        if (!cin || cin.gcount() != 1)
        {
            cout << "��J���~" << '\n';
        }
        else
        {
            if (choose == 1)
            {
                poker.playerAsk();
            }
            else if (choose == 2)
            {
                poker.landlordProcess();
            }
            else if (choose == 3)
            {
                poker.newGame();
            }
            else if (choose == 4)
            {
                exit(0);
            }
            while (choose != 1 && choose != 2 && choose != 3 && choose != 4)
            {

                cout << "��J���~" << '\n';
                cout << "1.�n�P 2.���n�P 3.���s�}�l 4.�h�X  >>�п�J�Ʀr��ܾާ@:";
                cin >> choose;
                if (choose == 1)
                {
                    poker.playerAsk();
                }
                else if (choose == 2)
                {
                    poker.landlordProcess();
                }
                else if (choose == 3)
                {
                    poker.newGame();
                }
                else if (choose == 4)
                {
                    exit(0);
                }
            }

        }

    }

    system("pause");

    return 0;

}