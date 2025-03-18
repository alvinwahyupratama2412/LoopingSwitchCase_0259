#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x;
    int perulanganWhile = 0;
    int perulanganDoWhile = 0;
    // Perulangan while
    cout << "perulangan dengan while" << endl;
    srand (time(0));
    x = rand() %10;
    cout << "Nilai awal x = " << x << endl;
    while(x < 7){
        cout <<"nilai x =" << x << endl;
        x = rand() % 10;
        perulanganWhile++;
    }
    cout << "Nilai akhir x = " << x << endl;
    cout << "jumlah perulangan = " << perulanganWhile << endl;
    cout << endl;
    cout << "perulangan dengan do while" << endl;
}