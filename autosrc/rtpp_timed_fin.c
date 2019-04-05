/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rtpp_types.h"
#include "rtpp_debug.h"
#include "rtpp_timed.h"
static void rtpp_timed_schedule_fin(void *pub) {
    fprintf(stderr, "Method %p->schedule (rtpp_timed_schedule) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_timed_schedule_rc_fin(void *pub) {
    fprintf(stderr, "Method %p->schedule_rc (rtpp_timed_schedule_rc) is invoked after destruction\x0a", pub);
    abort();
}
static void rtpp_timed_shutdown_fin(void *pub) {
    fprintf(stderr, "Method %p->shutdown (rtpp_timed_shutdown) is invoked after destruction\x0a", pub);
    abort();
}
static const struct rtpp_timed_smethods rtpp_timed_smethods_fin = {
    .schedule = (rtpp_timed_schedule_t)&rtpp_timed_schedule_fin,
    .schedule_rc = (rtpp_timed_schedule_rc_t)&rtpp_timed_schedule_rc_fin,
    .shutdown = (rtpp_timed_shutdown_t)&rtpp_timed_shutdown_fin,
};
void rtpp_timed_fin(struct rtpp_timed *pub) {
    RTPP_DBG_ASSERT(pub->smethods != &rtpp_timed_smethods_fin &&
      pub->smethods != NULL);
    pub->smethods = &rtpp_timed_smethods_fin;
}
