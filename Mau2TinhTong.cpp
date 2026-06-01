#include <bits/stdc++.h>
#define MAX 100

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

int tongMang(int *A, int n, int i)
{
    if (i >= n)
        return 0;

    return A[i] + tongMang(A, n, i + 1);
}

int main()
{
    int A[MAX];
    int n;

    nhapMang(A, n);
    std::cout << "Tong cua mang: " << tongMang(A, n, 0);
    return 0;
}