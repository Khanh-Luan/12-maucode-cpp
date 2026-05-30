#include <iostream>
using namespace std;

void nhapMang(int *&A, int &n)
{
    cout << "Nhap so phan tu: ";
    cin >> n;

    if (n <= 0)
    {
        A = NULL;
        return;
    }

    A = new int[n];

    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
}

void xuatSoLe(int *A, int n, int i)
{
    if (i >= n)
        return;

    if (A[i] % 2 != 0)
        cout << A[i] << " ";

    xuatSoLe(A, n, i + 1);
}

int main()
{
    int *A = NULL;
    int n;

    nhapMang(A, n);

    cout << "Cac so le trong mang: ";
    xuatSoLe(A, n, 0);

    delete[] A;
    return 0;
}