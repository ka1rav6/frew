#include "tensor.hpp"

namespace frew
{

// standard printing of the metadata
std::ostream& operator<<(std::ostream& os, const Metadata& md)
{
    os << "[ Shape  ] : ";
    PRINT_VEC(os, md.shape);
    os << "\n" << "[ Strides ] : ";
    PRINT_VEC(os, md.strides);
    os << "\n" << "[ Offset ] : " << md.offset << "\n";
    return os;
}

// I know this may seem extremely complicated at first but this is only and only to make the API
// simpler to use when the time comes. So please hold on!
} // namespace frew
