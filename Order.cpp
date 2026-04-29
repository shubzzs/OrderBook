#include "Order.hpp"

var OrderObjects::getId() const 
{
    return order_.id;
}

Price OrderObjects::getPrice() const
{
    return order_.price;
}

Quantity OrderObjects::getQuantity() const 
{
    return order_.quantity;;
}

Side OrderObjects::getSide() const{
    return order_.side;
}

OrderType OrderObjects::getType() const{
    return order_.type;
}

Order const& OrderObjects::getOrder() const
{
    return order_;
}
