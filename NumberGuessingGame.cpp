/*
   ====================================

   Cam Stephens
   08-30-2015

   Number Guessing Game
    Language C++

    Use of Vectors

   ====================================
 */
//08-30-2015


#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
#include <string>
#include <stdlib.h>
#include "stdafx.h"


using namespace std;

//Varialbes
char choice;
int rNumber = 0;
int guess = 0;
float answer = 0;
vector <int> num1;
vector <int> num2;


//Function Calls
void guessNum1( int guess, vector<int> num1);
void guessNum2(int guess, vector<int> num1);

int main()
{

        cout << "Welcome to Number Guessing Game" << endl;

        // vector for the sign
        vector <char> sign;
        sign.push_back('+');
        sign.push_back('-');
        sign.push_back('/');
        sign.push_back('*');

        srand(static_cast<unsigned int>(time(0)));
        random_shuffle(sign.begin(), sign.end());



        // random Number generator

        srand(time(0));
        for(int i = 0; i < 2; i++) {
                int randomNumber = rand() % 100 +1;
                num1.push_back(randomNumber);


        }


        // math operator

        if(sign[0] == '+') {
                answer = num1[0] + num1[1];
        }
        else if(sign[0] == '-') {
                answer = num1[0] - num1[1];
        }
        else if(sign[0] == '*') {
                answer = num1[0] * num1[1];
        }
        else if(sign[0] == '/') {
                answer = num1[0] / num1[1];
        }


        //display message
        cout << "What are the missing numbers to solve the problem?";
        cout << endl;
        cout << "__________ " << sign[0] << " ________ =" << answer;


        cout << endl;
        cout << endl;


        // call guess number function


        guessNum1(guess,num1);

        cout << endl;
        cout << endl;

        guessNum2(guess,num1);


        // Display Message
        cout << num1[0] << " " << sign[0] << " " << num1[1] << " = " << answer << endl;



        // Display message
        cout << "Congrats you won!";



        system("pause");
        return 0;

}

/*
   ====================================
   Function:
    Functions to guess at what
    the numbers might be.

   ====================================
 */


void guessNum1(int guess, vector<int>num1){
        do {
                cout << "\nEnter Guess for the first number: ";
                cin >> guess;

                if(num1[0] > guess) {
                        cout << "\nYour guess was too low try again " << endl;

                }   else if (num1[0] < guess) {
                        cout << "\nYour guess was too high try again " << endl;

                }else if (num1[0] == guess) {
                        cout << "\nCongrats!" << endl;
                        cout << "\nYou guessed the right number!";

                }
        } while(num1[0] != guess);

}

//Function
void guessNum2(int guess, vector<int>num1){
        do {
                cout << "\nEnter Guess for the second number : ";
                cin >> guess;

                if(num1[1] > guess) {
                        cout << "\nYour guess was too low try again " << endl;

                }   else if (num1[1] < guess) {
                        cout << "\nYour guess was to high try again " << endl;

                }else if (num1[1] == guess) {
                        cout << "\nCongrats!" << endl;
                        cout << "\nYou guessed the right number! ";
                }
        } while(num1[1] != guess);

}
