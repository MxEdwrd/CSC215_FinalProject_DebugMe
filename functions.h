/*
Author: Max Edward
Email : maxedwar@uat.edu
Assignment Name : Final Project - DebugMe
*/

// Libraries and Header files
#pragma once
#include <string>

// Namespace Block
using namespace std;

// External Variables Block
extern string AIName;
extern string* progName;
extern string progNameDesc;
extern string player;
extern string progBegin;
extern string codeName;
extern string hiddenCodeName;
extern string errorOneAns;
extern string errorTwoAns;
extern string errorThreeAns;
extern string winChoice;
extern string lostChoice;

// Function Prototype Block
string playGame();
void progStart();
void progCodeBreak1();
void progCodeBreak2();
void progCodeBreak3();
string endingWin();
string endingLost();