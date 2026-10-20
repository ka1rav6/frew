#ifndef FREW_TENSOR_HPP
#define FREW_TENSOR_HPP

#include "../common.hpp"

#include <memory>
#include <ostream>
#include <utility>
#include <vector>
// I know that I am using macros a lot... but i just love them! and they do not impact runtimes so
// yes i will!

#define PRINT_VEC(os, x)                                                                           \
    do                                                                                             \
    {                                                                                              \
        (os) << "[";                                                                               \
        for (size_t i = 0; i < (x).size(); ++i)                                                    \
        {                                                                                          \
            if (i > 0)                                                                             \
                (os) << ", ";                                                                      \
            (os) << (x)[i];                                                                        \
        }                                                                                          \
        (os) << "]";                                                                               \
    } while (0)

namespace frew
{

// let us start by defining a proper storage of our tensor
template <Tensor_dtype T> struct Storage // so our data is actually stored in a linear vector
{
    std::vector<T> data;
};

// and we use something known as `strides` to get to a particular index/ get to where ever we want
// you will see the use of this once we try to write the transpose function

struct Metadata
{
    std::vector<size_t> shape;
    std::vector<size_t> strides; // we will understand why strides are a vector in due time
    size_t offset{};
    Metadata() = default;
    ~Metadata() = default;
    // deleting the copy constructor for now. Might need it when we are copying the metadata while
    // copying a tensor
    Metadata(const Metadata&) = delete;
};

// standard printing of the metadata
std::ostream& operator<<(std::ostream& os, const Metadata& md);

template <Tensor_dtype T> class Tensor
{
public:
    // constructors, important publically avaliable functions

    // a simple getter for the metadata of the tensor
    [[nodiscard]] const Metadata& metadata() const
    {
        return this->_metadata;
    }

private:
    // metadata
    std::shared_ptr<Storage<T>> _storage;
    Metadata _metadata;
};

} // namespace frew

#endif
