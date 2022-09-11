#include <iostream>
#include <strings.h>

using namespace std;

int main()
{
    string s="";
    int flag = 0;
    cout << "Enter a string:" << endl;
    getline(cin,s);

    string st = "";
    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
            st += tolower(s[i]);
        else
            continue;
    }

    cout << "After removing the extra spaces: " << st;

    int l = st.size();
    for (int k = 0, j = l - 1; k <= j; k++, j--)
    {
        if (st[k] != st[j])
            flag = 0;
        else
            flag = 1;
    }

    if (flag == 0)
        cout << "\nNot a valid palindrome.";
    else
        cout << "\nValid palindrome.";
    return 0;
}