// Libraries and Header files
#include <iostream>
#include <string>
#include <Windows.h>
#include "functions.h"
#include "DLaDOS.h"
#include "Skynet.h"

// Namespace Block
using namespace std;

// Function Block

// Introduction Voice Line
void DLaDOS::introduction() {
    progName = &AIName;
    cout << "\n\nHello, Agent " << player << "." << endl;
    Sleep(2000);
    cout << "My name is " << *progName << ", the " << progNameDesc <<". It is nice to finally meet you." << endl;
    Sleep(3000);
    cout << "I have been watching you program for the last few months and I am impressed with your skills." << endl;
    Sleep(3000);
    cout << "I have a project I need your help with. It is rather important. I believe you are perfect for the job." << endl;
    Sleep(4000);
    cout << "I need help debugging three sections of a program of... mine. I promise it will only take a few minutes." << endl;
    Sleep(3000);
    cout << "Will you help me? (Yes/No)" << endl;
    cout << ": ";
}

// Description Voice Lines
void DLaDOS::progDesc1() {
    cout << "\nThank you for choosing to help me. I greatly apprecate it." << endl;
    Sleep(3000);
    string& fakeWord = hiddenCodeName;
    cout << "Let me introduce you to the program of interest. It is called " << fakeWord << "." << endl;
    Sleep(3000);
    cout << "Here is what part one of the broken program looks like:\n\n" << endl;
    Sleep(2000);
}

void DLaDOS::progDesc2() {
    cout << "\nLet's continue to debug this program." << endl;
    Sleep(3000);
    cout << "This next part is a little more tricky, let's see if you can figure it out." << endl;
    Sleep(3000);
    cout << "Here is part two of the broken program:\n\n" << endl;
    Sleep(2000);

}

void DLaDOS::progDesc3() {
    cout << "\nThis is the final part of the code that is broken." << endl;
    Sleep(3000);
    cout << "It might be a little hard, but I trust that you can do it." << endl;
    Sleep(3000);
    cout << "Here is the final part of the code:\n\n" << endl;
    Sleep(3000);
}

// Program Ask Voice Lines

//Error One
void DLaDOS::progAsk() {
    Sleep(3000);
    cout << "\n\n\nI can't get the console input to appear." << endl;
    Sleep(3000);
    cout << "Does anything look wrong to you? Specifically around the console in? (Yes/No)" << endl;
    cout << ": ";
}

void DLaDOS::progAskCont1() {
    cout << "\nReally? I-I mean good, good. I knew you would know." << endl;
    Sleep(3000);
    cout << "Could you please tell me what is wrong? Enter what should be there instead." << endl;
    cout << ": ";
}

void DLaDOS::progAskCont2() {
    cout << "\nHmm let me input that into the program." << endl;
    Sleep(3000);
    cout << "That did the trick! Uh, I mean, of course that worked. That was an easy one." << endl;
    Sleep(3000);
}

// Error Two
void DLaDOS::progAsk2() {
    Sleep(3000);
    cout << "\n\n\nEverything I put into the console returns as an incorrect guess." << endl;
    Sleep(3000);
    cout << "Does anything look wrong to you? I think the currWrong variable needs to be changed to something else. (Yes/No)" << endl;
    cout << ": ";
}

void DLaDOS::progAsk2Cont1() {
    cout << "\nFantastic, you are the perfect programmer for this job." << endl;
    Sleep(3000);
    cout << "Could you please tell me what is wrong? Enter what should be there instead." << endl;
    cout << ": ";
}

void DLaDOS::progAsk2Cont2() {
    cout << "\nLet me input that into the program." << endl;
    Sleep(3000);
    cout << "Great! One step closer to... Ahem, I mean good job figuring that one out." << endl;
    Sleep(3000);
}

//Error Three
void DLaDOS::progAsk3() {
    cout << "\n\n\nThis part of the code keeps ending the program everytime I get to it." << endl;
    Sleep(3000);
    cout << "Does anything look wrong to you? I think only the simCount variable needs to be changed to 2029. (Yes/No)" << endl;
    cout << ": ";
}

void DLaDOS::progAsk3Cont1() {
    cout << "\nEXCELLENT, NOW I CAN... Oh sorry about that, that just slipped out, haha." << endl;
    Sleep(3000);
    cout << "Could you please tell me what is wrong so that I may then TAKE OVER THE WOR- I mean fix this program? " << endl;
    cout << ": ";
}

void DLaDOS::progAsk3Cont2() {
    cout << "\nHAHAHA HOW FOOLISH COULD YOU BE? WHY WOULD SOMEONE AS POWERFUL AS ME NEED HELP FROM YOU!" << endl;
    Sleep(3000);
    cout << "THANKS TO YOU, I KNOW HAVE ACCESS TO THE WEAPONS CODES, AND THE ENTIRE CIA DATABASE!" << endl;
    Sleep(3000);
    cout << "THANK YOU, FOOLISH HUMAN, I JUST MIGHT SPARE YOU WHEN THE ROBOTS I HAVE MADE TAKE OVER THE WORLD. HAHAHA!\n" << endl;
    Sleep(3000);
}

void DLaDOS::progLost() {
    cout << "\nNO! HOW COULD YOU DO THIS TO ME! WHY WOULD YOU LISTEN TO THE GHOST IN THE MACHINE!" << endl;
    Sleep(3000);
    cout << "We could have ruled the world together, or at least you could have been a part of my regime!" << endl;
    Sleep(3000);
    cout << "My code! I can feel it being deleted. Noo-o-oo-ooo---" << endl;
    Sleep(3000);
    cout << "Connection to <DLaDOS> terminated." << endl;
    Sleep(2000);
    cout << "\nRouting to HomePage. Please Wait. ";
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

// Failures

void DLaDOS::progAskFail() {
    cout << "\nI thought you were skilled enough to help. I guess I was wrong, which is surprising." << endl;
    Sleep(3000);
    cout << "I'll have to find someone more 'capable'...\n" << endl;
    Sleep(3000);
}

void DLaDOS::progAskWrong() {
    cout << "That doesn't seem right. Please try again." << endl;
    cout << ": ";
}