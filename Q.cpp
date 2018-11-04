//
// Created by danai on 17/10/18.
//

#include "Q.h"

Q::Q() {
    n=0;
    a=new int[n];
}

Q::Q(int nn) {
    n=nn;
    a=new int[n];
}

Q::Q(int nn, int *aa) {
    n=nn;
    a=new int[n];
    for (int i = 0; i < n; ++i) a[i]=aa[i];
}

int Q::user_input() {
    cout << "введите размер массива : ";
    cin >> n;
    while(n < 2) {
        cout << "введите положительное число не менее 2 : ";
        cin >> n;
    }
    a = new int(n);
    for (int i = 0; i < n; ++i) {
        cout << "введите " << i << " элемент: ";
        cin >> a[i];
    }
    return n;
}

int* Q::fun() {
    int *res = new int(n), q, err = -1, tmp;
    for (int i = 0; i < n; ++i) res[i] = a[i];
    q = a[1]/a[0];
    for (int i = 2; i< n-1; ++i) {
        if (a[i] != (q*a[i - 1])) {
            err = i;
            i = n;
        }
    }
    cout << err << endl;
    if (err != -1) {
        swap(*(res+n-1), *(res+err));
    }
    return res;
}

void Q::print() {
    cout << "массив размера " << n << endl;
    cout << "[";
    for (int i = 0; i < n-1; ++i) cout << a[i] << ", ";
    cout << a[n-1] << "]" << endl;
}