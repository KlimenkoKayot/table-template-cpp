#include "table-template-cpp.h"

template<typename T>
Table<T>::Table(size_t n, size_t m) {
	data.resize(n, std::vector<T>(m));
}

template <typename T>
const std::vector<T>& Table<T>::operator[](size_t i) const {
	return data[i];
}

template <typename T>
std::vector<T>& Table<T>::operator[](size_t i) {
	return data[i];
}

template <typename T>
void Table<T>::resize(size_t n, size_t m) {
	data.resize(n);
	for (size_t i = 0; i < n; ++i) {
		data[i].resize(m);
	}
}

template <typename T>
std::pair<size_t, size_t> Table<T>::size() const {
	if (data.empty()) {
		return std::make_pair(0, 0);
	}
	return std::make_pair(data.size(), data[0].size());
}