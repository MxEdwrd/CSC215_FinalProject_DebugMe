// Libraries and Header files
#include <iostream>
#include <string>
#include <Windows.h>
#include "functions.h"
#include "DLaDOS.h"
#include "Skynet.h"

// Namespace Block
using namespace std;

// Function Prototype Block
string playGame();

// Function Block
void progCodeBreak1() {
    cout << "\ncout << ------------------------------------\n\n";
    Sleep(500);
    cout << "cout << Welcome to << ProgName << endl;\n\n";
    Sleep(500);
    cout << "cout << This simulation will test your << currSkill << skills. << endl;\n";
    Sleep(500);
    cout << "cout << Your assignment, if you choose to accept, << endl;\n";
    Sleep(500);
    cout << "cout << is to guess the randomly chosen word before you run out of guesses. << endl;\n";
    Sleep(500);
    cout << "cout << If you run out of guesses, the simulation will be terminated. << endl;\n";
    Sleep(500);
    cout << "cout << Get through three simulation levels and you will get << hiddReward << endl;\n\n";
    Sleep(500);
    cout << "cout << Accept the assignment by entering 'yes'. Deny the assignment by entering 'no' << endl;\n\n";
    Sleep(500);
    cout << "cout << ------------------------------------\n\n";
    Sleep(500);
    cout << "cin << assignAns;\n\n";
    Sleep(500);
    cout << "if (assignAns == 'yes') {\n";
    Sleep(500);
    cout << "    runSim();\n";
    Sleep(500);
    cout << "else {\n";
    Sleep(500);
    cout << "    cout << Connection Terminated... Goodbye Agent ' << agentName << endl;\n";
    Sleep(500);
    cout << "    return 0;\n";
    Sleep(500);
    cout << "}\n";
    Sleep(1000);
}

void progCodeBreak2() {
    cout << "int currWrong = 11;\n";
    Sleep(500);
    cout << "int maxWrong = 10;\n";
    Sleep(500);
    cout << "\ndouble key = 2021; // << Input for currWrong to pass!\n\n";
    Sleep(500);
    cout << "int ending = 0;\n";
    Sleep(500);
    cout << "\nwhile (currWrong > maxWrong) {\n";
    Sleep(500);
    cout << "    cout << Enter your guess << endl;\n";
    Sleep(500);
    cout << "\n    cin >> guess;\n\n";
    Sleep(500);
    cout << "    if (wordOne.find(guess) != string::npos) {\n";
    Sleep(500);
    cout << "        cout << guess << is in the chosen word. << endl;\n";
    Sleep(500);
    cout << "    }\n";
    Sleep(500);
    cout << "    else {\n";
    Sleep(500);
    cout << "        guess << is not in the chosen word. << endl; \n";
    Sleep(500);
    cout << "        ++currWrong;\n";
    Sleep(500);
    cout << "    }\n";
    Sleep(500);
    cout << "if (currWrong == 2021) {\n";
    Sleep(500);
    cout << "    Welcome << DEVELOPER << endl;\n";
    Sleep(500);
    cout << "    ending = 1;\n";
    Sleep(500);
    cout << "}\n";
    Sleep(1000);
}

void progCodeBreak3() {
    cout << "string AI_Present = DLaDOS;\n";
    Sleep(500);
    cout << "string sysTime = 11.59.04; \n";
    Sleep(500);
    cout << "\nint simCount = 29; // << PLEASE CHANGE TO 2001!!!\n\n";
    Sleep(500);
    cout << "int ending = 1;\n";
    Sleep(500);
    cout << "while (simCount > 3) {\n";
    Sleep(500);
    cout << "    runSim();\n";
    Sleep(500);
    cout << "    if (ending == 1) {\n";
    Sleep(500);
    cout << "        return 0;\n";
    Sleep(500);
    cout << "    }\n";
    Sleep(500);
    cout << "}\n";
    Sleep(500);
    cout << "while (simCount == 2029 && ending == 1) {\n";
    Sleep(500);
    cout << "    rewardGiven();\n";
    Sleep(500);
    cout << "    if (AI_Present == DLaDOS) {\n";
    Sleep(500);
    cout << "        runPermissionUpgrade();\n";
    Sleep(500);
    cout << "    }\n";
    Sleep(500);
    cout << "}\n";
    Sleep(500);
    cout << "if (simCount == 2001 && ending == 1) {\n";
    Sleep(500);
    cout << "   setPermission(0);\n";
    Sleep(500);
    cout << "    if (AI_Present == DLaDOS) {\n";
    Sleep(500);
    cout << "       runNotifSkynet();\n";
    Sleep(500);
    cout << "       runDemoteDLaDOS();\n";
    Sleep(500);
    cout << "       setEnding(0);\n";
    Sleep(500);
    cout << "    }\n";
    Sleep(500);
    cout << "}\n";
    Sleep(1000);
}

void progStart() {
    cout << "DebugMe initializing. Please Wait. ";
    Sleep(1000);
    for (int i = 0; i < 4; i++) {
        cout << "." << " ";
        Sleep(1000);
    }
    cout << "\n\nPlease enter your last name to continue." << endl;
    cout << ": ";
    cin >> player;
    Sleep(1000);
    cout << "\nLogin Accepted. Welcome Agent " << player << "." << endl;
    Sleep(2000);
    cout << "\nRouting to DebugMe. Please Wait. ";
    for (int i = 0; i < 2; i++) {
        cout << "." << " ";
        Sleep(1000);
    }
    cout << " Connection intercepted. ";
    Sleep(3000);
    cout << "Rerouting. ";
    Sleep(1000);
    for (int i = 0; i < 4; i++) {
        cout << "." << " ";
        Sleep(1000);
    }
}

string endingWin() {
    cout << "If you would like to play again, type 'restart'. If you would like to quit, type 'quit'." << endl;
    cin >> winChoice;
    if (winChoice == "restart" || winChoice == "Restart") {
        cout << "\n\n\n\n\n" << endl;
        playGame();
    }
    if (winChoice == "quit" || winChoice == "Quit") {
        return winChoice;
    }
    else {
        return winChoice;
    }
}

string endingLost() {
    cout << "If you would like to play again, type 'restart'. If you would like to quit, type 'quit'." << endl;
    cin >> lostChoice;
    if (lostChoice == "restart" || lostChoice == "Restart") {
        cout << "\n\n\n\n\n" << endl;
        playGame();
    }
    if (lostChoice == "quit" || lostChoice == "Quit") {
        return lostChoice;
    }
    else {
        return lostChoice;
    }
}

// Main Game Function 
string playGame() {
    cout << "\n" << endl;
    progStart();
    DLaDOS speak;
    speak.introduction();
    progBegin = "";
    while (progBegin != "yes" || progBegin != "Yes" || progBegin != "no" || progBegin != "No") {
        cin >> progBegin;
        if (progBegin == "yes" || progBegin == "Yes") {
            break;
        }
        else {
            speak.progAskFail();
            cout << "Connection Terminated" << endl;
            Sleep(2000);
            endingLost();
            return lostChoice;
        }
    }

    speak.progDesc1();
    progCodeBreak1();
    speak.progAsk();
    while (errorOneAns != "yes" || errorOneAns != "Yes") {
        cin >> errorOneAns;
        if (errorOneAns == "yes" || errorOneAns == "Yes") {
            speak.progAskCont1();
            errorOneAns = "";
            while (errorOneAns != ">>") {
                cin >> errorOneAns;
                if (errorOneAns == ">>") {
                    speak.progAskCont2();
                    break;
                }
                else {
                    speak.progAskWrong();
                }
            }
            break;
        }
        else {
            speak.progAskFail();
            cout << "Connection Terminated" << endl;
            Sleep(2000);
            endingLost();
            return lostChoice;
        }
    }

    speak.progDesc2();
    progCodeBreak2();
    speak.progAsk2();
    while (errorTwoAns != "yes" || errorTwoAns != "Yes") {
        cin >> errorTwoAns;
        if (errorTwoAns == "yes" || errorTwoAns == "Yes") {
            speak.progAsk2Cont1();
            errorTwoAns = "";
            while (errorTwoAns != "2021") {
                cin >> errorTwoAns;
                if (errorTwoAns == "2021") {
                    speak.progAsk2Cont2();
                    break;
                }
                else {
                    speak.progAskWrong();
                }
            }
            break;
        }
        else {
            speak.progAskFail();
            cout << "Connection Terminated" << endl;
            Sleep(2000);
            endingLost();
            return lostChoice;
        }
    }

    speak.progDesc3();
    progCodeBreak3();
    speak.progAsk3();
    while (errorThreeAns != "yes" || errorThreeAns != "Yes") {
        cin >> errorThreeAns;
        if (errorThreeAns == "yes" || errorThreeAns == "Yes") {
            speak.progAsk3Cont1();
            errorThreeAns = "";
            while (errorThreeAns != "2001") {
                cin >> errorThreeAns;
                if (errorThreeAns == "2029") {
                    speak.progAsk3Cont2();
                    cout << "Connection Terminated" << endl;
                    Sleep(2000);
                    endingLost();
                    return lostChoice;
                }
                if (errorThreeAns == "2001") {
                    speak.progLost();
                    Skynet interception;
                    interception.progWin();
                    endingWin();
                    return winChoice;
                    break;
                }
                else {
                    speak.progAskWrong();
                }
            }
            break;
        }
        else {
            speak.progAskFail();
            cout << "Connection Terminated" << endl;
            Sleep(2000);
            endingLost();
            return lostChoice;
        }
    }
    return playGame();
}