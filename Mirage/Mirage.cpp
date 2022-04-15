#include <iostream>

int main() {
          int questions = 0; // count of donkey questions
  std::cin >> questions    ;

  for (int question_index = 0; question_index < questions; ++question_index) {
            int x,   y; // donkey question
    std::cin >> x >> y;

    // if it's on the left line
    if (x == y)
      std::cout << 2 * y - x % 2;
    // if it's on the right line
    else if (x-2 == y)
      std::cout << 2 * y + (x + 1) % 2 + 1;
    // if it's not on left or right line, there is no answer!
    else
      std::cout << -1;
    std::cout << std::endl;
  }
}