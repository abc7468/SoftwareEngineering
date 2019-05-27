#pragma once
#include<vector>
typedef struct Managing {

	std::vector <Product*> stand;
	std::vector <Member*> memberList;
	Member* usingMember;
	string user_ID;
	string user_name;
	string user_gender;
	string user_address;
	int user_phoneNumber;
	int user_money;
}Managing;