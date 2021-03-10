#include <iostream>

using namespace std;

struct pravokutnik {
	unsigned int a,b;
};

int povrsina(pravokutnik P){
	return P.a * P.b;
}

void povecaj_za(pravokutnik& P, int x){
	P.a += x;
	P.b += x;
}

void smanji_za(pravokutnik& P, int x){
	P.a -= x;
	P.b -= x;
}

void ispisi(pravokutnik P){
	cout << "Stranice : "<< "a = " << P.a << ", b = " << P.b << "\n" << "Povrsina: " << povrsina(P) << endl << endl;
}

