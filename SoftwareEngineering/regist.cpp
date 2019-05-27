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
	system("cls");
	int size = managing.stand.size();
	cout << "\n\nNo\t카테고리\t상품이름\t가격\t남은수량\n";
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ".\t" << managing.stand[i]->GetCategory() << "\t\t" << managing.stand[i]->GetName() << "\t\t" << managing.stand[i]->GetPrice() << "\t" << managing.stand[i]->GetSpare() << endl;
	}
	cout << "\n\n" << endl;
}

void basketView(Managing & managing)
{
	int index;
	standView(managing);
	cout << "몇번 상품을 장바구니에 담으시겠습니까?" << endl;
	cin >> index;
	index -= 1;

	inputBasket(managing, index);
	cout << "\n" << index + 1 << "번 상품을 장바구니에 담았습니다.\n";
}

void purchaseView(Managing & managing)
{

	purchase(managing);
}

