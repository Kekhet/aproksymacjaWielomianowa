#include <iostream>
#include <math.h>

using namespace std;

double fun1(int i, int j, double tabX[], int n);
double fun2(int i, double tabX[], double tabY[], int n);

int main() {
	const int numPoints = 10;
	double tabX[numPoints] = {-5,-4,-3,-2,-1,0,1,2,3,5 }, tabY[numPoints] = {-110,-60,-20,-10,-1.5,2,7,18,50,170}; //Dane punkty
	int n = numPoints-1; //ilosc pkt -> n+1
	int m = 3; //stopien wielomianu

	for (int i = 0; i < m + 1; i++) {
		for (int j = 0; j < m + 1; j++) {

			cout << fun1(i, j, tabX, n) << "*a" << j << " ";

			if (j == m) {
				cout << "= ";
			} else cout << "+ ";

		}

		cout << fun2(i,tabX,tabY,n)<<endl;
	}

	system("PAUSE");
}

double fun1(int i, int j, double tabX[], int n) {
	double retVal = 0;
	for (int z = 0; z < n + 1; z++) {
		retVal += pow(tabX[z], i)*pow(tabX[z], j);
	}
	return retVal;
}

double fun2(int i, double tabX[], double tabY[], int n) {
	double retVal = 0;
	for (int z = 0; z < n + 1; z++) {
		retVal += pow(tabX[z], i)*tabY[z];
	}
	return retVal;
}