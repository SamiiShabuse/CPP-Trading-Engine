#include <Order.hpp>

int main() {

    Order order1{
        order1.order_id=1,
        order1.price=10025,
        order1.quantity=50,
        order1.side=Side::Buy,
    };

    Order order2 {
       order2.order_id=2,
       order2.price=10020,
       order2.quantity=100,
       order2.side=Side::Buy, 
    };

    Order order3 {
        order3.order_id=3,
        order3.price=10030,
        order3.quantity=75,
        order3.side=Side::Sell,
    };
}