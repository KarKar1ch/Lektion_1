#include <iostream>
#include <vector>
#include <cmath>


bool is_prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    size_t count = 500100;
    std::vector<int> vec;

    vec.reserve(count - 500000);

    for (int i = 500000; i <= count; i++) {
        vec.push_back(i);
    }

    int valid = 0;

    for (size_t i = 0; i < vec.size(); i++) {
        int current_num = vec[i];
        int prime_divisors_count = 0;
        int limit = std::sqrt(current_num);
        for (int j = 2; j <= limit; j++) {
            if (current_num % j == 0) {
                if (is_prime(j)) {
                    prime_divisors_count++;
                }

                if (j != current_num / j) {
                    if (is_prime(current_num / j)) {
                        prime_divisors_count++;
                    }
                }
            }
        }

        if (prime_divisors_count == 2) {
            valid++;
            std::cout << current_num << "\n";
        }
    }

    std::cout << valid << "\n";
    return 0;
}
