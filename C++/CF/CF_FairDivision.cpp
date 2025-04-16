#include <cstdint>
#include <iostream>

int main()
{
  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  int32_t T; std::cin >> T;
  while (T--) {
    int32_t n; std::cin >> n;
    int32_t ones = 0, twos = 0;
    while (n--) {
      int32_t c; std::cin >> c;
      c == 1 ? ones++ : twos++;
    }

    if ((ones + 2 * twos) % 2 != 0) puts("NO");
    else {
      if (ones == 0 && (twos % 2 != 0)) puts("NO");
      else if (ones % 2 != 0) puts("NO");
      else puts("YES");
    }
  }
}
