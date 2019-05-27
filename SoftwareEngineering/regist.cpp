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
	system("cls");
	int size = managing.stand.size();
	cout << "\n\nNo\tī�װ�\t��ǰ�̸�\t����\t��������\n";
	for (int i = 0; i < size; i++) {
		cout << i + 1 << ".\t" << managing.stand[i]->GetCategory() << "\t\t" << managing.stand[i]->GetName() << "\t\t" << managing.stand[i]->GetPrice() << "\t" << managing.stand[i]->GetSpare() << endl;
	}
	cout << "\n\n" << endl;
}

void basketView(Managing & managing)
{
	int index;
	standView(managing);
	cout << "��� ��ǰ�� ��ٱ��Ͽ� �����ðڽ��ϱ�?" << endl;
	cin >> index;
	index -= 1;

	inputBasket(managing, index);
	cout << "\n" << index + 1 << "�� ��ǰ�� ��ٱ��Ͽ� ��ҽ��ϴ�.\n";
}

void purchaseView(Managing & managing)
{

	purchase(managing);
}

