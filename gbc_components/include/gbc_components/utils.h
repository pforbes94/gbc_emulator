/**
 * @brief Wrap unused variables in UNUSED to avoid warnings when vars (typically function
 * arguments) are intentionally left unused. Ex:
 * @code
 * int f(int UNUSED(x))
 * {
 *  return 0;
 * }
 * @endcode
 */
#ifdef __GNUC__
#  define UNUSED(x) UNUSED_ ## x __attribute__((__unused__))
#else
#  define UNUSED(x) UNUSED_ ## x
#endif
