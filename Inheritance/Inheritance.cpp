#include "Time.h"

/*Создать класс Triad (тройка чисел); определить методы увеличения полей на 1. Определить класс-наследник Time с полями: час, минута, секунда. Переопределить методы увеличения полей на 1 и определить методы увеличения на и секунд и минут.*/

using namespace std;

int main() {
	Triad p;
	Time c;

	cout << p << "\n";
	cout << c << "\n";

	p.set_first(22);
	p.set_second(23);
	p.set_third(24);

	c.set_first(22);
	c.set_second(23);
	c.set_third(24);

	cout << p << "\n";
	cout << c << "\n\n";

	int x, y, z;
	cout << "Input three number: " << endl;
	cin >> x >> y >> z;
	cout << "\n";

	if (x < 0 || y < 0 || z < 0) {
		cout << "Error. Number can't be < 0." << endl;
		return 0;
	}

	Triad m(x, y, z);
	Time n(x, y, z);

	cout << "First: " << m.get_first() << "; second: " << m.get_second() << "; third: " << m.get_third() << "." << "\n" << endl;

	m.add_first();
	m.add_second();
	m.add_third();

	cout << "String: " << m.toString() << "\n" << endl;

	n.normalize_time();
	n.get_time();

	n.add_first();
	n.add_second();
	n.add_third();

	cout << n << "\n";

	n.add_seconds(20);
	n.add_minute(70);
	n.normalize_time();

	cout << "String: " << n.toString() << endl;
}
