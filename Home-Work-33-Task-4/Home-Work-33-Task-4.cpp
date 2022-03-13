#include <iostream>

template<typename T>
void loadData(T data[5]) {
    T data_enter;
    for (int i = 0; i < 5; ++i) {
        std::cin >> data_enter;
        data[i] = data_enter;
    }
}

template<typename T>
T average(T data[5]) {
    T sum = 0;
    for (int i = 0; i < 5; ++i) {
        sum += data[i];
    }
    return sum / 5;
}

int main()
{
    int data_int[5];
    loadData(data_int);
    std::cout << "Average: " << average(data_int) << std::endl;

    double data_dbl[5];
    loadData(data_dbl);
    std::cout << "Average: " << average(data_dbl) << std::endl;

    float data_flt[5];
    loadData(data_flt);
    std::cout << "Average: " << average(data_flt) << std::endl;

    return 0;
}