#include <iostream>
#include <string>

// Function to check if Monocarp can paint the wall
bool canPaint(int m, std::string row1, std::string row2) {
  // Check if there is at least one black cell in each column
  for (int j = 0; j < m; j++) {
    if (row1[j] != 'B' && row2[j] != 'B') {
      return false;
    }
  }

  // Check if there is a path that satisfies the conditions
  int i = 0; // current row
  int j = 0; // current column
  while (j < m) {
    // If the current cell is black, move to the next column
    if (i == 0 && row1[j] == 'B') {
      j++;
    } else if (i == 1 && row2[j] == 'B') {
      j++;
    } else {
      // If the current cell is white, move to the other row
      i = 1 - i;
    }
  }

  // If we have visited all the black cells, return true
  return j == m;
}

int main() {
  int t; // number of test cases
  std::cin >> t;

  while (t--) {
    int m; // number of columns
    std::cin >> m;

    std::string row1, row2;
    std::cin >> row1 >> row2;

    if (canPaint(m, row1, row2)) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }

  return 0;
}
