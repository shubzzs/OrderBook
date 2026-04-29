#include <iostream>

#include "Order.hpp"
#include "OrderBook.hpp"

using namespace std;
int main()
{
    OrderObjects order1(1, 100, 10, Side::BUY, OrderType::LIMIT);
    cout << "Order Id : " << order1.getId() << '\n';
    cout << "Order Price : " << order1.getPrice() << '\n';
    cout << "Order Quantity : " << order1.getQuantity() << '\n';
    cout << "Order Side : " << (order1.getSide() == Side::BUY ? "BUY" : "SELL") << '\n';
    cout << "Order Type : " << (order1.getType() == OrderType::MARKET ? "MARKET" : "LIMIT") << '\n';

    cout << "-----------------------------" << '\n';
    
    OrderObjects order2(2, 70, 20, Side::SELL, OrderType::LIMIT);
    cout << "Order Id : " << order2.getId() << '\n';
    cout << "Order Price : " << order2.getPrice() << '\n';
    cout << "Order Quantity : " << order2.getQuantity() << '\n';
    cout << "Order Side : " << (order2.getSide() == Side::BUY ? "BUY" : "SELL") << '\n';
    cout << "Order Type : " << (order2.getType() == OrderType::MARKET ? "MARKET" : "LIMIT") << '\n';

    cout << "-----------------------------" << '\n';
    OrderBook orderBook;
    orderBook.addOrder(order1);
    orderBook.addOrder(order2);
    orderBook.displayOrderBook();
    OrderObjects order3(3, 100, 10, Side::BUY, OrderType::LIMIT);
    /* cout << "Order Id : " << order3.getId() << '\n'; */
    /* cout << "Order Price : " << order3.getPrice() << '\n'; */
    /* cout << "Order Quantity : " << order3.getQuantity() << '\n'; */
    /* cout << "Order Side : " << (order3.getSide() == Side::BUY ? "BUY" : "SELL") << '\n'; */
    /* cout << "Order Type : " << (order3.getType() == OrderType::MARKET ? "MARKET" : "LIMIT") << '\n'; */

    orderBook.addOrder(order3);
    orderBook.displayOrderBook();

    cout << "-----------------------------" << '\n';
    cout << "Order Removed-----------------------\n";
    orderBook.removeOrder(2 , order2);
    orderBook.displayOrderBook();



    return 0;
}
