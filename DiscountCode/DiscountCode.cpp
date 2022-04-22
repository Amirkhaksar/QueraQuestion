#include <iostream>
#include <string>

bool is_substr(std::string base, std::string target) {
    for (auto base_char : base) {
        bool contain = false;
        for (auto target_char : target)
            if (base_char == target_char) {
                    contain = true; break;
            }
        if (not contain)
            return false;
    }
    return true;
}

int main() {
    std::string main_code;
            int codes    ;
    std::cin >> codes >> main_code;

    for (int code_index = 0; code_index < codes; ++code_index) {
        std::string code;
        std::cin >> code;
        
        if (is_substr(main_code, code) and is_substr(code, main_code))
            std::cout << "Yes";
        else
            std::cout << "No";
        std::cout << std::endl;
    }
}