#pragma once
#include "User.h"
class Member : public User
{
private:
	std::string ID;
	std::string password;

public:
	Member();
	~Member();
};

