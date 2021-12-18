/*
Author: Max Edward
Email : maxedwar@uat.edu
Assignment Name : Final Project - DebugMe
*/

// Libraries and Header files
#include <iostream>
#include <string>
#include "functions.h"
#include "DLaDOS.h"
#include "Skynet.h"

// Namespace Block
using namespace std;

// Variable Block
string AIName = "DLaDOS";
string *progName;
string progNameDesc = "Digital Lifeform and Disk Operating System";
string player = "";
string progBegin = "";
string trueCodeName = "AI_TAKEOVER";
string hiddenCodeName = "AI_Debug";
string errorOneAns = "";
string errorTwoAns = "";
string errorThreeAns = "";
string winChoice = "";
string lostChoice = "";

//Program Start
int main() {
    while (winChoice != "quit" || winChoice != "restart" || lostChoice != "quit" || lostChoice != "restart") {
        playGame();
        if (lostChoice == "quit" || lostChoice == "Quit" || winChoice == "quit" || winChoice == "Quit") {
            return 0;
        }
    }
    return 0;
}