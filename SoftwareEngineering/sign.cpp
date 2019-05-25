#include "View.h"


void signUpView(Managing& managing) {
	string name;
	string address;
	int phoneNumber;
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

	signUp(managing, name, address, phoneNumber, ID, password, gender);
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
	cout << "ID : " << managing.user_ID << "\n이름 : " << managing.user_name << "\n성별 : " << managing.user_gender << "\n폰번호 : " << managing.user_phoneNumber << "\n주소 : " << managing.user_address << "\n\n" << endl;
}