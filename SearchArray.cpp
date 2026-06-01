#include <iostream>
void makeArray(double array[], int size);
void SearchArray(double array[], int size, int somethinglikethat);

int main()
{
    int size;
    std::cout << "Nhap so luong phan tu: ";
    std::cin >> size;

    double *array = new double[size];

    makeArray(array, size);

    int somethinglikethat;
    std::cout << "Nhap thu can tim: ";
    std::cin >> somethinglikethat;

    SearchArray(array, size, somethinglikethat);

    delete[] array;

    return 0;
}

void makeArray(double array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << "Nhap gia tri thu " << i + 1 << ": ";
        std::cin >> array[i];
    }
}

void SearchArray(double array[], int size, int somethinglikethat)
{
    for (int i = 0; i < size; i++)
    {
        if (somethinglikethat == array[i])
            std::cout << "Array have somethinglikethat !\n";
        std::cout << "Array don't have somethinglikethat";
    }
}