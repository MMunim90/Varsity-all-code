/*9. Write a C++/Java program that calculates the summation of any given series of numbers
using the concepts of class and objects. [No static initialization will be allowed. Any input must
be through the constructor functions and the output through the member functions.]*/


#include <iostream>
#include <vector>
using namespace std;

class SeriesSummation {
private:
    vector<int> numbers;

public:
    SeriesSummation(const vector<int>& nums) : numbers(nums) {}

    int calculateSum() {
        int sum = 0;
        for (int num : numbers) {
            sum += num;
        }
        return sum;
    }

    void displayResult() {
        int result = calculateSum();
        cout << "The summation of the series is " << result << "." << endl;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements in the series: ";
    cin >> n;

    vector<int> numbers(n);

    cout << "Enter the elements of the series:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    SeriesSummation series(numbers);
    series.displayResult();

    return 0;
}
