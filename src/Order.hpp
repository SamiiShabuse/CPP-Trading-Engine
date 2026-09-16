#include <cstdint>

enum class Side {
    Buy, 
    Sell
};

struct Order {
    std::uint64_t order_id;
    std::int64_t price;
    std::uint32_t quantity;
    Side side; 
};