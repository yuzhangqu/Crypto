#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

void crypto(string &line, char key)
{
    for (int i = 0; i < line.size(); ++i)
    {
        line[i] ^= key;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        return -1;
    }

    char key = atoi(argv[1]) % 256;
    string s;
    while (cin >> s)
    {
        crypto(s, key);
        cout << s << endl;
    }
    return 0;
}
