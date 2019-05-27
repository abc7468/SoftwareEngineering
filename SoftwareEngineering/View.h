#pragma once

#include <iostream>
#include "Model.h"
#include "Controler.h"
#include "Managing.h"
#include <iostream>
using namespace std;

//상품 목록보기
void standView(Managing& managing);


//장바구니
void basketView(Managing& managing);

//상품 구매
void purchaseView(Managing& managing);


//회원 정보
void statsView(Managing& managing);

//회원가입
void signUpView(Managing& managing);

//로그인
void signInView(Managing& managing);

//로그아웃
void signOutView(Managing& managing);

//상품 추가
void registProductView(Managing& managing);

