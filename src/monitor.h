/* Watchdog monitors
 *
 * Copyright (C) 2015-2023  Joachim Wiberg <troglobit@gmail.com>
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef WDOG_MONITOR_H_
#define WDOG_MONITOR_H_

int filenr_init  (uev_ctx_t *ctx, const char *name, int T, int mark, float warn, float crit, char *script);
int fsmon_init   (uev_ctx_t *ctx, const char *name, int T, int mark, float warn, float crit, char *script);
int fsmon_init   (uev_ctx_t *ctx, const char *name, int T, int mark, float warn, float crit, char *script);
int loadavg_init (uev_ctx_t *ctx, const char *name, int T, int mark, float warn, float crit, char *script);
int meminfo_init (uev_ctx_t *ctx, const char *name, int T, int mark, float warn, float crit, char *script);

int generic_init (uev_ctx_t* ctx, int T, int timeout, char* monitor, int warn, int crit, char* script);

#endif /* WDOG_MONITOR_H_ */

/**
 * Local Variables:
 *  c-file-style: "linux"
 *  indent-tabs-mode: t
 * End:
 */
