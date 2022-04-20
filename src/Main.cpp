// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <iostream>
#include <bitset>
#include <vector>
#include <bits/stdc++.h>

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)

    std::bitset<31> number1(N);

    int length = 0;
    bool test1;
    bool test2;
    std::vector<int> v_length{0};

    for (size_t i = 0; i < number1.size() - 1; i++){

        test1 = number1.test(i);

        if (test1){

            for(size_t j = i + 1; j < number1.size(); j++){

                test2 = number1.test(j);

                if (!test2){

                    ++length;
                }

                else {

                    v_length.push_back(length);
                    length = 0;

                    break;

                }
                
            }
        } 
    }

    std::sort(v_length.begin(), v_length.end(), std::greater<int>());
    length = v_length[0];
    return length;
}


int main()
{

    int A = 32;
    int B = 1041;
    int C = 9;

    std::cout << solution(A) << std::endl;
    std::cout << solution(B) << std::endl;
    std::cout << solution(C) << std::endl;

    std::cin.get();


}