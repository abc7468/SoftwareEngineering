#include "View.h"


void signUpView(struct Managing managing) {
	string name;
	string address;
	int phoneNumber;
	string ID;
	string password;
	string gender;
	cin >> name >> address >> phoneNumber >> ID >> password >> gender;
	signUp(managing, name, address, phoneNumber, ID, password, gender);
}
