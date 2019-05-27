#include "Controler.h"

void Init(struct Managing& managing) {
	//root계정
	managing.memberList.push_back(new Member("root", "root", 0, 0, "root", "root", "root"));

	//기본 상품
	managing.stand.push_back(new Product("상의", "이쁜 티셔츠", 3000, 3));
	managing.stand.push_back(new Product("하의", "멋진 청바지", 5000, 4));

}