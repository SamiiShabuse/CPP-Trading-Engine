#include "Order.hpp"

int main() {

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
}