#include "Time.h"
#include <string>

Time::Time(void) : Triad() {}

Time::Time(int a, int b, int c) : Triad(a, b, c) {}

void Time::set_first(int first) {
	X = first;
}

int Time::get_first() {
	return X;
}

void Time::set_second(int second) {
	Y = second;
}

int Time::get_second() {
	return Y;
}

void Time::set_third(int third) {
	Z = third;
}

int Time::get_third() {
	return Z;
}

void Time::add_first() {
	X++;
}

void Time::add_second() {
	Y++;
}

void Time::add_third() {
	Z++;
}

void Time::add_seconds(int third) {
	Z += third;
}

void Time::add_minute(int second) {
	Y += second;
}

void Time::normalize_time() {
	if (Z >= 60) {
		Y += Z / 60;
		Z %= 60;
	}
	if (Y >= 60) {
		X += Y / 60;
		Y %= 60;
	}
	if (X >= 24) {
		X %= 24;
	}
}

void Time::get_time() {
	cout << X << ":" << Y << ":" << Z << endl;
}

ostream& operator<<(ostream& out, Time& d) {
	out << "Hour = " << d.X << endl;
	out << "Minute = " << d.Y << endl;
	out << "Seconds = " << d.Z << endl;
	return out;
}

istream& operator>>(istream& in, Time& d) {
	in >> d.X;
	in >> d.Y;
	in >> d.Z;
	return in;
}

string Time::toString() {
	string s = "Hour: " + to_string(X) + ". Minute: " + to_string(Y) + ". Seconds: " + to_string(Z) + ".";
	return s;
}
