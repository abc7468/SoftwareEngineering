#include "Controler.h"

void Init(struct Managing& managing) {
	//root����
	managing.memberList.push_back(new Member("root", "root", 0, 0, "root", "root", "root"));

	//�⺻ ��ǰ
	managing.stand.push_back(new Product("����", "�̻� Ƽ����", 3000, 3));
	managing.stand.push_back(new Product("����", "���� û����", 5000, 4));

}