#include <iostream>
#include <math.h>

using namespace std;

class Matrix;

class Vector
{
    int size;
    int *arr;

public:
    Vector(int size)
    {
        this->size = size;
        this->arr = new int[size];
    }

    Vector(const Vector &v)
    {
        this->size = v.size;
        this->arr = new int[size];
        for (int i = 0; i < this->size; i++)
            this->arr[i] = v.arr[i];
    }

    Vector operator+(Vector a)
    {
        Vector temp(this->size);
        for (int i = 0; i < this->size; i++)
            temp.arr[i] = this->arr[i] + a.arr[i];
        return temp;
    }

    Vector operator-(Vector a)
    {
        Vector temp(this->size);
        for (int i = 0; i < this->size; i++)
            temp.arr[i] = this->arr[i] - a.arr[i];
        return temp;
    }

    Vector operator-()
    {
        Vector temp(this->size);
        for (int i = 0; i < this->size; i++)
            temp.arr[i] = -this->arr[i];
        return temp;
    }

    Vector operator*(Vector a)
    {
        Vector temp(this->size);
        for (int i = 0; i < this->size; i++)
            temp.arr[i] = this->arr[i] * a.arr[i];
        return temp;
    }

    Vector operator/(Vector a)
    {
        Vector temp(this->size);
        for (int i = 0; i < this->size; i++)
            temp.arr[i] = this->arr[i] / a.arr[i];
        return temp;
    }

    Vector operator*=(int fact)
    {
        for (int i = 0; i < this->size; i++)
            this->arr[i] *= fact;
        return *this;
    }

    Vector operator/=(int fact)
    {
        for (int i = 0; i < this->size; i++)
            this->arr[i] /= fact;
        return *this;
    }

    friend ostream &operator<<(ostream &out, Vector v);
    friend istream &operator>>(istream &out, Vector &v);

    friend Vector operator--(Vector &);
    friend Vector operator--(Vector &, int);
    Vector operator++()
    {
        for (int i = 0; i < this->size; i++)
            ++this->arr[i];
        return *this;
    };
    Vector operator++(int)
    {
        Vector prev(this->size);
        for (int i = 0; i < this->size; i++)
            prev.arr[i] = this->arr[i]++;
        return prev;
    }

    operator float()
    {
        float mag = 0;
        for (int i = 0; i < this->size; i++)
        {
            mag += arr[i] * arr[i];
        }

        return sqrt(mag);
    }

    operator Matrix()
    {
        Matrix mat(1, this->size);
        for (int i = 0; i < this->size; i++)
        {
            mat.mat[0][i] = this->arr[i];
        }
        return mat;
    }
};

ostream &operator<<(ostream &out, Vector v)
{
    for (int i = 0; i < v.size; i++)
    {
        out << v.arr[i] << ' ';
    }
    out << endl;
    return out;
}

istream &operator>>(istream &in, Vector &v)
{
    cout << "\nInsert " << v.size << " values:\n";
    for (int i = 0; i < v.size; i++)
    {
        in >> v.arr[i];
    }
    return in;
}

Vector operator--(Vector &v)
{
    for (int i = 0; i < v.size; i++)
        --v.arr[i];
    return v;
}
Vector operator--(Vector &v, int)
{
    Vector prev(v.size);
    for (int i = 0; i < v.size; i++)
        prev.arr[i] = v.arr[i]++;
    return prev;
}

class Matrix
{
    int row, col;
    int **mat;

public:
    Matrix(int row, int col)
    {
        this->row = row;
        this->col = col;
        this->mat = new int *[row];
        for (int i = 0; i < row; i++)
            mat[i] = new int[col];
    }

    Matrix(const Matrix &m)
    {
        this->row = m.row;
        this->col = m.col;
        this->mat = new int *[row];
        for (int i = 0; i < row; i++)
            mat[i] = new int[col];
    }

    friend class Vector;
};

int main()
{
    Vector v1(5), v2(5), v3(5);
    cout << "Enter values in v1";
    cin >> v1;
    cout << "Enter values in v2";
    cin >> v2;
    cout << "V1:" << v1;
    cout << "V2:" << v2;
    v3 = v1 + v2;
    cout << "v1+v2:" << v3;
    v3 = v1 - v2;
    cout << "v1-v2:" << v3;
    v3 = v1 * v2;
    cout << "v1*v2:" << v3;
    v3 = v1 / v2;
    cout << "v1/v2:" << v3;
    v1 *= 2;
    cout << "v1 *= 2:" << v1;
    v1 /= 2;
    cout << "v1 /= 2:" << v1;
    cout << v1++ << ++v1 << --v2 << v2--;
    float magnitude = v1;
    cout << "\nMagnitude v1:" << magnitude;
    cout << "\nMagnitude v2:" << (float)v2;
    return 0;
}