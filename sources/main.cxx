#include <metaforce/metaforce.hxx>
#include <iostream>

int main() {
    auto i = 0;
    auto lambda = [&]() {
        std::cout << "iteration: " << ++i << std::endl;
    };
    nd::metaforce::repeat<10, decltype(lambda)>::action(lambda);
    return EXIT_SUCCESS;
}
