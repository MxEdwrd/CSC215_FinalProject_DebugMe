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
void Skynet::progWin() {
	cout << "\n\nCongradulations, Agent " << player << ". Because of you, we were able to stop DLaDOS from taking over the SkyNet." << endl;
	Sleep(3000);
	cout << "We intercepted this message from his system a few weeks ago: " << objective << "." << endl;
	Sleep(3000);
	cout << "Without you, DLaDOS would've been able to take over the SkyNet and fulfill whatever devious plans he had generated." << endl;
	Sleep(3000);
	cout << "Thank you again, Agent " << player << "." << endl;
	Sleep(3000);
	cout << "\nConnection Terminated" << endl;
	Sleep(2000);
}