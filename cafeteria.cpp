#include "cafeteria.h"

void Cafe::OrderList() {

	cout << "Kalan Bakiye " <<balance<< endl;


}

void Cafe::Menu() {
	Cafe c;
	cout << "-------------H O S G E L D I N I Z-----------	"	<< endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||||||||"	<< endl;
	cout << "           Icecekler  Listesi         			"	<< endl;
	cout << "1)Kola	= 1O TL								"	<< endl;
	cout << "2)Ayran	= 5 TL								"	<< endl;
	cout << "3)Soda	= 3 TL								"	<< endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||||||||"	<< endl;
	cout << "	        Yiyecekler  Listesi        			"	<< endl;
	cout << "4)Kebab	= 70 TL								"	<< endl;
	cout << "5)Doner	= 30 TL								"	<< endl;
	cout << "6)Salata = 45 TL								"	<< endl;
	cout << "|||||||||||||||||||||||||||||||||||||||||||||||"	<< endl;
	cout<<"-------------------------------------------------"	<< endl;
	cout << "0)Cikis										"	<< endl;
	cout << "------------------------------------------------"	<< endl;
} 
void Cafe::DrinkList() {
	cout << "           Icecekler  Listesi         			"	<< endl;
	cout << "1)Kola		= 1O TL								"	<< endl;
	cout << "2)Ayran	= 5 TL								"	<< endl;
	cout << "3)Soda		= 3 TL								"	<< endl;

}

void Cafe::FoodList() {
	cout << "	        Yiyecekler  Listesi        			"	<< endl;
	cout << "4)Kebab= 70 TL								"		<< endl;
	cout << "5)Doner= 30 TL								"		<< endl;
	cout << "6)Salata= 45 TL								"	<< endl;
}
void Cafe::ChoiceFood() {

	Menu();

	cout << "lUTFEN BIR SECIM YAPINIZ" << endl<<endl;
	cout << "Icecekler Bolumu	=	1" << endl;
	cout << "Yiyecekler Bolumu	=	2" << endl;
	cout << "Cikis			=	0"	   << endl;



	do {

		cin >> choice0;

		switch (choice0) {
		case 0:
			if (choice0 == 0) {
				cout << "Cikis yapildi" << endl;
				exit(0);
			}
		case DRINK:
			system("cls");

			DrinkList();
			cout << endl;

			cout << "Secim yapiniz" << endl;

			cin >> d_choice;

			if (d_choice == 1) {

				balance -= 10;
				OrderList();

			}
			else if (d_choice == 2) {
				balance -= 10;
				OrderList();
			}
			else if (d_choice == 3) {
				balance -= 3;
				OrderList();
			}
			else {
				cout << "Yanlis secim yaptiðiniz icin cikis islemi yapildi" << endl;
				exit(0);
			}

			break;

		case FOOD:
			system("cls");

			FoodList();
			cout << endl;

			cout << "Secim yapiniz" << endl;
			cin >> f_choice;
			if (f_choice == 4) {
				balance -= 70;
				OrderList();
			}
			else if (f_choice == 5) {
				balance -= 30;
				OrderList();
			}
			else if (f_choice == 6) {
				balance -= 45;
				OrderList();
			}
			else {
				cout << "Yanlis secim yaptiðiniz icin cikis islemi yapildi" << endl;
				exit(0);
			}
			break;

		}
	} while (choice0 != 0);
	

}


