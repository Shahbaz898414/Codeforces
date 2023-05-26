#include <iostream>
#include <vector>
#include <string>

using namespace std;

class FastReader {
    istream& in;
    string buffer;
    int ptr;

public:
    FastReader() : in(cin), buffer(""), ptr(0) {}
    FastReader(istream& input) : in(input), buffer(""), ptr(0) {}

    char readNextChar() {
        if (ptr == buffer.length()) {
            getline(in, buffer);
            ptr = 0;
        }
        if (ptr < buffer.length()) {
            return buffer[ptr++];
        }
        return '\0';
    }

    int nextInt() {
        string s = next();
        return stoi(s);
    }

    string next() {
        string str = "";
        char c = readNextChar();
        while (c == ' ' || c == '\n' || c == '\r' || c == '\t') {
            c = readNextChar();
        }
        while (c != ' ' && c != '\n' && c != '\r' && c != '\t' && c != '\0') {
            str += c;
            c = readNextChar();
        }
        return str;
    }
};

int main() {
    FastReader fr;
    int tc = fr.nextInt();
    while (tc-- > 0) {
        int n = fr.nextInt();
        string s = fr.next();
        int ans = 1;
        int count = 1;
        for (int i = 1; i <= n; i++) {
            if (i == n) {
                ans = max(ans, count);
                break;
            }
            if (s[i] == s[i - 1]) {
                count++;
            } else {
                ans = max(ans, count);
                count = 1;
            }
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
