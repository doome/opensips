/* 
 * File:   tls_helper.h
 * Author: cristi
 *
 * Created on September 3, 2015, 5:26 PM
 */

#ifndef TLS_HELPER_H
#define	TLS_HELPER_H

#include "tls_config_helper.h"

struct tls_domain {
	str             id;
	int             type;
	struct ip_addr  addr;
	unsigned short  port;
	SSL_CTX        *ctx;
	int             verify_cert;
	int             require_client_cert;
	int             crl_check_all;
	char           *cert_file;
	char           *pkey_file;
	char           *crl_directory;
	char           *ca_file;
	char           *tmp_dh_file;
	char           *tls_ec_curve;
	char	       *ca_directory;
	char           *ciphers_list;
	enum tls_method method;
	struct tls_domain *next;
	str name;
};

#endif	/* TLS_HELPER_H */

