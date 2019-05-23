#include "Model.h"

Product::Product() {}

Product::Product(const string category, const string name, int price, int spare) 
	:category(category), name(name), price(price), spare(spare)
{

}


int Product::GetPrice() {
	return price;
}
int Product::GetSpare() {
	return spare;
}
string Product::GetCategory() {
	return category;
}
string Product::GetName() {
	return name;
}



Product::~Product() {}