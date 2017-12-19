#include <iostream>
#include "Carbon.h"
#include <vector>
#include <map>

using namespace std;

int main() {

Carbon Carbon12("C-12", 4438.91, 7654.20, 9641,  12710, 16570);


    Carbon12.GetCarbon();
Carbon Carbon;
    Carbon.Add(Carbon12);

map<double, Carbon> M;
        for (int i = 0; i < 5; i++) {
            M.emplace( (i+1),5 );
        }

    cout << endl;
    for (auto& x: M) {
        cout << " (" << x.first << ") " << x.second  << endl;
    }

    return 0;
}