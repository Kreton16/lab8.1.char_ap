//#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int Count(char* s)
{
    int k = 0;
    size_t    pos = 0;
    char* t;
    while (t = strchr(s + pos, 'a'))
    {
        pos = t - s + 1;
        if (s[pos] == 'a')
            k++;
    }
    pos = 0;
    while (t = strchr(s + pos, 'b'))
    {
        pos = t - s + 1;
        if (s[pos] == 'b')
            k++;
    }
    pos = 0;
    while (t = strchr(s + pos, 'c'))
    {
        pos = t - s + 1;
        if (s[pos] == 'c')
            k++;
    }
    return k;
}
char* Change(char* s)
{
    size_t len = strlen(s) * 3 / 2 + 1;
    char* tmp = new char[len];
    char* t = tmp;
    char* p;
    size_t pos1 = 0,
        pos2 = 0;
    tmp[0] = '\0';
    while (p = strchr(s + pos1, 'a'))
    {
        if (s[p - s + 1] == 'a')
        {
            pos2 = p - s + 2;
            strncat_s(t, len, s + pos1, pos2 - pos1 - 2);
            strcat_s(t, len, "***");
            pos1 = pos2;
        }
    }
    strcat_s(t, len, s + pos1);
    strcpy_s(s, len, t);
    pos1 = 0,
        pos2 = 0;
    *t = 0;
    while (p = strchr(s + pos1, 'b'))
    {
        if (s[p - s + 1] == 'b')
        {
            pos2 = p - s + 2;
            strncat_s(t, len, s + pos1, pos2 - pos1 - 2);
            strcat_s(t, len, "***");
            pos1 = pos2;
        }
    }
    strcat_s(t, len, s + pos1);
    strcpy_s(s, len, t);
    pos1 = 0,
        pos2 = 0;
    *t = 0;
    while (p = strchr(s + pos1, 'c'))
    {
        if (s[p - s + 1] == 'c')
        {
            pos2 = p - s + 2;
            strncat_s(t, len, s + pos1, pos2 - pos1 - 2);
            strcat_s(t, len, "***");
            pos1 = pos2;
        }
    }
    strcat_s(t, len, s + pos1);
    strcpy_s(s, len, t);
    return t;
}
int main()
{
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout << "String contained " << Count(str) << " groups of 'aa', 'bb', 'cc'" << endl;
    char* dest = new char[151];
    dest = Change(str);
    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;
    return 0;
}