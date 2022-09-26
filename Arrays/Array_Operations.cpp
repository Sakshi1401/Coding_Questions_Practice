#include <iostream>
#include <stdlib.h>

using namespace std;

struct array
{
    int *A;
    int len;
    int size;
};

void append(struct array *arr, int x)
{
    if (arr->len < arr->size)
        arr->A[arr->len++] = x;
    cout << "\nNow...The array is...\n";
    for (int i = 0; i < arr->len; i++)
        cout << arr->A[i] << " ";
}

void insert(struct array *arr, int x, int y)
{
    int i;
    if (y < arr->len)
    {
        for (i = arr->len; i > y - 1; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[y] = x;
        arr->len++;
        cout << "\nThe new array is...";
        for (i = 0; i < arr->len; i++)
            cout << arr->A[i] << " ";
    }
    else
        cout << "\nWrong choice...";
}

void del(struct array *arr, int x)
{
    int i;
    if (x <= arr->len)
    {
        for (i = x - 1; i < arr->len; i++)
            arr->A[i] = arr->A[i + 1];
        arr->len--;
        cout << "\nThe new Array is...";
        for (i = 0; i < arr->len; i++)
            cout << arr->A[i] << " ";
    }
    else
        cout << "\nWrong choice...";
}

void search(struct array *arr, int x)
{
    for (int i = 0; i < arr->len; i++)
        if (arr->A[i] == x)
            cout << "\nThe number is at "
                 << "_" << i + 1 << "_"
                 << " index in the array...";
}

void reverse(struct array *arr)
{
    int i, j, temp;
    for (j = arr->len - 1, i = 0; i < j; j--, i++)
    {
        temp = arr->A[i];
        arr->A[i] = arr->A[j];
        arr->A[j] = temp;
    }
    for (i = 0; i < arr->len; i++)
        cout << arr->A[i] << " ";
}

void sort(struct array *arr)
{
    int i, j, temp;
    for (i = 0; i < arr->len; i++)
    {
        for (j = i + 1; j < arr->len; j++)
        {
            if (arr->A[j] < arr->A[i])
            {
                temp = arr->A[i];
                arr->A[i] = arr->A[j];
                arr->A[j] = temp;
            }
        }
    }
    for (i = 0; i < arr->len; i++)
        cout << arr->A[i] << " ";
}

void duplicate(struct array *arr)
{
    int j;
    for (int i = 0; i < arr->len - 1; i++)
    {
        if (arr->A[i] == arr->A[i + 1])
        {
            j = i + 1;
            while (arr->A[j] == arr->A[i])
                j++;
            cout << "\n_" << arr->A[i] << "_"
                 << "repeates _" << j - i << "_ times";
            i = j - 1;
        }
    }
}

int main()
{
    struct array arr;
    int n, c, x, y, ch = 0;
    cout << "Enter the size of the array...";
    cin >> arr.size;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    cout << "\nEnter the number of elements you want to enter...";
    cin >> n;
    arr.len = n;
    cout << "\nEnter the Array elements...";
    for (int i = 0; i < n; i++)
        cin >> arr.A[i];
    do
    {
        cout << "\n1.Append\n2.Insertion\n3.Deletion\n4.Search\n5.Reverse\n6.Sorting\n7.Frequency of duplicate element\n";
        cout << "\n\nEnter your choice which operation you want to do...";
        cin >> c;
        switch (c)
        {
        case 1:
            cout << "\nEnter the number you want to append in the array...";
            cin >> x;
            append(&arr, x);
            break;
        case 2:
            cout << "\nEnter the number you want to insert.... ";
            cin >> x;
            cout << "\nEnter the index where you want to place it.....";
            cin >> y;
            insert(&arr, x, y);
            break;
        case 3:
            cout << "\nEnter the index of the number you want to delete.....";
            cin >> x;
            del(&arr, x);
            break;
        case 4:
            cout << "\nEnter the number whose position you want to know....";
            cin >> x;
            search(&arr, x);
            break;
        case 5:
            cout << "\nThe reveresed array is...";
            reverse(&arr);
            break;
        case 6:
            cout << "\nAfter sorting the array is...";
            sort(&arr);
            break;
        case 7:
            duplicate(&arr);
            break;
        default:
            cout << "\n..........Wrong Choice!!!!!..........";
        }
        cout << "\nDo you want to do more operations on same array(y-1/n-0)....";
        cin >> ch;
    } while (ch == 1);

    return 0;
}
