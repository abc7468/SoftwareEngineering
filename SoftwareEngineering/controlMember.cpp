#include "Controler.h"
void signUp(Managing& managing, const string name, const string address, int phoneNumber, const string ID, const string password, const string gender) {
	Member* newMember = new Member(name, address, phoneNumber, ID, password, gender); 
	managing.memberID.push_back(newMember->GetID());
	managing.memberPassword.push_back(newMember->GetPassword());
	managing.memberName.push_back(newMember->GetName());
	managing.memberPhoneNumber.push_back(newMember->GetPhoneNumber());
	managing.memberGender.push_back(newMember->GetGender());
	managing.memberAddress.push_back(newMember->GetAddress());
}

void signIn(Managing& managing, const string ID, const string password) {
	int range = managing.memberID.size();
	for (int i = 0; i < range; i++) {
		if (managing.memberID[i].compare(ID) == 0) {
			if (managing.memberPassword[i].compare(password) != 0) {
				system("cls");
				cout << "비밀번호가 틀렸습니다." << endl;
				return;
			}
			else {
				managing.user_ID = managing.memberID[i];
				managing.user_gender = managing.memberGender[i];
				managing.user_name = managing.memberName[i];
				managing.user_phoneNumber = managing.memberPhoneNumber[i];
				managing.user_address = managing.memberAddress[i];
				system("cls");
				cout << managing.user_name << "님 반갑습니다." << endl;
				return;
			}
			
		}
	}
	cout << "없는 ID 입니다." << endl;;
	
}

void signOut(struct Managing& managing) {
	managing.user_ID.clear();
	managing.user_gender.clear();
	managing.user_name.clear();
	managing.user_address.clear();
}