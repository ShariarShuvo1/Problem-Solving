#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    double average(vector<int>& salary) {
        int max_sal = 999;
        int max_sal_count = 0;
        int min_sal = 1000001;
        int min_sal_count = 0;
        int total = 0;
        for (auto sal: salary){
            if (sal > max_sal){
                max_sal = sal;
                max_sal_count = 0;
            }
            if (sal < min_sal){
                min_sal = sal;
                min_sal_count = 0;
            }
            if (sal == max_sal){
                max_sal_count++;
            }
            if (sal == min_sal){
                min_sal_count++;
            }
            total += sal;
        }
        total = total - ((max_sal * max_sal_count) + (min_sal * min_sal_count));
        int count = salary.size() - (max_sal_count + min_sal_count );
        double result = (1.0* total) / count;
        return result;
    }
};