#pragma once
#include <iostream>
#include <string>
#include "Model.h"
#include "View.h"



int main() {
	Managing managing;
	signUpView(managing);
}









//int main() {
//	
//	string name;
//	string category;
//	int price;
//	int spare;
//	cout << "1. ȸ������" << "\n" << "2. �α���" << endl;
//	cin >> name >> category >> price >> spare;
//	Product* a = new Product(category, name, price, spare);
//	string aName = a->GetName();
//	cout << aName;
//	Managing managing;
//	managing.stand.push_back(a);
//	cout << managing.stand[0]->GetCategory();
//}