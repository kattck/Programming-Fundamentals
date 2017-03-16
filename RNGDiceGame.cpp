
/*
   =========================================

   Cam Stephens

   08/09/2015

   Random Number Generator + Dice Game

   Language C++

   Functions

   =========================================
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <conio.h>
#include <stdafx.h>

using namespace std;

// Variables
int choice;
int counter = 0;


/*
   ==========================

   Function:
   Dice Roll

   Dice Roll allows for
   random roll and number
   to be assigned.

   ==========================
 */
void diceRoll(){                               /* Dice Roll Function*/
        srand(static_cast<unsigned int>(time(0))); /*Random Seed*/

        int randomNumber = rand();

        for(int roll = 0; roll < 5; roll++) {
                cout <<"Dice roll: " << (rand()%6) + 1 << endl;
        }
}


int main()
{
        //Display Message
        cout << "Welcome to the Dice Game." << endl;
        cout << "You are given 3 rolls per turn press any key to roll the dice and Good luck!" << endl;
        cout << "You may choose to stay with your dice roll at any point in the turn.\n" << endl;

        getch(); /* Pause */

        diceRoll(); /* Function is Called */


        while(counter < 2) {

                cout << "If you would like to re-roll type '1' or if you would like to stay type '2'" << endl;
                cin >> choice; /* Re roll option */

                if(choice == 1) {
                        diceRoll(); /* Function is Called */
                        counter++;
                }

                else if(choice == 2) {

                        cout << "You have Selected to Stay that is the end of Turn 1! " << endl;

                        return 0;
                }

                else{
                        cout << "Please Select option 1 or option 2." << endl;
                }

                if(counter > 1) {
                        cout << "You have no more rerolls that is the end of turn 1!" << endl;
                }

        }








        system("Pause");
        return 0;
}
