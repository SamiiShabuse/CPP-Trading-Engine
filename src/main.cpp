#include "Order.hpp"
#include <iostream>

void printOrder(const Order& order) {
    std::cout << "Order " 
              << order.order_id
              << ": " << (order.side == Side::Buy ? "BUY " : "SELL ") 
              << order.price / 100.0 
              << " x " 
              << order.quantity 
              << std::endl;
}


int main() {
    
    // Introduced in C++20 where you can do .var_name for an object
    Order order1{
        .order_id=1,
        .price=10025,
        .quantity=50,
        .side=Side::Buy,
    };

    Order order2 {
       .order_id=2,
       .price=10020,
       .quantity=100,
       .side=Side::Buy, 
    };

    Order order3 {
        .order_id=3,
        .price=10030,
        .quantity=75,
        .side=Side::Sell,
    };

    printOrder(order1);
    printOrder(order2);
    printOrder(order3);

    return 0;
}
