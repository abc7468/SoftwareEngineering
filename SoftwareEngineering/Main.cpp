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
			cout << "*************���θ�***************" << endl;
			cout << "1. �α���\n2. ȸ������\n" << endl;
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
		cout << "1. ��ǰ ��Ϻ���\n2. ȸ������ ����\n3. �α׾ƿ�\n4. ��ٱ��� ���\n5. ��ٱ��� ��ǰ ����\n";
		if (managing.usingMember->GetID().compare("root")==0) {
			cout << "9. ��ǰ���\n";
		}
		cout << "0. ����" << endl;
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








