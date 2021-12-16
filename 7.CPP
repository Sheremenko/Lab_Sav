#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    int i = 1;
    for (; i < str.size(); ++i) {
        if (str.size() % i == 0) {
            int j = 1;
            int jLim = str.size() / i;
            for (; j < jLim; ++j) {
                if (!equal(&str[0], &str[i], &str[i * j])) { break; }
            }
            if (j == jLim) { break; }
        }
    }
    cout.write(str.data(), i) << endl;
    cout << str.size() / i << endl;
}
