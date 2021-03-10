#include <iostream>

using namespace std;

struct pravokutnik {
	int a,b;
};

int povrsina(pravokutnik P){
	int povrsina;
	(P.a <= 0 || P.b <= 0) ? povrsina = 0 : povrsina = P.a*P.b; 
	return povrsina;
}

void povecaj_za(pravokutnik& P, int x){
	P.a += x;
	P.b += x;
}

void smanji_za(pravokutnik& P, int x){
	(P.a - x <= 0) ? P.a = 0 : P.a -= x;
	(P.b - x <= 0) ? P.b = 0 : P.b -= x;
}

void ispisi(pravokutnik P){
	cout << "Stranice : "<< "a = " << P.a << ", b = " << P.b << "\n" << "Povrsina: " << povrsina(P) << endl << endl;
}

