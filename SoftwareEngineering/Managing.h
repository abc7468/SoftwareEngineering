#pragma once

typedef struct Managing {

	string user_ID;
	string user_name;
	string user_gender;
	string user_address;
	int user_phoneNumber;

	vector <string> memberName;
	vector <string> memberID;
	vector <string> memberPassword;
	vector <string> memberGender;
	vector <string> memberAddress;
	vector <int> memberPhoneNumber;

	vector <string> productName;
	vector <string> productCategory;
	vector <int> productSpare;
	vector <int> productPrice;
}Managing;