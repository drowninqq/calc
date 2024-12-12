#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

double sum(double a, double b) {
    return a + b;
}

double multiply(double a, double b) {
    return a * b;
}

double difference(double a, double b) {
    return a - b;
}

double divide(double a, double b) {
    if (b == 0) {
        cout << "Ошибка: деление на ноль!" << endl;
        exit(1);
    }
    return a / b;
}


void getInput(double& a, double& b, char& ch) {
    cout << "Введите пример: ";
    cin >> a >> ch >> b;
}

int main() {
    setlocale(LC_ALL, "");

    double a, b;
    char sign;
    double answer;

    getInput(a, b, sign);

    switch (sign) {
    case '+':
        answer = sum(a, b);
        break;
    case '-':
        answer = difference(a, b);
        break;
    case '/':
    case ':':
        answer = divide(a, b);
        break;
    case '*':
        answer = multiply(a, b);
        break;
    default:
        cout << "Такой операции нет в калькуляторе" << endl;
        return 1;
    }

    cout << "Ответ: " << answer << endl;

    return 0;
}