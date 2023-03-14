#include <bits/stdc++.h>

using namespace std;

class VegCuisine
{
protected:
    string name;
    float cost;

public:
    VegCuisine(string name, float cost)
    {
        this->name = name;
        this->cost = cost;
    }

    ~VegCuisine()
    {
        cout << "\nobject destroyed for class VegCuisine.\n";
    }

    void printData()
    {
        cout << "\nVeg Food:"
             << "\nName:" << name
             << "\nCost:" << cost;
    }
};

class NonVegCuisine
{
protected:
    string name;
    float cost;

public:
    NonVegCuisine(string name, float cost)
    {
        this->name = name;
        this->cost = cost;
    }

    ~NonVegCuisine()
    {
        cout << "\nobject destroyed for class NonVegCuisine.\n";
    }

    void printData()
    {
        cout << "\nNon Veg Food:"
             << "\nName:" << name
             << "\nCost:" << cost;
    }
};

class ComboCuisine : public VegCuisine, public NonVegCuisine
{
public:
    ComboCuisine(string vegname, float vegcost, string nonvegname, float nonvegcost) : VegCuisine(vegname, vegcost), NonVegCuisine(nonvegname, nonvegcost)
    {
    }

    ~ComboCuisine()
    {
        cout << "\nobject destroyed for class ComboCuisine.\n";
    }

    void printData()
    {
        cout << "\nCombo Food:\n";
        VegCuisine::printData();
        NonVegCuisine::printData();
    }
};

int main()
{
    ComboCuisine food("paneer", 110, "chicken", 169);
    food.printData();
    VegCuisine *vegFood = &food;
    vegFood->printData();
    NonVegCuisine *NonVegFood = &food;
    NonVegFood->printData();
    return 0;
}