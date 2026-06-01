#include <iostream>

void makeArray(double prices[], int size);
double getTotal(double prices[], int size);

int main()
{
    int size;
    std::cout << "Nhap so luong phan tu: ";
    std::cin >> size;

    // cấp phát động mảng
    double *prices = new double[size];

    makeArray(prices, size);
    double total = getTotal(prices, size);

    std::cout << "Tong = $" << total << std::endl;

    // giải phóng bộ nhớ
    delete[] prices;

    return 0;
}

void makeArray(double prices[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Nhap gia tri thu " << i + 1 << ": ";
        std::cin >> prices[i];
    }
}

double getTotal(double prices[], int size)
{
    double total = 0;

    for (int i = 0; i < size; i++)
    {
        total += prices[i];
    }

    return total;
}
