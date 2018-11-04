/*
 * created by Danil Kireev, PFUR NFIbd-01-17, 17.10.18, 09:00
 */
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "Q.h"

using namespace std;

/*
 * № 20
 * Дан массив ненулевых целых чисел размера N.
 * Проверить, образуют ли его элементы геометрическую прогрессию.
 * Если не образует, число, начиная с которого нарушается прогрессия переместить в конец массива.
 */

int main() {
    cout << "проверка, образует ли эллемента массива геометрическую прогрессию,";
    cout << "а если не образует переместить ошибочный элемент в конец" << endl;
    Q obj;
    int *res, n;
    n = obj.user_input();
    obj.print();
    res = obj.fun();
    cout << "вывод получееного массива: " << endl;
    for(int i=0; i<n; i++) cout << res[i] << " ";
    cout << endl;
    cout << "вывод оригинального массива: " << endl;
    obj.print();
    return 0;
}