//Jie Shi
//CIS 1202 502
//12/6/2020
#include <iostream>
#include <cmath>

using namespace std;
template <class T>
T half(T num) {
	T result;
	result = num / 2;
	return result;
}

int half(int num) {
    int result;
    result = round(static_cast<double>(num) / 2);
    return result;
	
}

int main() {
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;
}
