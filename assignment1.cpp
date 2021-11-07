#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;

//task3
/*
int main()
{
    int n;
    int i = 0;
    cout << "Enter a positive integer:" << endl;
    cin >> n;

    for (i = 0; i < n; i++) {
            cout << "Hello World!" << endl;
    }

    while (i < n) {
        cout << "Hello World!" << endl;
        i++;
    }

    do {
        cout << "Hello World!" << endl;
        i++;
    } while (i < n);

    return 0;
}
*/


//task4
/*
bool strToBool (string input) {
	bool output;

	if (input == "true") {
		output = true;
	}
	else if (input == "false") {
		output = false;
	}
	else {
		output = false;
	}

	return output;
}

int main() {
	string name;
	int age;
	char gender;
	string adress;
	string marriedIn;
	float height;

	cout << "What is your name?" << endl;
	getline(cin, name);

	cout << "How old are you?" << endl;
	cin >> age;

	cout << "What is your gender? (m/f)" << endl;
	cin >> gender;

	cout << "What is your adress?" << endl;
	cin.ignore(1000, '\n');
	getline(cin, adress);

	cout << "Are you married? (true/false)" << endl;
	cin >> marriedIn;
	bool married = strToBool(marriedIn);

	cout << "How tall are you in meters?" << endl;
	cin >> height;

	cout << boolalpha;
	cout
		<< "name: "    << name    << "\n"
		<< "age: "     << age     << "\n"
		<< "gender: "  << gender  << "\n"
		<< "adress: "  << adress  << "\n"
		<< "married: " << married << "\n"
		<< "height: "  << height  << " m"
		<< endl;

	return 0;
}
*/

//task5
/*
int main()
{
	char name [20];
	int age;
	char gender;
	char adress [20];
	int married;
	float height;

	printf("What is your name?\n");
	gets_s(name);

	printf("How old are you?\n");
	scanf("%d", &age);

	printf("What is your gender? (m/f)\n");
	scanf(" %c", &gender);

	printf("What is your adress?\n");
	gets_s(adress);//spaghetti im sorry
	gets_s(adress);//spaghetti im sorry

	printf("Are you married? (1/0 for true/false)\n");
	do{
		scanf("%d", &married);
		if (married != 0 && married != 1)
			printf("Input must be either 0 or 1!");

	} while (married != 0 && married != 1);

	printf("How tall are you?\n");
	scanf("%f", &height);

	printf("\nname: %s"   , name);
	printf("\nage: %d"    , age);
	printf("\ngender: %c" , gender);
	printf("\nadress: %s" , adress);
	printf("\nmarried: %s", (married ? "true" : "false"));
	printf("\nheight: %f" , height);

	return 0;
}
*/


//task6
/*
bool isPrime(int n) {
	for (int d = 2; d < n; d++) {
		if (n % d == 0) return false;
	}
	return true;
}

int main()
{
	int n;
	int results = 0;
	int checkNum = 2;
	cout << "Input: " << endl;
	do {
		cin >> n;

		if (n < 1)
			cout << "Input must be 1 or greater!" << endl;
	} while (n < 1);

	while (results < n) {
		if (isPrime(checkNum)) {
			results++;
			cout << checkNum << endl;
		}

		checkNum++;
	}
	cout << "Done!" << endl;
	return 0;
}
*/


//task7
/*
int main()
{
	int n;
	cout << "Give a natural number:" << endl;

	do {
		cin >> n;

		if (n < 0)
			cout << "Value must be a positive integer!" << endl;
	} while (n < 0);

	for (int i = n; i >= -n; i--) {
		cout << abs(i);
	}

	return 0;
}
*/


//task8
/*
void numPyr(int n) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++)
			printf_s("%u", j);
		printf_s("\n");
	}
}

void alphPyr(char c) {
	for (int i = 1; i <= c-64; i++) {
		for (int j = 1; j <= i; j++)
			printf_s("%c", j+64);
		printf_s("\n");
	}
}

int main()
{
	int n;
	printf_s("Half pyramid using numbers.\nEnter a natural number:\n");
	scanf_s("%u", &n);

	printf_s("\n");
	numPyr(n);

	char c;
	printf_s("Half pyramid using alphabets.\nEnter an uppercase letter:\n");
	scanf_s(" %c", &c);

	printf_s("\n");
	alphPyr(c);

	return 0;
}
*/