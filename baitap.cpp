#include <iostream>
using namespace std;

void test(char genre, double height) {
    string result = "";
    if (genre == 'm') {
        if (height < 0) {
            result = "invalid";
        } else if (height >= 0 && height < 165) {
            result = "thap";
        } else if (height >= 165 && height < 175) {
            result = "trung binh";
        } else if (height >= 175 && height <=200) {
            result = "cao";
        } else {
            result = "invalid";
        }
    } else if (genre == 'f') {
        if (height < 0) {
            result = "invalid";
        } else if (height >= 0 && height < 150) {
            result = "thap";
        } else if (height >= 150 && height < 165) {
            result = "trung binh";
        } else if (height >= 165 && height <=200) {
            result = "cao";
        } else {
            result = "invalid";
        }
    }
    cout << "(" << genre << ", " << height << "): " << result << endl;
}

int main() {
    cout << "Test 1: " << endl;
    test('m',-20);
    cout << "Test 2: " << endl;
    test('m',120);
    cout << "Test 3: " << endl;
    test('m',160);
    cout << "Test 4: " << endl;
    test('m',173);
    cout << "Test 5: " << endl;
    test('m',186);
    cout << "Test 6: " << endl;
    test('m',208);
    cout << "Test 7: " << endl;
    test('f',-7);
    cout << "Test 8: " << endl;
    test('f',143);
    cout << "Test 9: " << endl;
    test('f',164);
    cout << "Test 10: " << endl;
    test('f',171);
    cout << "Test 11: " << endl;
    test('f',182);
    cout << "Test 12: " << endl;
    test('f',203);
    return 0;
}