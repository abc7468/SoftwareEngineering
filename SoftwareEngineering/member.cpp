#include "Model.h"

Member::Member() {};
Member::Member(const string name, const string address, int phoneNumber, const string ID, const string password, const string gender)
	:User(name, address, phoneNumber),ID(ID),password(password),gender(gender)
{

};

Member::~Member() {};