#pragma once
#include<iostream>
#include<algorithm>
#include<vector>
#include "Model.h"
#include "View.h"
using namespace std;

void Init(struct Managing& managing);
void signUp(struct Managing& managing, const string name, const string address, int phoneNumber, const string ID, const string password, const string gender);
void signIn(struct Managing& managing, const string ID, const string password);
void signOut(struct Managing& managing);
void registerProduct(struct Managing& managing, const string name, const string category, int price, int spare);