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

private:
	int price;
	int spare;
	string category;
	string name;
};


class User {
public:
	User();
	User(const string name, const string address, int phoneNumber);
	~User();

	string GetName();
	string GetAddress();
	int GetPhoneNumber();
private:
	string name;
	string address;
	int phoneNumber;
};

class Member : public User {
public:
	Member();
	Member(const string name, const string address, int phoneNumber, const string ID, const string password, const string gender);
	~Member();
	vector<Product> GetBasket();
	vector<Product> SetBasket();
	string GetID();
	string GetPassword();
	string GetGender();
private:
	string ID;
	string password;
	string gender;
	vector <Product> basket;
};

class Root : public Member {
public:
	void registerProduct();
};





	


