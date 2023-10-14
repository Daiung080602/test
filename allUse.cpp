# include<iostream>
using namespace std;

string test(char g, double h) {
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
    return res;
}
void result(char g, double h) {
    cout << "test(" << g << ", " << h << "): " << test(g, h) << endl;
}
int main() {
    result('m', 120);
    result('f', 120);
    result('m', -20);
    result('m', 130);
    result('m', 130);
    result('m', 170);
    result('m', 170);
    result('m', 182);
    result('m', 182);
    result('m', 205);
    result('f', -20);
    result('f', 130);
    result('f', 130);
    result('f', 160);
    result('f', 160);
    result('f', 175);
    result('f', 175);
    result('f', 205);
    result('m', 172);
    result('m', 183);
    result('m', 202);
    result('f', 155);
    result('f', 188);
    result('f', 207);
    return 0;
}