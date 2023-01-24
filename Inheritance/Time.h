#include "Triad.h"

using namespace std;

class Time : public Triad {
public:

	Time(void);

	Time(int a, int b, int c);

	void set_first(int first);

	int get_first();

	void set_second(int second);

	int get_second();

	void set_third(int third);

	int get_third();

	void add_first();

	void add_second();

	void add_third();

	void add_seconds(int third);

	void add_minute(int second);

	void normalize_time();

	void get_time();

	friend ostream& operator<<(ostream& out, Time& p);

	friend istream& operator>>(istream& in, Time& p);

	string toString();
};

