#include "Controler.h"

void Init(struct Managing& managing) {
	//root계정
	managing.memberID.push_back("root");
	managing.memberPassword.push_back("root");
	managing.memberName.push_back("root");
	managing.memberPhoneNumber.push_back(0);
	managing.memberGender.push_back("root");
	managing.memberAddress.push_back("root");

	//기본 상품
	managing.productCategory.push_back("상의");
	managing.productName.push_back("티셔츠");
	managing.productPrice.push_back(1000);
	managing.productSpare.push_back(3);

	managing.productCategory.push_back("하의");
	managing.productName.push_back("청바지");
	managing.productPrice.push_back(2000);
	managing.productSpare.push_back(4);
}