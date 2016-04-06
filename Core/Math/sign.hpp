#ifndef CORE_MATH_SIGN_H_
#define CORE_MATH_SIGN_H_

namespace core {
namespace math {

template<class T>
    const int sign(T val){
	return (T(0) < val) - (T(0) > val);
    }

} //math
} //core

#endif