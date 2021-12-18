#pragma once

class DLaDOS {
public: // Public class for DLaDOS
	void introduction();
	void progDesc1();
	void progDesc2();
	void progDesc3();

	void progAsk();
	void progAsk2();
	void progAsk3();

	void progAskCont1();
	void progAskCont2();

	void progAsk2Cont1();
	void progAsk2Cont2();

	void progAsk3Cont1();
	void progAsk3Cont2();

	void progAskFail();
	void progAskWrong();

	void progLost();

	string objective = "Objective: Take Over Skynet";

private: // Private class for DLaDOS
	int key = 0;
};
