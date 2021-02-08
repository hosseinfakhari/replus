#include <iostream>
#include <sw/redis++/redis++.h>

using namespace sw::redis;

int main(int argc, char **argv){
    std::cout << "replus" << std::endl;
    try {
        auto redis = Redis("tcp://127.0.0.1:6379");
        redis.set("replus-version", "0.0.1");
        auto val = redis.get("replus-version");
        if(val) {
            std::cout << "replus version: " << *val << std::endl;
        }
    } catch (const Error &e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}