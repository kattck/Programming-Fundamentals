// Mod04 Classes.cpp : Defines the entry point for the console application.
// Cam Stephens
// 11-2-2015
// This is the revised Module
/*
   ========================================================================

    Cam Stephens
    11-2-2015

    Classes

    Language C++

   ========================================================================
 */

#include "stdafx.h"


#include <iostream>
#include <string>


using namespace std;

class Student {

//Private memver Variables
private:

// Member Functions

string firstName;
string lastName;
int phoneNum = 0000;
int studentNum = 0000;
double studentGPA = 0.00;

// in Member functions
string infisrtName;
string inlastName;
int inphoneNum;
int instudentNum;
double instudentGPA;



public:

// Default Constructor

Student::Student() {

        // Setting Values to null

        firstName = "No First Name";
        lastName = "No last Name";
        int phoneNume;
        int studentNum;
        double studentGPA;

}

// Overloaded Constructor

Student(string infirstName, string inlastName, int inphoneNum, int instudentNum, double instudentGPA) {

        firstName = infirstName;
        lastName = inlastName;
        phoneNum = inphoneNum;
        studentNum = instudentNum;
        studentGPA = instudentGPA;





}

// Function to display the info
void displayInfo() {

        cout << "Student Information: " << endl;
        cout << "Student Fist Name: " << firstName << endl;
        cout << "Student Last Name: " << lastName << endl;
        cout << "Student Phone Number: " << phoneNum << endl;
        cout << "Student I.D. Number: " << studentNum << endl;
        cout << "Student GPA: " << studentGPA << endl;



}




};


int main(){


        // Default constructor
        Student student1;


        // overloaded
        Student student2("Cam", "Stephens", 8649151125, 25251, 3.7);

        student1.displayInfo();

        cout << endl;
        cout << endl;

        student2.displayInfo();



        system("pause");

        return 0;
}
