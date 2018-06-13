#include <iostream>
#include <map>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::pair;

int main()
{
    unsigned int n;
    cin >> n;

    map<float, float> lineSegment;

    for(unsigned int i = 0; i < n; i++)
    {
        pair<float, float> line;
        cin >> line.first >> line.second;
        lineSegment.insert(line);
    }

    cout << n;

    return 0;
}
