#include "Model.h"

User::User() {};
User::User(const string name, const string address, int phoneNumber) 
	:name(name),address(address),phoneNumber(phoneNumber)
{

}
string User::GetName() {
	return name;
}
string User::GetAddress() {
	return address;
}
int User::GetPhoneNumber() {
	return phoneNumber;
}

User::~User(){};