
#include <iostream>
#include <vector>
#include <string>
using namespace std;

//range based for loop (slide 36)
// int main() {
//     string s = "hello";
//     for (auto c: s)
//         cout << c << endl;
// }

/* Output:
h
e
l
l
o
*/

//OR,  using vector (slide 37)
int main() {
    vector<int> v = {1,2,3,4,5};
    for (auto n: v)
        cout << n << endl;
}
/* Output:
1
2
3
4
5
*/

