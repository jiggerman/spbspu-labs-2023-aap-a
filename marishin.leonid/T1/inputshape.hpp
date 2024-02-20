#ifndef INPUTSHAPE_HPP
#define INPUTSHAPE_HPP

#include "rectangle.hpp"
#include "triangle.hpp"
#include "ring.hpp"
#include <iostream>

namespace marishin
{
  template <typename T>
  void readArray(std::istream& in, T* array, size_t size);
  void readRectangle(std::istream& in, Shape** currentShapes, size_t& shapeCount);
  void readTriangle(std::istream& in, Shape** currentShapes, size_t& shapeCount);
  void readRing(std::istream& in, Shape** currentShapes, size_t& shapeCount);
  Shape** inputShape(std::istream& in, size_t& shapeCount);
  void cleanupShapes(Shape** shapes, size_t& count);
  void readShape(std::istream& in, Shape** currentShapes, size_t& shapeCount, const std::string& currentName);
}

#endif
