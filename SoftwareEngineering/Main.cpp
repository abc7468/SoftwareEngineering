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
			cout << "*************���θ�***************" << endl;
			cout << "1. �α���\n2. ȸ������" << endl;
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
		cout << "1. ��ǰ ��Ϻ���\n2. ȸ������ ����\n3. �α׾ƿ�\n0. ����\n" << endl;
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








