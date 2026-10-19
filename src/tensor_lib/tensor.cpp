#include "tensor.hpp"

namespace frew
{

template <Tensor_dtype T> [[nodiscard]] const Metadata& Tensor<T>::metadata() const
{
    return this->_metadata;
}

// I know this may seem extremely complicated at first but this is only and only to make the API
// simpler to use when the time comes. So please hold on!
} // namespace frew
