#include <iostream>

using namespace std;

int mean() {
  

    int total = 100;
    double midscore = 74.5;
    double midweight = 0.30;

    double cumPer = (midscore / total) * 100 * midweight;
    cout << "Cumulative Percentage for Mid-Term Exam: " << cumPer << "%" << endl;

    return 0;
}



