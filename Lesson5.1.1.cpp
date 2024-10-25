/*1. Вивести на екран усі числа від нуля до введеного користувачем числа.
2. Користувач вводить дві межі діапазону, вивести на екран усі числа з цього діапазону. 
Передбачити, щоб користувач міг вводити межі діапазону в довільному порядку.
■ вивести всі парні числа з діапазону.
■ вивести всі непарні числа з діапазону.
■ вивести всі числа, кратні семи.
3. Користувач вводить дві межі діапазону. Порахувати суму всіх чисел діапазону.
4. Користувач з клавіатури вводить числа. Порахувати їхню суму і вивести на екран, щойно користувач введе нуль.*/

#include<iostream>
using namespace std;
int main() {
	int n, a, x, x1, x2, sum = 0;
	cout << "Oberite zadachy:\n"
		<< "1. Vuvedenna chisel do dannogo chisla\n"
		<< "2. Vuvedenna chisel v zadanomy diapazoni\n"
		<< "3. Vuvedenna symu chisel zadanogo diapazony\n"
		<< "4. Vuvedenna symy chisel pru natuskanni \"0\"\n";
	cin >> n;
	switch (n) {
	case 1: {
		cout << "Vvedite chislo: ";
		cin >> x;
		cout << "Riad chisel:\n";
		for (int i = 0; i <= x; i++) {
			cout << i << ' ';
		}
	}
		  break;
	case 2: {
		cout << "Vvedite dva chisla: ";
		cin >> x1 >> x2;
		cout << "Diapazon chisel:\n";
		if (x1 < x2) {
			x = x1;
			x1 = x2;
			x2 = x;
		}
		for (int i = x2; i <= x1; i++) {
			cout << i << ' ';
		}
		cout << "\n\nOberite vuvod chisel:\n"
			<< "1. Vuvestu vsi parni chusla diapazony\n"
			<< "2. Vuvestu vsi neparni chusla diapazony\n"
			<< "3. Vuvestu vsi chusla kratni semu\n";
		cin >> a;
		switch (a) {
		case 1: {
			if (x1 < x2) {
				x = x1;
				x1 = x2;
				x2 = x;
			}
			for (int i = x2; i <= x1; i++) {
				if (i % 2 == 0)	cout << i << ' ';
			}
			cout << endl;
		}
			  break;
		case 2: {
			if (x1 < x2) {
				x = x1;
				x1 = x2;
				x2 = x;
			}
			for (int i = x2; i <= x1; i++) {
				if (i % 2 != 0)	cout << i << ' ';
			}
			cout << endl;
		}
			  break;
		case 3: {
			if (x1 < x2) {
				x = x1;
				x1 = x2;
				x2 = x;
			}
			for (int i = x2; i <= x1; i++) {
				if (i % 7 == 0)	cout << i << ' ';
			}
			cout << endl;
		}
			  break;
		default:cout << "Ne verno obranui variant!";
		}
	}
		  break;
	case 3: {
		cout << "Vvedite dva chisla: ";
		cin >> x1 >> x2;
		cout << "Diapazon chisel:\n";
		if (x1 < x2) {
			x = x1;
			x1 = x2;
			x2 = x;
		}
		for (int i = x2; i <= x1; i++) {
			cout << i << ' ';
			sum += i;
		}
		cout << "\nSyma vsih chisel diapazony ravna: " << sum << endl;
	}
		  break;
	case 4: {
		cout << "Vvodite chisla. \nKolu potribno porahyvatu ihny symy natusnit \"0\" ta \"enter\"\n";
		do {
			cin >> x;
			sum += x;
		} while (x != 0);
		
		cout << "\nSyma vsih chisel ravna: " << sum << endl;
	}
		  break;
	default:cout << "Ne virno obranui variant!";
	}
}