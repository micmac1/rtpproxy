/* Auto-generated by genfincode_stat.sh - DO NOT EDIT! */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "rtpp_types.h"
#include "rtpp_debug.h"
#include "rtpp_pearson_perfect.h"
static void rtpp_pearson_perfect_hash_fin(void *pub) {
    fprintf(stderr, "Method %p->hash (rtpp_pearson_perfect_hash) is invoked after destruction\x0a", pub);
    abort();
}
static const struct rtpp_pearson_perfect_smethods rtpp_pearson_perfect_smethods_fin = {
    .hash = (rtpp_pearson_perfect_hash_t)&rtpp_pearson_perfect_hash_fin,
};
void rtpp_pearson_perfect_fin(struct rtpp_pearson_perfect *pub) {
    RTPP_DBG_ASSERT(pub->smethods != &rtpp_pearson_perfect_smethods_fin &&
      pub->smethods != NULL);
    pub->smethods = &rtpp_pearson_perfect_smethods_fin;
}
