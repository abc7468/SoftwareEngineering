#include "View.h"


void signUpView(Managing& managing) {
	string name;
	string address;
	int phoneNumber;
	int money;
	string ID;
	string password;
	string gender;
	cout << "회원가입 중 입니다." << endl;
	cout << "이름 : ";
	cin >> name ;
	cout << "\nID : ";
	cin >> ID;
	cout << "\n비밀번호 : ";
	cin >> password;
	cout << "\n주소 : ";
	cin >> address;
	cout << "\n성별 : ";
	cin >> gender;
	cout << "\n폰번호 : ";
	cin >> phoneNumber;
	cout << "\n가진돈 : ";
	cin >> money;


	signUp(managing, name, address, phoneNumber, money, ID, password, gender);
}


void signInView(Managing& managing) {
	string ID;
	string password;
	cout << "로그인 중 입니다." << endl;
	cout << "ID : ";
	cin >> ID;
	cout << "\npassword : ";
	cin >> password;
	signIn(managing, ID, password);

}



void signOutView(Managing& managing) {
	signOut(managing);
	system("cls");
	cout << "로그아웃 됐습니다." << endl;
}

void statsView(Managing& managing) {
	system("cls");
	cout << "ID : " << managing.usingMember->GetID() << "\n이름 : " << managing.usingMember->GetName() << "\n성별 : " << managing.usingMember->GetGender() << "\n폰번호 : " << managing.usingMember->GetPhoneNumber() << "\n주소 : " << managing.usingMember->GetAddress() <<"\n가진돈 : " <<managing.usingMember->GetMoney() <<"\n" << endl;
	
	if (managing.usingMember->basket.size() == 0) {
		cout << "장바구니가 비었습니다.\n\n\n" << endl;
	}
	else {
		cout << "장바구니 목록\n\n" << endl;
		for (int i = 0; i < managing.usingMember->basket.size(); i++) {
			cout << managing.usingMember->basket[i].GetName() << endl;
		}
		
	}

}