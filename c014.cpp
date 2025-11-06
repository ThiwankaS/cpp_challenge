#include <iostream>
#include <algorithm>
#include <numeric>
#include <regex>
#include <vector>
#include <sstream>

static const std::regex ISBN10("^(\\d[ -]?){9}[\\dXx]$");
static const std::regex ISBN13("^(97[89][ -]?){1}(\\d[ -]?){9}\\d$");

bool validate_isbn_10(std::string isbn) {
    auto valid = false;
    if(std::regex_match(isbn, ISBN10)) {
        auto w = 10;
        auto sum = std::accumulate(isbn.begin(), isbn.end(), 0,
        [&w](const int total, const char c){
            if(isdigit(c)) {
                return (total + (w-- * (c - '0')));
            } else {
                return (total);
            }
        });
        valid = !(sum % 11);
    }
    return (valid);
}

bool validate_isbn_13(std::string isbn) {
    auto valid = false;
    if(std::regex_match(isbn, ISBN13)) {
        auto w = 3;
        auto sum = std::accumulate(isbn.begin(), isbn.end(), 0,
        [&w](const int total, const char c){
            if(isdigit(c)) {
                w == 3 ? w = 1 : w = 3;
                return (total + (w * (c - '0') * 3));
            } else {
                return (total);
            }
        });
        valid = !(sum % 10);
    }
    return (valid);
}

void print_result(const std::string& s, const std::string& result){
    std::cout << s << " is " << result << " ISBN number. \n";
}

int main(int argc, char *argv[]) {
    int count = 0;

    if(argc == 2) {

        std::string s = argv[1];
        count = std::count_if(s.begin(), s.end(), isdigit);
        if(count == 10) {
            if(validate_isbn_10(s)){
                print_result(s, "a valid");
            } else {
                print_result(s, "not a valid");
            }
        } else if(count == 13) {
            if(validate_isbn_13(s)) {

                print_result(s, "a valid");
            } else {
                print_result(s, "not a valid");
            }
        } else {
            print_result(s, "not a valid");
        }
    }
    return (EXIT_SUCCESS);
}
