#include <iostream>
#include <set>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::set;
using std::pair;

int main()
{
    int n;
    scanf("%d", &n);

    set<pair<float, float>> lines;

    for(unsigned int i = 0; i < n; i++)
    {
        pair<float, float> line;
        cin >> line.first >> line.second;

        lines.insert(line);
    }

    cout << n;

    return 0;
}
