#include "Triad.h"
#include <string>

Triad::Triad(void) : X(0), Y(0), Z(0) {}

Triad::Triad(int first, int second, int third) : X(first), Y(second), Z(third) {}

void Triad::set_first(int first) {
	X = first;
}

int Triad::get_first() {
	return X;
}

void Triad::set_second(int second) {
	Y = second;
}

int Triad::get_second() {
	return Y;
}

void Triad::set_third(int third) {
	Z = third;
}

int Triad::get_third() {
	return Z;
}

void Triad::add_first() {
	X++;
}

void Triad::add_second() {
	Y++;
}

void Triad::add_third() {
	Z++;
}

ostream& operator<<(ostream& out, Triad& p) {
	out << "First = " << p.X << endl;
	out << "Second = " << p.Y << endl;
	out << "Third = " << p.Z << endl;
	return out;
}

istream& operator>>(istream& in, Triad& p) {
	in >> p.X;
	in >> p.Y;
	in >> p.Z;
	return in;
}

string Triad::toString() {
	string s = "First = " + to_string(X) + ". Second = " + to_string(Y) + ". Third = " + to_string(Z) + ".";
	return s;
}
