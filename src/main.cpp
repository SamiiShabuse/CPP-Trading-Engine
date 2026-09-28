#include "Order.hpp"
#include <iostream>

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

    std::cout << "Order " 
              << order1.order_id
              << ": " << (order1.side == Side::Buy ? "BUY " : "SELL ") 
              << order1.price / 100.0 
              << " x " 
              << order1.quantity 
              << std::endl;

    std::cout << "Order " 
              << order2.order_id
              << ": " << (order2.side == Side::Buy ? "BUY " : "SELL ") 
              << order2.price / 100.00 
              << " x " 
              << order2.quantity 
              << std::endl;

    std::cout << "Order " 
              << order3.order_id
              << ": " << (order3.side == Side::Buy ? "BUY " : "SELL ") 
              << order3.price / 100.00 
              << " x " 
              << order3.quantity 
              << std::endl;
}
