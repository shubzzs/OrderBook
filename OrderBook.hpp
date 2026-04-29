#pragma once

#include "Order.hpp"

class OrderBook
{
    private:
    std::array<std::vector<OrderObjects>, 2> orderBook_;
    public:
        OrderBook() = default;
        void addOrder(const OrderObjects& orderobj);
        void removeOrder(size_t id , const OrderObjects& orderobj);
        void modifyOrder(size_t id , const OrderObjects& orderobj);
        void displayOrderBook() const;
};
