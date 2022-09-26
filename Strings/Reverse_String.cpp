#include <iostream>
#include <string>
#include <cstring>

using namespace std;

void reversit(char s[])
{
    int i, len = 0, n;
    char temp;
    len = strlen(s);
    n = len - 1;
    for (i = 0; i <= (len / 2); i++)
    {
        temp = s[i];
        s[i] = s[n];
        s[n] = temp;
        n--;
    }
    cout << "\nReversed string is: ";
    puts(s);
}

int main()
{
    char s[100];
    cout << "\nEnter the string(max characters 100): ";
    gets(s);
    reversit(s);
    return 0;
}
