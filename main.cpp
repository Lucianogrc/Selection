#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& vec) {
    int n = vec.size();

    for(int i=0, i < n-1; i++ ) {
        int minVal = i;
        for(int j= i+1; j < n; j++) {
            if(vec(j) < vec(minVal)) {
                minVal = j;
            }
        }
        if(minVal i)
    }

}

int main()
{
    vector<int> vec = {}
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
