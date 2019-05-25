#include "View.h"

void registProductView(struct Managing& managing) {
	string name;
	string category;
	int price;
	int spare;
	cout << "상품 이름 : ";
	cin >> name;
	cout << "\n카테고리 : ";
	cin >> category;
	cout << "\n가격 : ";
	cin >> price;
	cout << "\n갯수 : ";
	cin >> spare;

	registerProduct(managing, name, category, price, spare);
}

void standView(Managing& managing) {
	int size = managing.productName.size();
	cout << "\n\nNo\t카테고리\t상품이름\t가격\t남은수량\n";
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ".\t" << managing.productCategory[i] << "\t\t" << managing.productName[i] << "\t\t" << managing.productPrice[i] << "\t" << managing.productSpare[i] << endl;
	}
	cout << "\n\n" << endl;
}