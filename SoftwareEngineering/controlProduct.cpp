#include "Controler.h"

void registerProduct(struct Managing& managing, const string name, const string category, int price, int spare) {

	Product* newProduct = new Product(category, name, price, spare);

	managing.stand.push_back(newProduct);


	cout << name << " ��� �Ϸ�" << endl;
}

void inputBasket(Managing & managing, int index)
{
	Product product = *managing.stand[index];
	managing.usingMember->SetBasket(product);
}

void purchase(Managing & managing) {
	int temp;
	int range = managing.usingMember->basket.size();
	int standRange = managing.stand.size();
	int totalPrice=0;
	if (range == 0) {
		cout << "��ٱ��ϰ� ������ϴ�.";
	}
	else {
		for (int i = 0; i < range; i++) {
			totalPrice += managing.usingMember->basket[i].GetPrice();
		}
		if (totalPrice > managing.usingMember->GetMoney()) {
			system("cls");
			cout << "���� �����մϴ�\n" << endl;
			return;
		}
		for (int i = 0; i < range; i++) {
			for (int j = 0; j < standRange; j++) {
				if (managing.usingMember->basket[i].GetName().compare(managing.stand[j]->GetName()) == 0) {
					managing.stand[j]->DecSpare();
				}
			}
		}
		managing.usingMember->SetMoney(managing.usingMember->GetMoney() - totalPrice);
		managing.usingMember->basket.clear();
		system("cls");
		cout << "���Ű� �Ϸ� �ƽ��ϴ�.\n"<< managing.usingMember->GetName() << "ȸ������ ���� �ݾ��� " << managing.usingMember->GetMoney() <<"�Դϴ�"<<endl;
	}
}