#pragma once
#include <iostream>
#include <string>
#include "Model.h"
#include "View.h"

Managing managing;


int main() {
	int mode = -1;
	Init(managing);

	while (mode != 0) {
		while (managing.usingMember == nullptr) {
			cout << "*************쇼핑몰***************" << endl;
			cout << "1. 로그인\n2. 회원가입\n" << endl;
			cin >> mode;
			if (mode == 1) {
				system("cls");
				signInView(managing);
			}
			else if (mode == 2) {
				system("cls");
				signUpView(managing);
			}
			else if (mode == 3) {
				system("cls");

			}
		}
		cout << "1. 상품 목록보기\n2. 회원정보 보기\n3. 로그아웃\n4. 장바구니 담기\n5. 장바구니 상품 구매\n";
		if (managing.usingMember->GetID().compare("root")==0) {
			cout << "9. 상품등록\n";
		}
		cout << "0. 종료" << endl;
		cin >> mode;
		switch (mode) {
		case 1:
			standView(managing);
			break;
		case 2:
			statsView(managing);
			break;
		case 3:
			signOutView(managing);
			break;
		case 4:
			basketView(managing);
			break;
		case 5:
			purchaseView(managing);
			break;
		case 9:
			registProductView(managing);
			break;
		}
	}


}








