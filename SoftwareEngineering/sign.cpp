#include "View.h"


void signUpView(Managing& managing) {
	string name;
	string address;
	int phoneNumber;
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

	signUp(managing, name, address, phoneNumber, ID, password, gender);
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
	cout << "ID : " << managing.user_ID << "\n�̸� : " << managing.user_name << "\n���� : " << managing.user_gender << "\n����ȣ : " << managing.user_phoneNumber << "\n�ּ� : " << managing.user_address << "\n\n" << endl;
}