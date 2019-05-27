#include "Model.h"

Member::Member() {};
Member::Member(const string name, const string address, int phoneNumber, int money, const string ID, const string password, const string gender)
	:User(name, address, phoneNumber, money),ID(ID),password(password),gender(gender)
{

};

void Member::SetBasket(Product& product)
{
	basket.push_back(product);
}

string Member::GetID() {
	return ID;
}
string Member::GetPassword() {
	return password;
}
string Member::GetGender() {
	return gender;
}

int Member::GetPoint()
{
	return point;
}

Member::~Member() {

}

