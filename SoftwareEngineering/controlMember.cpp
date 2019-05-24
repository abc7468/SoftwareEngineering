#include "Controler.h"

void signUp(struct Managing managing, const string name, const string address, int phoneNumber, const string ID, const string password, const string gender) {
	Member* newMember = new Member(name, address, phoneNumber, ID, password, gender); 
	managing.memberList.push_back(newMember);
}