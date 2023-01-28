#include <iostream>
#include <stdexcept>
#include <string>
#include <experimental/filesystem>
#include <unistd.h>
#include <limits.h>
#include <limits.h>

class GetCwd {
public:
    std::string operator()() {
        char cwd[PATH_MAX];
        if (getcwd(cwd, sizeof(cwd)) == NULL) {
            throw std::runtime_error("getcwd() error");
        } 
        std::string result = cwd;
        return result;
    }
};

class CurrentPath {
public:
    std::string operator()() {
        return std::experimental::filesystem::current_path();
    }
};

class GetLine {
public:
    std::string operator()() {
        return "";
    }
};
