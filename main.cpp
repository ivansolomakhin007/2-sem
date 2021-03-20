#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int* a = new int[n];
    // вспомогательная переменная для обмена значений
    int c;
    for (int i=0; i < n; i ++) {
        std::cin >> *(a + i);
    }
    int p_positive;
    int p_negative;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if (a[j] <= 0) { // экспериментируем с >= 0
                p_negative = j;
                for(int k = p_negative; k < n; k++) {
                    if (a[j] < a[k] &&  a[k] <= 0) {
                        c = a[j];
                        a[j] = a[k];
                        a[k] = c;
                        for (int i=0; i < n; i ++) {
                            std::cout << a[i] << ' ';
                        }
                        std::cout << std::endl;
                    }
                }

            }
            else if (a[j] >= 0) {
                p_positive = j;
                for(int k = p_positive; k < n; k++) {
                    if (a[j] > a[k] && a[k] >= 0) {
                        c = a[j];
                        a[j] = a[k];
                        a[k] = c;
                        for (int i=0; i < n; i ++) {
                            std::cout << a[i] << ' ';
                        }
                        std::cout << std::endl;
                    }
                }

            }
        }
    }
    return 0;
}
