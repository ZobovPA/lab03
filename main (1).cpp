#include <iostream>
#include <vector>
#include "histogram.h"

using namespace std;



    int main() {
     Ввод данных
    size_t number_count;
    cerr << "Enter number count: ";
    cin >> number_count;

    cerr << "Enter numbers: ";
    const vector<double> numbers = input_numbers(number_count);


    size_t bin_count;
    cerr << "Enter column count: ";
   cin >> bin_count;


    Вывод данных
    const vector<size_t> bins = make_histogram(numbers, bin_count);

 show_histogram_svg(bins);



    }
