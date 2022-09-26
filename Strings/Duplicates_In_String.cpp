#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char A[100];
    int i, H[128] = {0};

    cout << "\nEnter the String...";
    gets(A);
    for (i = 0; A[i] != '\0'; i++)
    {
        H[A[i] - 97] += 1;
    }
    for (i = 0; i < 128; i++)
    {
        if (H[i] != 0)
        {
            printf("\nCharacter_%c_repeats _%d_times in the string", i + 65, H[i]);
        }
    }

    return 0;
}
