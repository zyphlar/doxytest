/*INT_REVISION*/

/*INT_COPYRIGHT*/

/** @file dns.h
 *  @brief Domain Name Server Header File
 */

/** @addtogroup dnsGroup DNS - Domain Name System
 * The current DNS system is agnostic about the use of IPADDR, IPADDR6 or IPADDR4. The capability of C++
 * is such that you pass in any of those types and the compiler will select the correct function for
 * that type. This is a change from tools versions 3.4.0 and earlier in which explicit IPv4 and IPv6
 * functions were used.
 *
 * \note While we are pointing out the automatic functionality in this DNS API, the same is true
 * for most functions, structures and classes throughout the API libraries.
 *
 *  @{
 */

#include <nettypes.h>
#include <buffers.h>
#include <udp.h>

/** @addtogroup dnsReturnCodeGroup DNS Return Codes
 *  @{
 */
#define FOO (0)     ///< Foo
#define BAR (1)      ///< Bar

/** @} */

/** @} */
