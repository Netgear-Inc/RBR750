/*
 ******************************************************************************
 * Copyright (c) 2016-2017, The Linux Foundation. All rights reserved.
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all copies.
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT
 * OF OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 * ****************************************************************************
 */

#ifndef __NSS_PPTP_STATS_H
#define __NSS_PPTP_STATS_H

/*
 * PPTP debug stats
 */
enum nss_pptp_stats_session {
	NSS_PPTP_STATS_ENCAP_RX_PACKETS,
	NSS_PPTP_STATS_ENCAP_RX_BYTES,
	NSS_PPTP_STATS_ENCAP_TX_PACKETS,
	NSS_PPTP_STATS_ENCAP_TX_BYTES,
	NSS_PPTP_STATS_ENCAP_RX_QUEUE_0_DROP,
	NSS_PPTP_STATS_ENCAP_RX_QUEUE_1_DROP,
	NSS_PPTP_STATS_ENCAP_RX_QUEUE_2_DROP,
	NSS_PPTP_STATS_ENCAP_RX_QUEUE_3_DROP,
	NSS_PPTP_STATS_DECAP_RX_PACKETS,
	NSS_PPTP_STATS_DECAP_RX_BYTES,
	NSS_PPTP_STATS_DECAP_TX_PACKETS,
	NSS_PPTP_STATS_DECAP_TX_BYTES,
	NSS_PPTP_STATS_DECAP_RX_QUEUE_0_DROP,
	NSS_PPTP_STATS_DECAP_RX_QUEUE_1_DROP,
	NSS_PPTP_STATS_DECAP_RX_QUEUE_2_DROP,
	NSS_PPTP_STATS_DECAP_RX_QUEUE_3_DROP,
	NSS_PPTP_STATS_SESSION_ENCAP_HEADROOM_ERR,
	NSS_PPTP_STATS_SESSION_ENCAP_SMALL_SIZE,
	NSS_PPTP_STATS_SESSION_ENCAP_PNODE_ENQUEUE_FAIL,
	NSS_PPTP_STATS_SESSION_DECAP_NO_SEQ_NOR_ACK,
	NSS_PPTP_STATS_SESSION_DECAP_INVAL_GRE_FLAGS,
	NSS_PPTP_STATS_SESSION_DECAP_INVAL_GRE_PROTO,
	NSS_PPTP_STATS_SESSION_DECAP_WRONG_SEQ,
	NSS_PPTP_STATS_SESSION_DECAP_INVAL_PPP_HDR,
	NSS_PPTP_STATS_SESSION_DECAP_PPP_LCP,
	NSS_PPTP_STATS_SESSION_DECAP_UNSUPPORTED_PPP_PROTO,
	NSS_PPTP_STATS_SESSION_DECAP_PNODE_ENQUEUE_FAIL,
	NSS_PPTP_STATS_SESSION_MAX
};

/*
 * NSS PPTP node statistics session
 */
struct nss_pptp_stats_session_debug {
	uint64_t stats[NSS_PPTP_STATS_SESSION_MAX];
	int32_t if_index;
	uint32_t if_num; /* nss interface number */
	bool valid;
};

/*
 * NSS PPTP statistics APIs
 */
extern void nss_pptp_stats_dentry_create(void);

#endif /* __NSS_PPTP_STATS_H */
