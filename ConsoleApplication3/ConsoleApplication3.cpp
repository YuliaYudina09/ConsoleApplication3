#include <iostream>
using namespace std;

float operation(string oper, float a, float b) {
	if (oper == "*") {
		return a * b;
	}
	else if (oper == "/") {
		return a / b;
	}
	else if (oper == "+") {
		return a + b;
	}
	else if (oper == "-") {
		return a - b;
	}
	else {
		cout << "Такой операции не существует";
		cout << "Hello";
		cin >> oper;
		return operation(oper, a, b);
	}
}

int main()
{
	float a;
	float b;
	cout << "Введите переменные a и b\n";
	cin >> a >> b;

	cout << "Выберите операцию (* / + -): ";
	string oper;
	cin >> oper;

	cout << "Результат: " << operation(oper, a, b);



}

