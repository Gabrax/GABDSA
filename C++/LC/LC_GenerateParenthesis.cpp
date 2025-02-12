#include <vector>
#include <string>
#include <queue>
#include <tuple>
#include <iostream>

std::vector<std::string> generateParenthesis(int n) {
    std::vector<std::string> result;
    std::queue<std::tuple<std::string, int, int>> q;
    
    // Initial state: empty string with 0 open and 0 close parentheses
    q.push({"", 0, 0});

    while (!q.empty()) {
        auto [current, openCount, closeCount] = q.front();
        q.pop();

        // If the string reaches max length, store it
        if (current.length() == 2 * n) {
            result.push_back(current);
            continue;
        }

        // Add an open parenthesis if we can
        if (openCount < n) {
            q.push({current + "(", openCount + 1, closeCount});
        }

        // Add a close parenthesis if valid
        if (closeCount < openCount) {
            q.push({current + ")", openCount, closeCount + 1});
        }
    }
    
    return result;
}

int main()
{
  std::vector<std::string> vec = generateParenthesis(3);

  for(const auto& i : vec) std::cout << i << " ";
}
