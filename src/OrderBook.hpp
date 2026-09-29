#pragma once

#include "Order.hpp"
#include <map>
#include <deque>

class OrderBook {
private:
    // Bids will go here
    std::map<std::int64_t, std::deque<Order>, std::greater<std::int64_t>> bids;

    // Asks will go here
    std::map<std::int64_t, std::deque<Order>> asks;

public:
    void addOrder(const Order& order);
}