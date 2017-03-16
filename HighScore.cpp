/*
   =========================================================

   Cam Stephens

   May 2015

   Language: C++

   Program that shows variables and User Input

 * cin* C++ User Input

 * if* Statement used for selections


   =========================================================
 */



#include <iostream>

using namespace std;

int main()
{
        /*

           p1 = player 1
           p2 = player 2
           p3 = player 3

         */

        int p1, p2, p3; /* Variables */

        cout << "Please enter the score of Player 1: ";

        cin >> p1; /* Player 1 score stored */

        cout << "Please enter the score of Player 2: ";

        cin >> p2; /* Player 2 score stored */

        cout << "Please enter the score of Player 3: ";

        cin >> p3; /* Player 3 score stored */



        if(p1 == p2 && p3 == p1) {
                cout << "THREE WAY TIE: Player 1: " << p1 << " and " << "Player 2: " << p2 << " and " << " Player 3: " << p3 << endl;
        }

        /* Truth tables to decide who has Highscore */

        if(p1 > p2 && p1 > p3) {
                cout << "Player 1 has the highscore with: " << p1 << endl;
        }
        if(p1 == p2 && p1 > p3) {
                cout << "Player 1 and Player 2 TIE : " << "Player 1: " << p1 << " and " << "Player 2: " << p2 << endl;  /* These are show ties between players */
        }
        if(p1 == p3 && p1 > p2) {
                cout << "Player 1 and Player 3 TIE : " << "Player 1: " << p1 << " and " << "Player 3: " << p3 << endl;  /* Tie Prompt */
        }

        if(p2 > p1 && p2 > p3) {
                cout << "Player 2 has the Highscore with: " << p2 << endl;
        }

        if(p2 == p3 && p2 > p1) {
                cout << "Player 2 and Player 3 TIE : " << "Player 1: " << p2 << " and " << "Player 3: " << p3 << endl; /* Tie Prompt */
        }
        if (p3 > p1 && p3 > p2) {
                cout << "Player 3 has the Highcore with: " << p3 << endl;
        }



        return 0;
}
