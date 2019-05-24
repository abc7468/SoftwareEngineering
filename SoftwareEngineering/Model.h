#pragma once
#include <string>
#include <vector>

using namespace std;




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
	vector<Product> GetBasket();
	vector<Product> SetBasket();

private:
	string ID;
	string password;
	string gender;
	vector <Product> basket;
};

class Manager : public Member {
public:

private:

};

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



	
typedef struct Managing{ 
	vector<Product*> stand;
	vector<Member*> memberList;
}Managing;

