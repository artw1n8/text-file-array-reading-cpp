#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int main() {
    int n = 0;
    int a[20];

    ifstream fin("input.txt");
    ofstream fout("output.txt");

    // input to massive from file
    while (!fin.eof()) {
        fin >> a[n];
        n++;
    }

    //output the input array to the console
    cout << "The input array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    //replacing negative numbers in odd places
    for (int i = 0; i < n; i++) {
        if (a[i] < 0 && (i + 1) % 2 != 0) {
            a[i] = abs(a[i]);
        }
    }

    //output the modified array to the console
    cout << "The modified array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    // output to file
    for (int i = 0; i < n;i++) {
        fout << a[i]<< " ";
    }

    fin.close();
    fout.close();
    return 0;
}
