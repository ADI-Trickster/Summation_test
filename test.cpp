#include <algorithm>
#include <cctype>
#include <cstdlib>
#include <stdlib.h>
#include <iostream>

using namespace std;

double tele(int num){
    double daSum=0.0;

    for(int i=0; i<= num; i++){
        daSum += 1.0/i - 1.0/(i+1);
    }
//test commit
    return daSum;
}

int main() {
    int limitUpperBound;

    cout<< "pick an upper limit: ";
    cin >> limitUpperBound;

    double res =  tele(limitUpperBound);

    cout << res;

    return 0;
}