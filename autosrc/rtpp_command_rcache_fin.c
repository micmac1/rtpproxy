/* Auto-generated by genfincode.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rtpp_types.h"
#include "rtpp_debug.h"
#define rtpp_command_rcache_h_fin 1
#include "rtpp_command_rcache.h"
static void rcache_insert_fin(void *pub) {
    fprintf(stderr, "Method %p->insert (rcache_insert) is invoked after destruction\x0a", pub);
    abort();
}
static void rcache_lookup_fin(void *pub) {
    fprintf(stderr, "Method %p->lookup (rcache_lookup) is invoked after destruction\x0a", pub);
    abort();
}
static void rcache_shutdown_fin(void *pub) {
    fprintf(stderr, "Method %p->shutdown (rcache_shutdown) is invoked after destruction\x0a", pub);
    abort();
}
void rtpp_cmd_rcache_fin(struct rtpp_cmd_rcache *pub) {
    RTPP_DBG_ASSERT(pub->insert != (rcache_insert_t)&rcache_insert_fin);
    pub->insert = (rcache_insert_t)&rcache_insert_fin;
    RTPP_DBG_ASSERT(pub->lookup != (rcache_lookup_t)&rcache_lookup_fin);
    pub->lookup = (rcache_lookup_t)&rcache_lookup_fin;
    RTPP_DBG_ASSERT(pub->shutdown != (rcache_shutdown_t)&rcache_shutdown_fin);
    pub->shutdown = (rcache_shutdown_t)&rcache_shutdown_fin;
}
