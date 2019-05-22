#pragma once
#include<string>
#include<vector>
class User
{
private:
	std::string name;
	std::string phone;
	std::string address;
	std::vector <std::string> shoppingBasket;
public:
	
	User();
	~User();
};

