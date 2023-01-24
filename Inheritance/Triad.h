#include <iostream>

using namespace std;

class Triad {
protected:
	int X, Y, Z;

public:
	Triad(void);

	Triad(int first, int second, int third);

	void set_first(int first);

	int get_first();

	void set_second(int second);

	int get_second();

	void set_third(int third);

	int get_third();

	void add_first();

	void add_second();

	void add_third();

	friend ostream& operator<<(ostream& out, Triad& p);

	friend istream& operator>>(istream& in, Triad& p);

	string toString();
};

