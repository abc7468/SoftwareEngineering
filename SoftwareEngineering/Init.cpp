#include "Controler.h"

void Init(struct Managing& managing) {
	//root����
	managing.memberID.push_back("root");
	managing.memberPassword.push_back("root");
	managing.memberName.push_back("root");
	managing.memberPhoneNumber.push_back(0);
	managing.memberGender.push_back("root");
	managing.memberAddress.push_back("root");

	//�⺻ ��ǰ
	managing.productCategory.push_back("����");
	managing.productName.push_back("Ƽ����");
	managing.productPrice.push_back(1000);
	managing.productSpare.push_back(3);

	managing.productCategory.push_back("����");
	managing.productName.push_back("û����");
	managing.productPrice.push_back(2000);
	managing.productSpare.push_back(4);
}