#include "Controler.h"

void registerProduct(struct Managing& managing, const string name, const string category, int price, int spare) {

	Product* newProduct = new Product(category, name, price, spare);

	managing.productName.push_back(newProduct->GetName());
	managing.productCategory.push_back(newProduct->GetCategory());
	managing.productPrice.push_back(newProduct->GetPrice());
	managing.productSpare.push_back(newProduct->GetSpare());


	cout << name << " 등록 완료" << endl;
}