#include <iostream>
#include <stdint.h>

using namespace std;

//задание 1

int var() {
	short int A = 10000;
	cout << "variable short int : " << A << sizeof(A) << &A << endl;
	
	int B = 1'000'000'000'000;
	cout << "variable int B :" << B << sizeof(B) << &B << endl;
	
	long long C = 9223372036854775807;
	cout << "variable long long C :" << C << sizeof(C) << &C << endl;

	long int X = 2147483647;
	cout << "variable long int X: " << X << sizeof(X) << &C << endl;
	 
	char D = X;
	cout << "variable char D :" << X << sizeof(X) << &X << endl;

	bool flag = true;
	cout << "variable bool flag :" << flag << sizeof(flag) << &flag << endl;

	float pi = 3.14;
	cout << "variable float pi :" << pi << sizeof(pi) << &pi << endl;
	
	double PI = 3.1485648175f;
	cout << "double PI :" << PI << sizeof(PI) << &PI << endl;

	unsigned short int E = 1;
	cout << "variable short int E: "  << E << sizeof(E) << &E << endl;

	unsigned long int F = 4294967295;
	cout << "variable  unsigned long int F: " << F << sizeof(F) << &F << endl;
	
	unsigned long long G = 0;
	cout << "variable long long G: " << G << sizeof(G) << &G << endl;
	return 0;
}

char X;
char O;

//задание 2

enum Cell { Cross = 'X', Zero = 'O', Empty = 'E' };

int figures() {
	Cell a = Cross;
	cout << (char)a;
	Cell b = Zero;
	cout << (char)b;
	Cell c = Empty;
	cout << (char)c;
	return 0;
}

//задание 3
int main()
{
	char Cell[3][3] =
	{ { Cross,Zero,Empty  },{Cross,Zero,Empty},{Cross,Zero,Empty} };
	cout << "Tic Tac Toe: The game: " << endl;
	cout << "Row 0: " << Cell[0][0] << " "
		              << Cell[0][1] << " "
		              << Cell[0][2] << endl;
	cout << "Row 1: " << Cell[1][0] << " "
		              << Cell[1][1] << " "
		              << Cell[1][2] << endl;
	cout << "Row 2: " << Cell[2][0] << " "
		              << Cell[2][1] << " "
		              << Cell[2][2] << endl;
	
}

//задание 4

struct FieldForTicTacToe {
	int field;
	bool empty;
	char X;
	char O;
};

int main1() {
	FieldForTicTacToe e1, e2;
	e1 = { 1000, true, X };
	e2 = { 500, false, O };
	cout << e1.field << " " << e1.empty << " " << e1.X << " " << e1.O << " " << endl;
	cout << e2.field << " " << e2.empty << " " << e2.X << " " << e2.O << " " << endl;
	return 0;
}

// задание 5

union MyData {
	int isint;
	float isfloat;
	char ischar;
};

struct MyVariant {
	int isint : 1;
	int isfloat : 1;
	int ischar : 1;
};

int myunion() {
	MyVariant e1;
	e1.isint = 100;
	e1.isfloat = 1.2;
	e1.ischar = X;
	cout << sizeof(e1);
	{
		MyData  info;
		info.ischar = 88;
		cout << info.ischar << endl;
		info.isint = 1;
		cout << info.isint << endl;
		info.isfloat = 1.2;
		cout << info.isfloat << endl;
	}
	return 1;
}
//я так понимаю - код позволяет управлять размером занимаемой RAM памяти, также (возможно) такая конструкция кода позволяет обращаться к определенным участкам памяти, в которых содержится то или иное значение. Применительно к игре крестики нолики этот код позволяет обращаться к конкретным клеточкам поля или знакам?