#include <cstdint>
#include <type_traits>

namespace nd {
namespace metaforce {

template <uint16_t N, typename F>
struct repeat {
    static void action(const F &f) {
        f(); repeat<N - 1, F>::action(f); 
    }
};

template <typename F>
struct repeat <0, F> {
    static void action(const F &f) { }
};

}
}
