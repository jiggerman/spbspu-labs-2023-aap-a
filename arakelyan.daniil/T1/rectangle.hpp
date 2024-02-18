#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include "base-types.hpp"
#include "shape.hpp"
#include <stdexcept>

namespace arakelyan
{
  class Rectangle: public Shape
  {
  public:
    Rectangle(point_t fp, point_t sp);
    virtual double getArea() const;
    virtual rectangle_t getFrameRect() const;
    virtual void move(const point_t point);
    virtual void move(const double delX, const double delY);
    virtual void scaleShape(const double k);
    virtual ~Rectangle() = default;
  private:
    virtual void scale(const double k)
    {
      if (k < 0.0)
      {
        throw std::logic_error("k cannot be less than zero!");
      }
    };
    point_t pointRightUp_;
    point_t pointLeftDown_;
  };
}
#endif
