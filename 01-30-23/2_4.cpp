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
    int *tempArr = new int[size];

    int i, j = 0;
    for (i = 0; i < sizeA; i++)
        tempArr[j++] = *(a + i);
    for (i = 0; i < sizeB; i++)
        tempArr[j++] = *(b + i);
    for (i = 0; i < size; i++)
    {
        j = i + 1;
        while (j < size)
        {
            if (tempArr[i] == tempArr[j])
            {
                int temp = tempArr[j];
                tempArr[j] = tempArr[--size];
                tempArr[size] = temp;
            }
            else
                j++;
        }
    }
    int *merged = new int[size];
    for (i = 0; i < size; i++)
        merged[i] = tempArr[i];

    delete[] tempArr;

    return merged;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 6, 7, 8};
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
    cout << "\b\b] = ";
    int size, *merged = plusoverloaded(arr1, arr2, 5, 5, size);
    cout << "[";
    for (int i = 0; i < size; i++)
        cout << merged[i] << ", ";
    cout << "\b\b] = ";

    return 0;
}