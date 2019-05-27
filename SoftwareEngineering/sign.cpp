#include "View.h"


void signUpView(Managing& managing) {
	string name;
	string address;
	int phoneNumber;
	int money;
	string ID;
	string password;
	string gender;
	cout << "ȸ������ �� �Դϴ�." << endl;
	cout << "�̸� : ";
	cin >> name ;
	cout << "\nID : ";
	cin >> ID;
	cout << "\n��й�ȣ : ";
	cin >> password;
	cout << "\n�ּ� : ";
	cin >> address;
	cout << "\n���� : ";
	cin >> gender;
	cout << "\n����ȣ : ";
	cin >> phoneNumber;
	cout << "\n������ : ";
	cin >> money;


	signUp(managing, name, address, phoneNumber, money, ID, password, gender);
}


void signInView(Managing& managing) {
	string ID;
	string password;
	cout << "�α��� �� �Դϴ�." << endl;
	cout << "ID : ";
	cin >> ID;
	cout << "\npassword : ";
	cin >> password;
	signIn(managing, ID, password);

}



void signOutView(Managing& managing) {
	signOut(managing);
	system("cls");
	cout << "�α׾ƿ� �ƽ��ϴ�." << endl;
}

void statsView(Managing& managing) {
	system("cls");
	cout << "ID : " << managing.usingMember->GetID() << "\n�̸� : " << managing.usingMember->GetName() << "\n���� : " << managing.usingMember->GetGender() << "\n����ȣ : " << managing.usingMember->GetPhoneNumber() << "\n�ּ� : " << managing.usingMember->GetAddress() <<"\n������ : " <<managing.usingMember->GetMoney() <<"\n" << endl;
	
	if (managing.usingMember->basket.size() == 0) {
		cout << "��ٱ��ϰ� ������ϴ�.\n\n\n" << endl;
	}
	else {
		cout << "��ٱ��� ���\n\n" << endl;
		for (int i = 0; i < managing.usingMember->basket.size(); i++) {
			cout << managing.usingMember->basket[i].GetName() << endl;
		}
		
	}

}