#include "Model.h"


Product::Product(const string category, const string name, int price, int spare) 
	:category(category), name(name), price(price), spare(spare)
{

}

Product::Product(){}
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

int Product::DecSpare()
{
	spare = spare - 1;
	return spare;
}

void Product::SetSpare(int inputSpare)
{
	spare = inputSpare;
}




Product::~Product() {}