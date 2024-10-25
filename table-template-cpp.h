#pragma once

#include <iostream>
#include <vector>

template <typename T>
class Table {
private:
	std::vector<std::vector<T>> data;

public:
	Table(size_t n, size_t m);
	void resize(size_t n, size_t m);
	std::pair<size_t, size_t> size() const;

	const std::vector<T>& operator[](size_t i) const;
	std::vector<T>& operator[](size_t i);
};