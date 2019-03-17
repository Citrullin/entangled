/*
 * Copyright (c) 2019 IOTA Stiftung
 * https://github.com/iotaledger/entangled
 *
 * Refer to the LICENSE file for licensing information
 */

#ifndef CCLIENT_API_STORE_TRANSACTIONS_H
#define CCLIENT_API_STORE_TRANSACTIONS_H

#include "cclient/http/http.h"
#include "cclient/request/store_transactions.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Store transactions into the local storage. The trytes to be used for this
 * call are returned by iota_client_attach_to_tangle.
 *
 * https://iota.readme.io/reference#storetransactions
 *
 * @param service IRI node end point.
 * @param req - Request containing the transactions to store
 *
 * @return The error value.
 */
retcode_t iota_client_store_transactions(const iota_client_service_t* const service,
                                         store_transactions_req_t const* const req);

#ifdef __cplusplus
}
#endif

#endif  // CCLIENT_API_STORE_TRANSACTIONS_H
