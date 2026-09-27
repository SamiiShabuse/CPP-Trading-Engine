# 9/26/2026

When I write 
```c++
<< order1.side
```
C++ errors because `Side` is an `enum class` and `std::cout` doesn't automatically know how to turn `Side::Buy` into "BUY"

# 9/16/2026

Manual method:
download compiler → unzip → find bin → PATH → manage updates yourself

MSYS2:
install MSYS2 → pacman installs compiler → PATH

C++ = language
g++ = compiler
MSYS2 = environment/tool manager
pacman = installer inside MSYS2

# 8/27/2026

`long` is not guaranteed to have the same size everywhere.

For example, depending the platform:

```text
Windows: long = 32 bits
Linux: long = 64 bits
```

For systems programming, it's often better to be explicit:

```cpp
#include <cstdint>

std::uint64_t order_id;
```

When we write

```cpp
struct Order {
    std::uint64_t order_id;
    std::int64_t price;
    std::uint32_t quantity;
    Side side;
};
```

We are not just defining 4 variables. But we are also defining a layout of bytes in memory.

Roughly

```text
order_id = 8 bytes
price = 8 bytes
quantity = 4 bytes
side = usually 4 bytes
Total = 24 bytes
```