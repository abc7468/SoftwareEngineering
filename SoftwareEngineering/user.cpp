#include "Model.h"

User::User() {};
User::User(const string name, const string address, int phoneNumber, int money) 
	:name(name),address(address),phoneNumber(phoneNumber),money(money)
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

int User::GetMoney()
{
	return money;
}

void User::SetMoney(int spareMoney)
{
	money = spareMoney;
}

User::~User(){};