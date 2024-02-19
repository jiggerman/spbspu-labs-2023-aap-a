#ifndef CONCAVE_HPP
#define CONCAVE_HPP

#include <iostream>
#include "shape.hpp"
#include "triangle.hpp"
#include "data_process.hpp"

namespace ishmuratov
{
  class Concave : public Shape
  {
    public:
      Concave(const point_t & point1, const point_t & point2, const point_t & point3, const point_t & point4);
      virtual ~Concave();
      virtual void triangleCut(Triangle * array);
      virtual double getArea();
      virtual rectangle_t getFrameRect() const;
      virtual void move(point_t & position);
      virtual void move(double dx, double dy);
      virtual void scale(double factor);
    private:
      point_t corners_[3];
      point_t center_;
  };
}

#endif
