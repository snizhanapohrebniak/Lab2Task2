#include <iostream>

using namespace std;

int main() {
    // �������� �����
    int number;
    cout << "Vvedite tseloye chislo, bolshe 999: ";
    cin >> number;

    // �������� �� ��, �� ����� ����� 999
    if (number <= 999) {
        cout << "Chislo dolzhno byt bolshe 999!" << endl;
        return 1;
    }

    // ��������� ����� � ������ �����
    int thousandDigit = (number / 1000) % 10;

    // ��������� ����������
    cout << "Tsifra v razryade tysyach: " << thousandDigit << endl;

    return 0;
}