#include <bits/stdc++.h>

using namespace std;

float plusoverloaded(float a, float b)
{
    return a + b;
}

string plusoverloaded(string a, string b)
{
    return a + b;
}

void plusoverloaded(int *a, int size, int addendum)
{
    for (int i = 0; i < size; i++)
        *(a + i) += addendum;
}

int *plusoverloaded(int *a, int *b, int sizeA, int sizeB, int &size)
{
    size = sizeA + sizeB;
    int *merged = new int[size];

    int i, j = 0;
    for (i = 0; i < sizeA; i++)
        merged[j++] = *(a + i);
    for (i = 0; i < sizeB; i++)
        merged[j++] = *(b + i);
    for (i = 0; i < size; i++)
    {
        j = i + 1;
        while (j < size)
        {
            if (merged[i] == merged[j])
            {
                int temp = merged[j];
                merged[j] = merged[--size];
                merged[size] = temp;
            }
            else
                j++;
        }
    }

    return merged;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 2, 3};
    string str1 = "Hello", str2 = "World";
    float num1 = 2, num2 = 3;
    cout << num1 << '+' << num2 << '=' << plusoverloaded(num1, num2) << '\n';
    cout << str1 << '+' << str2 << '=' << plusoverloaded(str1, str2) << '\n';
    cout << '[';
    for (int i = 0; i < 5; i++)
        cout << arr1[i] << ", ";
    plusoverloaded(arr1, 5, 5);
    cout << "\b\b] " << '+' << 5 << " = [";
    for (int i = 0; i < 5; i++)
        cout << arr1[i] << ", ";
    cout << "\b\b]\n";

    cout << '[';
    for (int i = 0; i < 5; i++)
        cout << arr1[i] << ", ";
    cout << "\b\b] + [";
    for (int i = 0; i < 5; i++)
        cout << arr2[i] << ", ";
    cout << "\b\b] = [";
    int size, *merged = plusoverloaded(arr1, arr2, 5, 5, size);
    for (int i = 0; i < size; i++)
        cout << merged[i] << ", ";
    cout << "\b\b]";

    return 0;
}