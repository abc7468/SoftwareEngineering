#include <iostream>
#include <string>
#include "Model.h"
using namespace std;

int main() {
	string name;
	string category;
	int price;
	int spare;
	cout << "1. ȸ������" << "\n" << "2. �α���" << endl;
	cin >> name >> category >> price >> spare;
	Product a(category, name, price, spare);
	string aName = a.GetName();
	cout << aName;

}