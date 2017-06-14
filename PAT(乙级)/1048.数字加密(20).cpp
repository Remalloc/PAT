
#include <iostream>
#include <string>
using namespace std;
int main() {
    string a, b;
    string c;
    cin >> a >> b;
    int lena = a.length();
    int lenb = b.length();
    char d;
    for (int i = 0; i <= lena / 2 - 1; i++) {
        d = a[i];
        a[i] = a[lena - 1 - i];
        a[lena - 1 - i] = d;
    }
    for (int i = 0; i <= lenb / 2 - 1; i++) {
        d = b[i];
        b[i] = b[lenb - 1 - i];
        b[lenb - 1 - i] = d;
    }
    int min = lena > lenb ? lenb : lena;
    int flag = lena > lenb ? 0 : 1;
    int max = lena > lenb ? lena : lenb;
    int temp;
    if (flag == 0) {
        for (int i = 0; i < max - min; i++)
            b += '0';
    } else {
        for (int i = 0; i < max - min; i++)
            a += '0';
    }
    for (int i = 0; i < max; i++) {
        if (i % 2 == 0) {
            temp = (a[i] - '0' + b[i] - '0') % 13;
            if(temp >= 0 && temp <= 9)
                c += (temp + '0');
            else if (temp == 10)
                c += 'J';
            else if (temp == 11)
                c += 'Q';
            else
                c += 'K';
        } else {
            temp = b[i] - a[i];
            if (temp < 0)
                temp = temp + 10;
            c += temp + '0';
        }
    }
    for (int i = max - 1; i >= 0; i--) {
        cout << c[i];
    }
    return 0;
}
