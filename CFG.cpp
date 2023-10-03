# include<iostream>
using namespace std;

void test(char g, double h) {
    string res = "";
    if (g == 'm') {
        if (h < 0) {
            res = "invalid";
        } else if (h < 165) {
            res = "thap";
        } else if (h < 175) {
            res = "trung binh";
        } else if (h <= 200) {
            res = "cao";
        } else {
            res = "invalid";
        }
    } else {
        if (h < 0) {
            res = "invalid";
        } else if (h < 150) {
            res = "thap";
        } else if (h < 165) {
            res = "trung binh";
        } else if (h <= 200) {
            res = "cao";
        } else {
            res = "invalid";
        }
    }
    cout << "test(" << g << ", " << h << "): " << res << endl;
}
int main() {
    test('m', -20);
    test('m', 140);
    test('m', 172);
    test('m', 188);
    test('m', 209);
    test('f', -33);
    test('f', 143);
    test('f', 160);
    test('f', 184);
    test('f', 202);
    return 0;
}