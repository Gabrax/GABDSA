#include <cstddef>
#include <cstdint>
#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

int main() {
    std::cin.tie(0)->sync_with_stdio(0);

    std::string guest,host,pile;
    std::cin >> guest >> host >> pile;

    std::string res = guest + host;
    std::sort(res.begin(),res.end());
    std::sort(pile.begin(),pile.end());

    res == pile ? puts("YES") : puts("NO");
}
