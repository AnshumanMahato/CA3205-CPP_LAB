#include <bits/stdc++.h>

using namespace std;

struct Product
{
    int pid;
    string pname;
    float price, dis_percent;
    int userRating;

    void input_detail()
    {
        fflush(stdin);
        cout << "\nEnter Product Name:";
        getline(cin, pname);
        cout << "Enter Product id:";
        cin >> pid;
        cout << "Enter List Price:";
        cin >> price;
        do
        {
            cout << "Enter discount percent:";
            cin >> dis_percent;

            if (dis_percent < 0 && dis_percent > 100)
                cout << "\nDiscount must be between 0 and 100\n";
        } while (dis_percent < 0 && dis_percent > 100);
        do
        {
            cout << "Enter user rating:";
            cin >> userRating;

            if (userRating < 0 && userRating > 5)
                cout << "\nRatings must be between 0 and 5\n";
        } while (userRating < 0 && userRating > 5);
    }

    void output_detail()
    {
        cout << "\nID:" << pid;
        cout << "\nName:" << pname;
        cout << "\nRatings:" << userRating;
        cout << "\nList Price:" << fixed << setprecision(2) << price;
        cout << "\nDiscount:" << dis_percent << '%';
        cout << "\nDiscounted Price:" << fixed << setprecision(2) << price - price * dis_percent / 100;
    }

    void compSalesPrice(float cgst, float sgst)
    {
        float dis_price = price - price * dis_percent / 100;
        cout << "\nCGST(" << cgst << "%):" << fixed << setprecision(2) << cgst * dis_price / 100;
        cout << "\nSGST(" << sgst << "%):" << fixed << setprecision(2) << sgst * dis_price / 100;
        cout << "\nNet Amount:" << fixed << setprecision(2) << dis_price + (cgst * dis_price + sgst * dis_price) / 100;
    }
};

int main()
{
    const int size = 5;
    const float cgst = 9, sgst = 9;
    Product prods[size];

    cout << "Enter " << size << " Detais:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "\nProduct " << i + 1;
        prods[i].input_detail();
    }

    cout << "\nProduct Detais:";
    for (int i = 0; i < size; i++)
    {
        cout << "\n\nProduct " << i + 1;
        prods[i].output_detail();
        prods[i].compSalesPrice(cgst, sgst);
    }

    return 0;
}