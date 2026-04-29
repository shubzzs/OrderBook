#include "OrderBook.hpp"

void OrderBook::addOrder(const OrderObjects& orderobj)
{
    if(orderobj.getSide() == Side::BUY)
    {
        orderBook_[0].push_back(orderobj);
    }

    orderBook_[1].push_back(orderobj);
}

void OrderBook::removeOrder(size_t id , const OrderObjects& orderobj)
{
    if(orderobj.getSide() == Side::BUY)
    {
        auto& buyOrders = orderBook_[0];
        buyOrders.erase(std::remove_if(buyOrders.begin(), buyOrders.end(),
                                      [id](const OrderObjects& order) { return order.getId() == id; }),
                        buyOrders.end());
    }
    else
    {
        auto& sellOrders = orderBook_[1];
        sellOrders.erase(std::remove_if(sellOrders.begin(), sellOrders.end(),
                                       [id](const OrderObjects& order) { return order.getId() == id; }),
                         sellOrders.end());
    }
}

void OrderBook::modifyOrder(size_t id , const OrderObjects& orderobj)
{
    if(orderobj.getSide() == Side::BUY)
    {
        auto& buyOrders = orderBook_[0];
        for(auto& order : buyOrders)
        {
            if(order.getId() == id)
            {
                order = orderobj;
                break;
            }
        }
    }
    else
    {
        auto& sellOrders = orderBook_[1];
        for(auto& order : sellOrders)
        {
            if(order.getId() == id)
            {
                order = orderobj;
                break;
            }
        }
    }
}

void OrderBook::displayOrderBook() const
{
    std::cout << "Buy Orders:\n";
    for(const auto& order : orderBook_[0])
    {
        std::cout << "Id: " << order.getId() << ", Price: " << order.getPrice() 
                  << ", Quantity: " << order.getQuantity() << '\n';
    }

    std::cout << "Sell Orders:\n";
    for(const auto& order : orderBook_[1])
    {
        std::cout << "Id: " << order.getId() << ", Price: " << order.getPrice() 
                  << ", Quantity: " << order.getQuantity() << '\n';
    }
}

