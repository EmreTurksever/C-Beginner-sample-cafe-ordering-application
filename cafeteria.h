#pragma once
#ifndef _CAFETERIA_H__
#define _CAFETERIA_H__

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;



enum FChoice { // FOOD CHOICE
DRINK = 1,
FOOD
};


class Cafe {
private:


public:
	void Menu();
	string foodName;

	int choice0=0;
	int d_choice = 0;
	int f_choice = 0;
	char choiceM;

	string order;
	int cost	= 0;
	int balance = 300;

	void ChoiceFood();
	void DrinkList();
	void FoodList();
	void OrderList();
};



#endif

