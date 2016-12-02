#include <iostream>
#include <vector>

class solution {
  public:
    int majorityElement(const std::vector<int> & nums) {
        int curr = nums[0], count = 1;
        for (auto it = nums.begin()+1; it != nums.end(); ++it) {
            if (*it == curr)
                count++;
            else {
                count--;
                if (!count) {
                    curr = *it;
                    count++;
                }
            }
        }
        return curr;
    }
};

int main() {
    std::vector<int> nums{1,2,3,2,2,2,5};

    solution soln;
    int majorElem = soln.majorityElement(nums);
    std::cout << "The majority element is:\n"
              << majorElem << std::endl;
}
