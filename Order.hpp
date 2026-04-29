// #include <bits/stdc++.h>
#pragma once
#include "all_Libs.hpp"

using Price = size_t;
using Quantity = size_t;
using var = size_t;

//Data structure for order
enum class Side
{
    BUY,
    SELL
};

enum class OrderType
{
    MARKET,
    LIMIT
};

struct Order
{
    var       id;
    var       price;
    var       quantity;
    Side      side;
    OrderType type;
};


//Data Implementation for order

class OrderObjects
{
    private:
    Order order_;
    public:
        OrderObjects(size_t id , Price price , Quantity quantity , Side side , OrderType type) :
            order_{id , price , quantity , side , type} {} 

        var getId() const;
        Price getPrice() const;
        Quantity getQuantity() const;
        Side getSide() const;
        OrderType getType() const;
        //If the all the Order are needed to return the whole order
        const Order& getOrder() const;

};
