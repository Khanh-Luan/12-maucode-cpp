#include <bits/stdc++.h>
#define MAX 100

int demSoChan(int *A, int n, int i)
{
    if (i >= n)
        return 0;

    if (A[i] % 2 == 0)
        return 1 + demSoChan(A, n, i + 1);
    else
        return demSoChan(A, n, i + 1);
}

void nhapMang(int A[], int &n)
{
    std::cout << "Nhap so phan tu: ";
    std::cin >> n;

    if (n > MAX)
    {
        std::cout << "Nhap so phan tu: ";
        std::cin >> n;
    }

    std::cout << "Nhap cac phan tu: " << std::endl;
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }
}

int main()
{
    int A[MAX];
    int n;

    nhapMang(A, n);
    std::cout << "Dem so chan cua mang: " << demSoChan(A, n, 0);
    return 0;
}
