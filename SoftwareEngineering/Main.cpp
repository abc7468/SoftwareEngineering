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
		while (managing.user_ID.empty() != 0) {
			cout << "*************쇼핑몰***************" << endl;
			cout << "1. 로그인\n2. 회원가입" << endl;
			cin >> mode;
			if (mode == 1) {
				system("cls");
				signInView(managing);
			}
			else if (mode == 2) {
				system("cls");
				signUpView(managing);
			}
		}
		cout << "1. 상품 목록보기\n2. 회원정보 보기\n3. 로그아웃\n0. 종료\n" << endl;
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
		}
	}


}








