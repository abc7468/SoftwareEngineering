#include "View.h"

void registProductView(struct Managing& managing) {
	string name;
	string category;
	int price;
	int spare;
	cout << "��ǰ �̸� : ";
	cin >> name;
	cout << "\nī�װ� : ";
	cin >> category;
	cout << "\n���� : ";
	cin >> price;
	cout << "\n���� : ";
	cin >> spare;

	registerProduct(managing, name, category, price, spare);
}

void standView(Managing& managing) {
	int size = managing.productName.size();
	cout << "\n\nNo\tī�װ�\t��ǰ�̸�\t����\t��������\n";
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ".\t" << managing.productCategory[i] << "\t\t" << managing.productName[i] << "\t\t" << managing.productPrice[i] << "\t" << managing.productSpare[i] << endl;
	}
	cout << "\n\n" << endl;
}