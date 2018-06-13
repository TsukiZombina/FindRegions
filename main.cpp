#include <iostream>
#include <map>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::map;

int main()
{
    unsigned int n;
    cin >> n;

    map<float, float> lineSegments;

    for(unsigned int i = 0; i < n; i++)
    {
        map<float, float> line;
        cin >> line.key_comp() > line.value_comp();

        lineSegments.insert(line);
    }

    cout << n;

    return 0;
}
