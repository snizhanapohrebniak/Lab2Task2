#include <iostream>

using namespace std;

int main() {
    // Введення числа
    int number;
    cout << "Vvedite tseloye chislo, bolshe 999: ";
    cin >> number;

    // Перевірка на те, що число більше 999
    if (number <= 999) {
        cout << "Chislo dolzhno byt bolshe 999!" << endl;
        return 1;
    }

    // Знаходимо цифру в розряді тисяч
    int thousandDigit = (number / 1000) % 10;

    // Виведення результату
    cout << "Tsifra v razryade tysyach: " << thousandDigit << endl;

    return 0;
}