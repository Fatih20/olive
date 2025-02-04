#ifndef LERP_H
#define LERP_H

template<typename T>
/**
 * @brief Linearly interpolate a value between a and b using t
 */
T lerp(T a, T b, double t) {
  return (a * (1.0 - t)) + (b * t);
}

#endif // LERP_H
