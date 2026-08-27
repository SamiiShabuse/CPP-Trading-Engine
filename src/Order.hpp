enum class Side {
    Buy, 
    Sell
};

struct Order {
    long order_id;
    int price;
    int quantity;
    Side side; 
};