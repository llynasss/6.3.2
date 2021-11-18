#include <iostream> 

#include <iomanip> 

#include <time.h> 



using namespace std;



template <typename T, typename d>

void create_t(T* a, d n, T l, T h, d i)

{

    a[i] = l + rand() % (h - l + 1);

    if (i < n - 1)

        create_t(a, n, l, h, i + 1);

}



void create(int* a, const int n, const int l, const int h, int i)

{

    a[i] = l + rand() % (h - l + 1);

    if (i < n - 1)

        create(a, n, l, h, i + 1);

}





template <typename T, typename d>

void print_t(T* a, d n, int i) {

    cout << " " << setw(2) << a[i];

    if (i < n - 1)

        print_t(a, n, i + 1);

}



void print(int* a, const int n, int i) {

    cout << " " << setw(2) << a[i];

    if (i < n - 1)

        print(a, n, i + 1);

}



template<typename T, typename D>

bool check_t(D a, T n, int k, int i) {

    if (!(a[i] < a[i + 1])) {

        k++;

    }



    if (i < n - 1) {

        check_t<bool>(a, n, k, i + 1);

    }



    if (k == n + 1) {

        return 1;

    }

    else return 0;

}



bool check(int* a, const int n, int k, int i) {

    if (!(a[i] < a[i + 1])) {

        k++;

    }



    if (i < n - 1) {

        check(a, n, k, i + 1);

    }



    if (k == n + 1) {

        return 1;

    }

    else return 0;

}



int main() {

    srand((unsigned)time(NULL));



    const int n = 10;

    int low = -10;

    int hight = 10;



    int a[2 * n];



    bool ch;

    bool ch_t;





    create(a, n, low, hight, 0);

    create_t<int>(a, n, low, hight, 0);





    print(a, n, 0);

    cout << endl;

    print_t<int>(a, n, 0);

    cout << endl;





    ch = check(a, n, 0, 0);

    ch_t = check_t<bool>(a, n, 0, 0);





    cout << ch << endl;

    cout << ch_t;

}