#include "Controler.h"
void signUp(Managing& managing, const string name, const string address, int phoneNumber, int money, const string ID, const string password, const string gender) {
	managing.memberList.push_back(new Member(name, address, phoneNumber, money, ID, password, gender)); 
	
}

void signIn(Managing& managing, const string ID, const string password) {
	int range = managing.memberList.size();
	for (int i = 0; i < range; i++) {
		if (managing.memberList[i]->GetID().compare(ID) == 0) {
			if (managing.memberList[i]->GetPassword().compare(password) != 0) {
				system("cls");
				cout << "��й�ȣ�� Ʋ�Ƚ��ϴ�." << endl;
				return;
			}
			else {
				managing.usingMember = managing.memberList[i];
				system("cls");
				cout << managing.usingMember->GetName() << "�� �ݰ����ϴ�." << endl;
				return;
			}
			
		}
	}
	cout << "���� ID �Դϴ�." << endl;;
	
}

void signOut(struct Managing& managing) {
	managing.usingMember = nullptr;
}