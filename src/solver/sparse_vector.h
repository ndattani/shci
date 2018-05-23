#pragma once

#include <cstddef>
#include <vector>
#include "../util.h"

class SparseVector {
 public:
  void append(const size_t index, const double value) {
    indices.push_back(index);
    values.push_back(value);
  }

  size_t size() const { return indices.size(); }

  size_t get_index(const size_t i) const { return indices.at(i); }

  double get_value(const size_t i) const { return values.at(i); }

  void sort() { Util::sort_by_first<size_t, double>(indices, values); }

 private:
  std::vector<size_t> indices;

  std::vector<double> values;
};