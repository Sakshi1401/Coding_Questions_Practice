#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int i;
    char A[50], B[50], H[128] = {0};
    cout << "\nEnter the First string: ";
    gets(A);
    cout << "\nEnter the Second String: ";
    gets(B);
    if (strlen(A) != strlen(B))
    {
        cout << "\nStrings are not Anagram!!!";
        return 0;
    }
    for (i = 0; A[i] != '\0'; i++)
    {
        if (A[i] >= 'a' && A[i] <= 'z')
            H[A[i] - 97] += 1;
        else
            H[A[i] - 65] += 1;
    }
    for (i = 0; B[i] != '\0'; i++)
    {
        if (B[i] >= 'a' && B[i] <= 'z')
            H[B[i] - 97] -= 1;
        else
            H[B[i] - 65] -= 1;
    }
    for (i = 0; i < 128; i++)
    {
        if (H[i] < 0)
        {

            cout << "\nStrings are not Anagram!!!";
            return 0;
        }
    }
    cout << "\nStrings are Anagram!!!";

    return 0;
}
