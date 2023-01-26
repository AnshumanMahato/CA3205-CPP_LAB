#include <bits/stdc++.h>

using namespace std;

struct book
{
    string title;
    string author;
    string publisher;
    float price;
};

int main()
{
    const int size = 2;
    struct book books[size];
    for (int i = 0; i < size; i++)
    {
        cout << "\nEnter Title:";
        cin >> books[i].title;
        cout << "Enter Author:";
        cin >> books[i].author;
        cout << "Enter Publisher:";
        cin >> books[i].publisher;
        cout << "Enter Price:";
        cin >> books[i].price;
    }

    // Sorting

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (books[j].title > books[j + 1].title)
            {
                book temp = books[j];
                books[j] = books[j + 1];
                books[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\nTitle:" << books[i].title;
        cout << "\nAuthor:" << books[i].author;
        cout << "\nPublisher:" << books[i].publisher;
        cout << "\nPrice:" << books[i].price << '\n';
    }
}