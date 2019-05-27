#pragma once
#include <string>
#include <vector>

using namespace std;

class Product {
public:
	Product();
	Product(const string category, const string name, int price, int spare);
	~Product();
	int GetPrice();
	int GetSpare();
	string GetCategory();
	string GetName();
	int DecSpare();\
	void SetSpare(int inputSpare);
private:
	int price;
	int spare;
	string category;
	string name;
};


class User {
public:
	User();
	User(const string name, const string address, int phoneNumber, int money);
	~User();

	string GetName();
	string GetAddress();
	int GetPhoneNumber();
	int GetMoney();
	void SetMoney(int spareMoney);
private:
	string name;
	string address;
	int phoneNumber;
	int money;
};

class Member : public User {
public:
	Member();
	Member(const string name, const string address, int phoneNumber, int money,const string ID, const string password, const string gender);
	~Member();
	void SetBasket(Product& product);
	string GetID();
	string GetPassword();
	string GetGender();
	int GetPoint();
	vector <Product> basket;
private:
	string ID;
	string password;
	string gender;
	int point=0;

};


	


