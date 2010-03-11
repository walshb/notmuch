/* Everything in this config.h is currently hard-coded. If you'd like
 * something more sophisticated here, we could do that in the notmuch
 * configure script. Let us know at notmuch@notmuchmail.org
 */

#ifndef GETDATE_CONFIG_H
#define GETDATE_CONFIG_H

#if __GNUC__ > 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)
# define _GL_UNUSED __attribute__((unused))
#else
# define _GL_UNUSED
#endif

#endif
