#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int numbers[] = {12,28,9,43,4,92,2};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    int min = *min_element(numbers, numbers + n);
    
    int max = *max_element(numbers, numbers + n);

    cout << "Min : " << min << endl;
    cout << "Max : " << max;

    return 0;
}
