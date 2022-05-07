#include <iostream>
#include <Windows.h>
#include <locale.h>
#include <cmath>

using namespace std;

//неделя 1 домашка 2	
/*int main()
{
	//1
	setlocale(LC_ALL, "Russian");
	cout << "Barbiesize girl, детка влезет в твой карман"
		<< endl << "Barbiesize girl, и я больше не твоя"
		<< endl << "Barbiesize girl, ты поверишь в мой обман"
		<< endl << "Мой обман, и я больше не твоя"<<endl;

	//2
	cout << "\nEvery\n"
		<< "\t hunter \n"
		<< "\t \t wants \n"
		<< "\t \t \t to\n"
		<< "\t \t \t \t know \n"
		<< "\t \t \t \t \t where \n"
		<< "\t \t \t \t \t \t sits \n"
		<< "\t \t \t \t \t \t \t the \n"
		<< "\t \t \t \t \t \t \t \t pheasant. \n";

	//3
	cout << "\nПродам детей\n"
		<< "Вид: Человек-разумный\n"
		<< "Телефон:8-800-555-35-35\n"
		<< "8\t| 8 |\n"
		<< "800     |800|\n"
		<< "555     |555|\n"
		<< "35      |35 |\n"
		<< "35      |35 |\n\n";
}*/

//неделя 2 задание 1
/*int main()
{
	setlocale(LC_ALL, "Russian");

	//1
	float r1, r2, r3,r0;
	cout << endl<<"Введи 3 сопротивления "; cin >> r1 >> r2 >> r3;
	r0 = (r1 * r2 * r3) / (r1 + r2 + r3);
	cout <<endl<< r0<<endl;

	//2
	float l, r, pi=3.14,S;
	cout << "Введи длину окружности "; cin >> l;
	r = l / 2 * pi;
	S = pi * r * r;
	cout <<endl<< S<<endl;

	//3
	float v, t, a,s;
	cout << endl << "Введи скорость "; cin >> v;
	cout << endl << "Введи время "; cin >> t;
	cout << endl << "Введи ускорение "; cin >> a;
	s = (v * t) + ((a * t * t) / 2);
	cout << s;
}*/

//неделя 2 задание 2
/*int main()
{
	setlocale(LC_ALL, "Russian");
	
	//1
	float sec, min, hour;
	cin >> sec;
	cout << "Секунд " << sec << endl
		<< "Минут " << sec / 60 << endl
		<< "Часов " << sec / 3600<<endl;

	//2
	float dol;
	cin >> dol;
	cout << "Долларов " << (int)dol << endl
		<< "Центов " << (dol -(int)dol)*100<<endl;

	//3
	int day;
	cin >> day;
	cout << "Полных недель " << day / 7 << endl
		<< "Дней " << day % 7;

	//4
	float ras, time;
	cout << "Вычисление скорости бега\n";
	cout << "Введите длину дистанции(метров) "; cin >> ras;
	cout << "Введите время(мин.сек) "; cin >> time;
	cout << "Дистанция: " << ras
		<< "\nВремя: " << (int)time << "min " << (time - (int)time)*100 << "sek = " << (int)time * 60 + ((time - (int)time))*100
		<< "\nВы бежали со скоростью: "<<(ras/ ((int)time * 60 + ((time - (int)time)) * 100) )*3.6<< "км / ч";

	//5
	float proc, vklad;
	cout << "Введите сколько вложений "; cin >> vklad;
	cout << "Процент вклада ";cin >> proc;
	cout << vklad * ((proc / 12) / 100) << " в месяц";
}*/

//неделя 3 задание 1
/*int main()
{
	setlocale(LC_ALL, "Russian");
	
	//1
	int S, t;
	cout << "Введите расстояние (м) "; cin >> S;
	cout << "Введите время(с) "; cin >> t;
	cout << (S / t) * 3.6;

	//2
	float time1, time2;
	cout << "Введите время начала(ч.м) "; cin >> time1;
	cout << "Введите время окончания(ч.м) "; cin >> time2;
	cout << (int)
		(((int)time2 * 60) + ((time2 - (int)time2) * 100) 
			- ((int)time1 * 60) + ((time1 - (int)time1) * 100)) * 2;

	//3
	float rast, rashod, s1, s2, s3;
	cout << "Введите расстояние "; cin >> rast;
	cout << "Расход бензина на 100км "; cin >> rashod;
	cout << "Стоимостьо первого "; cin >> s1;
	cout << "Стоимость второго "; cin >> s2;
	cout << "Стоимость третьего "; cin >> s3;

	//4
	cout << rast * (s1 / rashod)<<endl;
	cout << rast * (s2 / rashod)<<endl;
	cout << rast * (s3 / rashod)<<endl;
}*/

//неделя 3 задание 2
/*int main()
{
	setlocale(LC_ALL, "Russian");

	//1
	int sec;
	cout << "Введите время, прошеднее с начала дня(сек) "; cin >> sec;
	cout << sec / 3600 << ':' << (sec%3600) / 60 << ':' << (sec% 3600) % 60;
	cout <<endl<< "Время до полуночи: " << (86400 - sec) / 3600 << ':' << ((86400 - sec) % 3600) / 60 << ':' << ((86400 - sec) % 3600) % 60;

	//2
	int sec;
	cout << "Введите время, прошеднее с начала рабочего дня(сек) "; cin >> sec;
	cout << sec / 3600 << ':' << (sec % 3600) / 60 << ':' << (sec % 3600) % 60;
	cout << endl << "Время до окончания: " << (28800 - sec) / 3600 << ':' << ((28800 - sec) % 3600) / 60 << ':' << ((28800 - sec) % 3600) % 60;
}*/

//неделя 4 задание 1
/*int main()
{
	setlocale(LC_ALL, "Russian");

	//1
	int chislo;
	cout << "Введите шестизначное число "; cin >> chislo;
	if (chislo < 1000000) {
		if ((chislo / 100000) + (chislo % 100000 / 10000) + (chislo % 10000 / 1000) == (chislo % 1000 / 100) + (chislo % 100 / 10) + (chislo % 10))
			cout << "Счастливое";
		else
			cout << "Несчастливое";
	}
	else
		cout << "Брат, перепиши число на другое";

	//2
	int ss;
	cout << "Введите четырехзначное число "; cin >> ss;
	if (ss < 10000)
		cout << (ss % 1000 / 100) * 1000 + (ss / 1000) * 100 + (ss % 10) * 10 + ss / 10 % 10;
	else
		cout << "Друг, перепиши пожалуйста";

	//3
	int arr[7],max;
	max = arr[0];
	for (int i = 0; i < 7; i++) {
		cin >> arr[i];
		if (a[i] > max)max = a[i];
	}
	cout << max;

	//4
	const int ob = 300;
	float rastAB, rastBC, mas;
	cout << "Введите расстояние от А до Б -- "; cin >> rastAB;
	cout << "Введите расстояние от Б до С -- "; cin >> rastBC;
	cout << "Введите массу груза -- "; cin >> mas;
	if (mas < 500){
		if (rastBC - (300 - rastAB) >= 0) {
			if (rastAB <= 300 && rastBC <= 300) cout << "Вам потребуется дозаправить " << rastBC - (300 - rastAB);
			else cout << "Вы помрете!";
		}
		else cout << "Вам потребуется дозаправить 0";
	}
	else if (mas < 1000) {
		if ((rastBC * 4) - (300 - rastAB * 4) >= 0) {
			if (rastAB * 4 <= 300 && rastBC * 4 <= 300) cout << "Вам потребуется дозаправить " << (rastBC * 4) - (300 - rastAB * 4);
			else cout << "Вы помрете!";
		}
		else cout << "Вам потребуется дозаправить 0";
	}
	else if (mas < 1500) {
		if ((rastBC * 4) - (300 - rastAB * 4) >= 0) {
			if (rastAB * 7 <= 300 && rastBC * 7 <= 300) cout << "Вам потребуется дозаправить " << (rastBC * 7) - (300 - rastAB * 7);
			else cout << "Вы помрете!";
		}
		else cout << "Вам потребуется дозаправить 0";
	}
	else if (mas < 2000) {
		if ((rastBC * 4) - (300 - rastAB * 4) >= 0) {
			if (rastAB * 9 <= 300 && rastBC * 9 <= 300) cout << "Вам потребуется дозаправить " << (rastBC * 9) - (300 - rastAB * 9);
			else cout << "Вы помрете!";
		}
		else cout << "Вам потребуется дозаправить 0";
	}
	else cout << "Вы не взлетите!";
}*/

//неделя 4 задание 2
/*
//1
int main() {
	setlocale(LC_ALL, "");
	int picc, dr, piccNum, drNum, otvet, colPicc = 0;
	float summa = 0;
	int cena1 = 5, cena2 = 7, cena3 = 6, cena4 = 8, cena5 = 3, cena6 = 4, cena7 = 2;
	cout << "------------------------------------\n"
		<< "|--------------МЕНЮ----------------|\n"
		<< "|             ПИЦЦЫ                |\n"
		<< "|1)Первая пицца(1)---------------" << cena1 << "$|\n"
		<< "|2)Вторая пицца(2)---------------" << cena2 << "$|\n"
		<< "|3)Третья пицца(3)---------------" << cena3 << "$|\n"
		<< "|4)Четвертая пицца(4)------------" << cena4 << "$|\n|                                  |\n"
		<< "|            НАПИТКИ               |\n"
		<< "|1)Первый напиток(5)-------------" << cena5 << "$|\n"
		<< "|2)Второй напиток(6)-------------" << cena6 << "$|\n"
		<< "|3)Третий напиток(7)-------------" << cena7 << "$|\n"
		<< "------------------------------------";
	cout << "\nВведите номера пунктов, которые вы хотите заказать(указаны в скобках)\n";
	cout << "Хотите ли вы заказать пиццу(1/0)?"; cin >> otvet;
	while (otvet != 0) {
		cout << "Какую пиццу хотите заказать? "; cin >> picc;
		cout << "Сколько штук хотите заказать? "; cin >> piccNum;

		colPicc += piccNum;
		if (picc == 1) {
			if (colPicc / 5 > 0) {
				summa += cena1 * (piccNum - colPicc / 5);
			}
			else summa += cena1 * piccNum;
		}

		if (picc == 2) {
			if (colPicc / 5 > 0) {
				summa += cena2 * (piccNum - colPicc / 5);
			}
			else summa += cena2 * piccNum;
		}

		if (picc == 3) {
			if (colPicc / 5 > 0) {
				summa += cena3 * (piccNum - colPicc / 5);
			}
			else summa += cena3 * piccNum;
		}

		if (picc == 4) {
			if (colPicc / 5 > 0) {
				summa += cena4 * (piccNum - colPicc / 5);
			}
			else summa += cena4 * piccNum;
		}

		cout << "Желаете еще заказать пиццу?(1/0)"; cin >> otvet;
	}

	cout << "Хотите ли вы заказать напиток(1/0)?"; cin >> otvet;
	while (otvet != 0) {
		cout << "Какой напиток хотите заказать? "; cin >> dr;
		cout << "Сколько штук хотите заказать? "; cin >> drNum;

		if (dr == 6) {
			if (cena6 >= 2 && drNum > 3) {
				summa += 0.85 * (cena6 * drNum);
			}
			else summa += cena6 * drNum;
		}

		if (dr == 7) {
			if (cena7 >= 2 && drNum > 3) {
				summa += 0.85 * (cena7 * drNum);
			}
			else summa += cena7 * drNum;
		}
		else cout << "Такого пункта нет";
		cout << "Желаете еще заказать напиток?(1/0)"; cin >> otvet;
	}

	if (summa > 50) summa * 0.8;
	cout <<"\nС Вас " << summa<<"$";
}

//2
int main() {
	setlocale(LC_ALL, "");
	int man1, man2, man3;

	cout << "Сколько принес 1й? "; cin >> man1;
	cout << "Сколько принес 2й? "; cin >> man2;
	cout << "Сколько принес 3й? "; cin >> man3;
	if (man1 > man2 > man3) {
		if (man1 < 500)cout << "\nЗарплата 1го " << man1 * 0.03 + 400;
		else if (500 < man1 < 1000)cout << "\nЗарплата 1го " << man1 * 0.05 + 400;
		else cout << "\nЗарплата 1го " << man1 * 0.08 + 400;
	}
	else {
		if (man1 < 500)cout << "\nЗарплата 1го " << man1 * 0.03 + 200;
		else if (500 < man1 < 1000)cout << "\nЗарплата 1го " << man1 * 0.05 + 200;
		else cout << "\nЗарплата 1го " << man1 * 0.08 + 200;
	}

	if (man1 < man2 > man3) {
		if (man2 < 500)cout << "\nЗарплата 2го " << man2 * 0.03 + 400;
		else if (500 < man2 < 1000)cout << "\nЗарплата 2го " << man2 * 0.05 + 400;
		else cout << "\nЗарплата 2го " << man2 * 0.08 + 400;
	}
	else {
		if (man2 < 500)cout << "\nЗарплата 2го " << man2 * 0.03 + 200;
		else if (500 < man2 < 1000)cout << "\nЗарплата 2го " << man2 * 0.05 + 200;
		else cout << "\nЗарплата 2го " << man2 * 0.08 + 200;
	}

	if (man1 < man2 < man3) {
		if (man3 < 500)cout << "\nЗарплата 3го " << man3 * 0.03 + 400;
		else if (500 < man3 < 1000)cout << "\nЗарплата 3го " << man3 * 0.05 + 400;
		else cout << "\nЗарплата 3го " << man3 * 0.08 + 400;
	}
	else {
		if (man3 < 500)cout << "\nЗарплата 3го " << man3 * 0.03 + 200;
		else if (500 < man3 < 1000)cout << "\nЗарплата 3го " << man3 * 0.05 + 200;
		else cout << "\nЗарплата 3го " << man3 * 0.08 + 200;
	}
}*/

//неделя 5 задание 1
/*int main() {
	setlocale(LC_ALL, "");
	
	//1
	//no :(

	//2
	int sec;
	string op1, op2;
	cout << ""; cin >> sec;
	cout << ""; cin >> op1;
	cout << ""; cin >> op2;
	if (op1 == op2)cout << sec / 60 * 1.5;
	else cout << sec / 60 * 3;


	//3
	int a;
	cout << "(1)пользователь вводит желаемый доход Васи и количество опозданий, посчитать, сколько строк кода ему надо написать \n"
		<< "(2)пользователь вводит количество строк кода, написанное Васей и желаемый объем зарплаты.Посчитать, сколькораз Вася может опоздать\n"
		<< "(3)пользователь вводит количество строк кода и количество опозданий, определить, сколько денег заплатят Васе изаплатят ли вообще\n";
	float dohod,zhzarp;
	int opozd,stroki;
	cin >> a;
	if (a == 1) {
		cout << "Введите желаемый доход "; cin >> dohod;
		cout << "Введите количество опознаний "; cin >> opozd;
		cout <<"Вам нужно написать строк -- "<<(dohod + (opozd / 3)) / 0.5;
	}
	if (a == 2) {
		cout << "Введите количество строк напечатанное програмистом "; cin >> stroki;
		cout << "Введите желаемую зарплату "; cin >> zhzarp;
		cout <<"Вы можете опоздать -- " << ((stroki * 0.5) - zhzarp) / 20 * 3;
	}
	if (a == 3) {
		cout << "Введите количество строк напечатанное програмистом "; cin >> stroki;
		cout << "Введите количество опознаний "; cin >> opozd;
		cout <<"Вам заплатят -- "<<(stroki * 0.5) - ((opozd / 3) * 20);
	}
}*/

//неделя 6 задание 1
/*int main() {
	//1
	int a;
	cout << "Введите число от которого нужно начинать отсчет "; cin >> a;
	for (int i = a+1; i < 501; i++) {
		a += i;
	}
	cout << a;

	//2
	int x, y;
	cout << "Введите число которое вы хотите возвести в степень "; cin >> x;
	cout << "В какую степень Вы хотите его возвести? "; cin >> y;
	cout << pow(x, y);

	//3
	int summ = 0;
	for (int i = 0; i < 1001; i++) {
		summ += i;
	}
	cout << summ / 1000;

	//4
	int a1;
	cout << "От какого числа нужно начинать умножение "; cin >> a1;
	for (int i = a1 + 1; i < 21; i++) {
		a1 *= i;
	}
	cout << a1;

	//5
	int k;
	cout << "Для какого числа вывести таблицу умножения? "; cin >> k;
	for (int i = 1; i < 10; i++) {
		cout << k << " * " << i << " = " << k * i << endl;
	}
}*/

//неделя 6 задание 2
/*int main() {
	//1
	int a = 0;
	for (int i = 100; i < 1000; i++) {
		if (i / 100 == i % 100 / 10 || i / 100 == i % 10 || i / 100 % 10 == i % 10) a++;
	}
	cout << a << endl;

	//2
	int a1 = 0;
	for (int i = 100; i < 1000; i++) {
		if (i / 100 != i % 100 / 10 && i / 100 != i % 10 && i / 100 % 10 != i % 10) a++;
	}
	cout << a;

	//4
	int A;
	cin >> A;
	for (int i = 1; i < A / 2; i++) {
		if (A % (i * i) == 0 && A % (i * i * i) != 0) cout << i << " ";
	}
}*/