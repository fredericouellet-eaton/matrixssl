static const char psConfigStrSsl[] =
"Version: SSL 4-2-2-comm\n"
"===== BEGIN CONFIG STRING =====\n"
# ifdef DISABLE_SSLV3
  "DISABLE_SSLV3\n"
# endif
# ifdef DISABLE_TLS_1_0
  "DISABLE_TLS_1_0\n"
# endif
# ifdef DISABLE_TLS_1_1
  "DISABLE_TLS_1_1\n"
# endif
# ifdef DISABLE_TLS_1_2
  "DISABLE_TLS_1_2\n"
# endif
# ifdef DISABLE_TLS_1_3
  "DISABLE_TLS_1_3\n"
# endif
# ifdef ENABLE_CA_CERT_HASH
  "ENABLE_CA_CERT_HASH\n"
# endif
# ifdef ENABLE_INSECURE_REHANDSHAKES
  "ENABLE_INSECURE_REHANDSHAKES\n"
# endif
# ifdef ENABLE_MASTER_SECRET_EXPORT
  "ENABLE_MASTER_SECRET_EXPORT\n"
# endif
# ifdef ENABLE_SECURE_REHANDSHAKES
  "ENABLE_SECURE_REHANDSHAKES\n"
# endif
  "MATRIX_OPENSOURCE\n"
# ifdef MATRIX_USE_FILE_SYSTEM
  "MATRIX_USE_FILE_SYSTEM\n"
# endif
# ifdef NO_ECC_EPHEMERAL_CACHE
  "NO_ECC_EPHEMERAL_CACHE\n"
# endif
# ifdef POSIX
  "POSIX\n"
# endif
# ifdef REQUIRE_DH_PARAMS
  "REQUIRE_DH_PARAMS\n"
# endif
# ifdef REQUIRE_SECURE_REHANDSHAKES
  "REQUIRE_SECURE_REHANDSHAKES\n"
# endif
# ifdef SEND_HELLO_RANDOM_TIME
  "SEND_HELLO_RANDOM_TIME\n"
# endif
# ifdef SERVER_WILL_ACCEPT_EMPTY_CLIENT_CERT_MSG
  "SERVER_WILL_ACCEPT_EMPTY_CLIENT_CERT_MSG\n"
# endif
# ifdef SSL_OPTION_FULL_HANDSHAKE
  "SSL_OPTION_FULL_HANDSHAKE\n"
# endif
# ifdef SSL_REHANDSHAKES_ENABLED
  "SSL_REHANDSHAKES_ENABLED\n"
# endif
# ifdef TLS_1_3_DEFAULT_DRAFT_MIN_VER
  "TLS_1_3_DEFAULT_DRAFT_MIN_VER\n"
# endif
# ifdef TLS_1_3_DRAFT_MIN_VER
  "TLS_1_3_DRAFT_MIN_VER\n"
# endif
# ifdef USE_3DES
  "USE_3DES\n"
# endif
# ifdef USE_3DES_CIPHER_SUITE
  "USE_3DES_CIPHER_SUITE\n"
# endif
# ifdef USE_AES
  "USE_AES\n"
# endif
# ifdef USE_AES_CCM
  "USE_AES_CCM\n"
# endif
# ifdef USE_AES_CIPHER_SUITE
  "USE_AES_CIPHER_SUITE\n"
# endif
# ifdef USE_AES_GCM
  "USE_AES_GCM\n"
# endif
# ifdef USE_ALPN
  "USE_ALPN\n"
# endif
# ifdef USE_ARC4
  "USE_ARC4\n"
# endif
# ifdef USE_ARC4_CIPHER_SUITE
  "USE_ARC4_CIPHER_SUITE\n"
# endif
# ifdef USE_BRAIN224R1
  "USE_BRAIN224R1\n"
# endif
# ifdef USE_BRAIN256R1
  "USE_BRAIN256R1\n"
# endif
# ifdef USE_BRAIN384R1
  "USE_BRAIN384R1\n"
# endif
# ifdef USE_BRAIN512R1
  "USE_BRAIN512R1\n"
# endif
# ifdef USE_BUFFERED_HS_HASH
  "USE_BUFFERED_HS_HASH\n"
# endif
# ifdef USE_CA_CERTIFICATES
  "USE_CA_CERTIFICATES\n"
# endif
# ifdef USE_CERT_CHAIN_PARSING
  "USE_CERT_CHAIN_PARSING\n"
# endif
# ifdef USE_CERT_PARSE
  "USE_CERT_PARSE\n"
# endif
# ifdef USE_CERT_VALIDATE
  "USE_CERT_VALIDATE\n"
# endif
# ifdef USE_CHACHA20_POLY1305_IETF
  "USE_CHACHA20_POLY1305_IETF\n"
# endif
# ifdef USE_CHACHA20_POLY1305_IETF_CIPHER_SUITE
  "USE_CHACHA20_POLY1305_IETF_CIPHER_SUITE\n"
# endif
# ifdef USE_SM2
  "USE_SM2\n"
# endif
# ifdef USE_SM3
  "USE_SM3\n"
# endif
# ifdef USE_SM4
  "USE_SM4\n"
# endif
# ifdef USE_CLIENT_AUTH
  "USE_CLIENT_AUTH\n"
# endif
# ifdef USE_CLIENT_SIDE_SSL
  "USE_CLIENT_SIDE_SSL\n"
# endif
# ifdef USE_DH
  "USE_DH\n"
# endif
# ifdef USE_DH_CIPHER_SUITE
  "USE_DH_CIPHER_SUITE\n"
# endif
# ifdef USE_DHE_PSK_CIPHER_SUITE
  "USE_DHE_PSK_CIPHER_SUITE\n"
# endif
# ifdef USE_DTLS
  "USE_DTLS\n"
# endif
# ifdef USE_DTLS_DEBUG_TRACE
  "USE_DTLS_DEBUG_TRACE\n"
# endif
# ifdef USE_EAP_FAST
  "USE_EAP_FAST\n"
# endif
# ifdef USE_ECC
  "USE_ECC\n"
# endif
# ifdef USE_ECC_CIPHER_SUITE
  "USE_ECC_CIPHER_SUITE\n"
# endif
# ifdef USE_ECDSA_CIPHER_SUITE
  "USE_ECDSA_CIPHER_SUITE\n"
# endif
# ifdef USE_ED25519
  "USE_ED25519\n"
# endif
# ifdef USE_EXT_CERTIFICATE_VERIFY_SIGNING
  "USE_EXT_CERTIFICATE_VERIFY_SIGNING\n"
# endif
# ifdef USE_EXT_CLIENT_CERT_KEY_LOADING
  "USE_EXT_CLIENT_CERT_KEY_LOADING\n"
# endif
# ifdef USE_HKDF
  "USE_HKDF\n"
# endif
# ifdef USE_HMAC_SHA256
  "USE_HMAC_SHA256\n"
# endif
# ifdef USE_IDEA
  "USE_IDEA\n"
# endif
# ifdef USE_IDEA_CIPHER_SUITE
  "USE_IDEA_CIPHER_SUITE\n"
# endif
# ifdef USE_IDENTITY_CERTIFICATES
  "USE_IDENTITY_CERTIFICATES\n"
# endif
# ifdef USE_MATRIX_OPENSSL_LAYER
  "USE_MATRIX_OPENSSL_LAYER\n"
# endif
# ifdef USE_MATRIXSSL_STATS
  "USE_MATRIXSSL_STATS\n"
# endif
# ifdef USE_MD5_MAC
  "USE_MD5_MAC\n"
# endif
# ifdef USE_MD5SHA1
  "USE_MD5SHA1\n"
# endif
# ifdef USE_MULTITHREADING
  "USE_MULTITHREADING\n"
# endif
# ifdef USE_NATIVE_SYMMETRIC
  "USE_NATIVE_SYMMETRIC\n"
# endif
# ifdef USE_NATIVE_TLS_ALGS
  "USE_NATIVE_TLS_ALGS\n"
# endif
# ifdef USE_NATIVE_TLS_HS_HASH
  "USE_NATIVE_TLS_HS_HASH\n"
# endif
# ifdef USE_OCSP_RESPONSE
  "USE_OCSP_RESPONSE\n"
# endif
# ifdef USE_ONLY_PSK_CIPHER_SUITE
  "USE_ONLY_PSK_CIPHER_SUITE\n"
# endif
# ifdef USE_ONLY_TLS_1_2
  "USE_ONLY_TLS_1_2\n"
# endif
# ifdef USE_PKCS12
  "USE_PKCS12\n"
# endif
# ifdef USE_PKCS1_PSS
  "USE_PKCS1_PSS\n"
# endif
# ifdef USE_PSK_CIPHER_SUITE
  "USE_PSK_CIPHER_SUITE\n"
# endif
# ifdef USE_REHANDSHAKING
  "USE_REHANDSHAKING\n"
# endif
# ifdef USE_RSA
  "USE_RSA\n"
# endif
# ifdef USE_RSA_CIPHER_SUITE
  "USE_RSA_CIPHER_SUITE\n"
# endif
# ifdef USE_SEC_CONFIG
  "USE_SEC_CONFIG\n"
# endif
# ifdef USE_SEED
  "USE_SEED\n"
# endif
# ifdef USE_SEED_CIPHER_SUITE
  "USE_SEED_CIPHER_SUITE\n"
# endif
# ifdef USE_SERVER_SIDE_FALSE_START_SUPPORT
  "USE_SERVER_SIDE_FALSE_START_SUPPORT\n"
# endif
# ifdef USE_SERVER_SIDE_SSL
  "USE_SERVER_SIDE_SSL\n"
# endif
# ifdef USE_SHA1
  "USE_SHA1\n"
# endif
# ifdef USE_SHA256
  "USE_SHA256\n"
# endif
# ifdef USE_SHA384
  "USE_SHA384\n"
# endif
# ifdef USE_SHA512
  "USE_SHA512\n"
# endif
# ifdef USE_SHA_MAC
  "USE_SHA_MAC\n"
# endif
# ifdef USE_SHARED_SESSION_CACHE
  "USE_SHARED_SESSION_CACHE\n"
# endif
# ifdef USE_SSL_DH_anon_WITH_3DES_EDE_CBC_SHA
  "USE_SSL_DH_anon_WITH_3DES_EDE_CBC_SHA\n"
# endif
# ifdef USE_SSL_DH_anon_WITH_RC4_128_MD5
  "USE_SSL_DH_anon_WITH_RC4_128_MD5\n"
# endif
# ifdef USE_SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA
  "USE_SSL_DHE_RSA_WITH_3DES_EDE_CBC_SHA\n"
# endif
# ifdef USE_SSL_HANDSHAKE_MSG_TRACE
  "USE_SSL_HANDSHAKE_MSG_TRACE\n"
# endif
# ifdef USE_SSL_INFORMATIONAL_TRACE
  "USE_SSL_INFORMATIONAL_TRACE\n"
# endif
# ifdef USE_SSL_RSA_WITH_3DES_EDE_CBC_SHA
  "USE_SSL_RSA_WITH_3DES_EDE_CBC_SHA\n"
# endif
# ifdef USE_SSL_RSA_WITH_NULL_MD5
  "USE_SSL_RSA_WITH_NULL_MD5\n"
# endif
# ifdef USE_SSL_RSA_WITH_NULL_SHA
  "USE_SSL_RSA_WITH_NULL_SHA\n"
# endif
# ifdef USE_SSL_RSA_WITH_RC4_128_MD5
  "USE_SSL_RSA_WITH_RC4_128_MD5\n"
# endif
# ifdef USE_SSL_RSA_WITH_RC4_128_SHA
  "USE_SSL_RSA_WITH_RC4_128_SHA\n"
# endif
# ifdef USE_STATELESS_SESSION_TICKETS
  "USE_STATELESS_SESSION_TICKETS\n"
# endif
# ifdef USE_TLS
  "USE_TLS\n"
# endif
# ifdef USE_TLS_1_1
  "USE_TLS_1_1\n"
# endif
# ifdef USE_TLS_1_2
  "USE_TLS_1_2\n"
# endif
# ifdef USE_TLS_1_3
  "USE_TLS_1_3\n"
# endif
# ifdef USE_TLS_1_3_CIPHER_SUITE
  "USE_TLS_1_3_CIPHER_SUITE\n"
# endif
# ifdef USE_TLS_1_3_ONLY
  "USE_TLS_1_3_ONLY\n"
# endif
# ifdef USE_TLS_1_3_RESUMPTION
  "USE_TLS_1_3_RESUMPTION\n"
# endif
# ifdef USE_TLS_AES_128_GCM_SHA256
  "USE_TLS_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_AES_256_GCM_SHA384
  "USE_TLS_AES_256_GCM_SHA384\n"
# endif
# ifdef USE_TLS_CHACHA20_POLY1305_SHA256
  "USE_TLS_CHACHA20_POLY1305_SHA256\n"
# endif
# ifdef USE_TLS_SM4_GCM_SM3
  "USE_TLS_SM4_GCM_SM3\n"
# endif
# ifdef USE_TLS_SM4_CCM_SM3
  "USE_TLS_SM4_CCM_SM3\n"
# endif
# ifdef USE_TLS_DH_anon_WITH_AES_128_CBC_SHA
  "USE_TLS_DH_anon_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_DH_anon_WITH_AES_256_CBC_SHA
  "USE_TLS_DH_anon_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_DHE_PSK_WITH_AES_128_CBC_SHA
  "USE_TLS_DHE_PSK_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_DHE_PSK_WITH_AES_256_CBC_SHA
  "USE_TLS_DHE_PSK_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_128_CBC_SHA
  "USE_TLS_DHE_RSA_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_128_CBC_SHA256
  "USE_TLS_DHE_RSA_WITH_AES_128_CBC_SHA256\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_128_GCM_SHA
  "USE_TLS_DHE_RSA_WITH_AES_128_GCM_SHA\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_128_GCM_SHA256
  "USE_TLS_DHE_RSA_WITH_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_256_CBC_SHA
  "USE_TLS_DHE_RSA_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_256_CBC_SHA256
  "USE_TLS_DHE_RSA_WITH_AES_256_CBC_SHA256\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_256_GCM_SHA
  "USE_TLS_DHE_RSA_WITH_AES_256_GCM_SHA\n"
# endif
# ifdef USE_TLS_DHE_RSA_WITH_AES_256_GCM_SHA256
  "USE_TLS_DHE_RSA_WITH_AES_256_GCM_SHA256\n"
# endif
# ifdef USE_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA
  "USE_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256
  "USE_TLS_ECDH_ECDSA_WITH_AES_128_CBC_SHA256\n"
# endif
# ifdef USE_TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256
  "USE_TLS_ECDH_ECDSA_WITH_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA
  "USE_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384
  "USE_TLS_ECDH_ECDSA_WITH_AES_256_CBC_SHA384\n"
# endif
# ifdef USE_TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384
  "USE_TLS_ECDH_ECDSA_WITH_AES_256_GCM_SHA384\n"
# endif
# ifdef USE_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA
  "USE_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256
  "USE_TLS_ECDHE_ECDSA_WITH_AES_128_CBC_SHA256\n"
# endif
# ifdef USE_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256
  "USE_TLS_ECDHE_ECDSA_WITH_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA
  "USE_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384
  "USE_TLS_ECDHE_ECDSA_WITH_AES_256_CBC_SHA384\n"
# endif
# ifdef USE_TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384
  "USE_TLS_ECDHE_ECDSA_WITH_AES_256_GCM_SHA384\n"
# endif
# ifdef USE_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256
  "USE_TLS_ECDHE_ECDSA_WITH_CHACHA20_POLY1305_SHA256\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA
  "USE_TLS_ECDHE_RSA_WITH_3DES_EDE_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA
  "USE_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256
  "USE_TLS_ECDHE_RSA_WITH_AES_128_CBC_SHA256\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256
  "USE_TLS_ECDHE_RSA_WITH_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA
  "USE_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384
  "USE_TLS_ECDHE_RSA_WITH_AES_256_CBC_SHA384\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384
  "USE_TLS_ECDHE_RSA_WITH_AES_256_GCM_SHA384\n"
# endif
# ifdef USE_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256
  "USE_TLS_ECDHE_RSA_WITH_CHACHA20_POLY1305_SHA256\n"
# endif
# ifdef USE_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA
  "USE_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256
  "USE_TLS_ECDH_RSA_WITH_AES_128_CBC_SHA256\n"
# endif
# ifdef USE_TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256
  "USE_TLS_ECDH_RSA_WITH_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA
  "USE_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384
  "USE_TLS_ECDH_RSA_WITH_AES_256_CBC_SHA384\n"
# endif
# ifdef USE_TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384
  "USE_TLS_ECDH_RSA_WITH_AES_256_GCM_SHA384\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_128_CBC_SHA
  "USE_TLS_PSK_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_128_CBC_SHA256
  "USE_TLS_PSK_WITH_AES_128_CBC_SHA256\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_128_GCM_SHA
  "USE_TLS_PSK_WITH_AES_128_GCM_SHA\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_128_GCM_SHA256
  "USE_TLS_PSK_WITH_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_256_CBC_SHA
  "USE_TLS_PSK_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_256_CBC_SHA384
  "USE_TLS_PSK_WITH_AES_256_CBC_SHA384\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_256_GCM_SHA
  "USE_TLS_PSK_WITH_AES_256_GCM_SHA\n"
# endif
# ifdef USE_TLS_PSK_WITH_AES_256_GCM_SHA384
  "USE_TLS_PSK_WITH_AES_256_GCM_SHA384\n"
# endif
# ifdef USE_TLS_RSA_WITH_NULL_SHA256
  "USE_TLS_RSA_WITH_NULL_SHA256\n"
# endif
# ifdef USE_TLS_RSA_WITH_AES_128_CBC_SHA
  "USE_TLS_RSA_WITH_AES_128_CBC_SHA\n"
# endif
# ifdef USE_TLS_RSA_WITH_AES_128_CBC_SHA256
  "USE_TLS_RSA_WITH_AES_128_CBC_SHA256\n"
# endif
# ifdef USE_TLS_RSA_WITH_AES_128_GCM_SHA256
  "USE_TLS_RSA_WITH_AES_128_GCM_SHA256\n"
# endif
# ifdef USE_TLS_RSA_WITH_AES_256_CBC_SHA
  "USE_TLS_RSA_WITH_AES_256_CBC_SHA\n"
# endif
# ifdef USE_TLS_RSA_WITH_AES_256_CBC_SHA256
  "USE_TLS_RSA_WITH_AES_256_CBC_SHA256\n"
# endif
# ifdef USE_TLS_RSA_WITH_AES_256_GCM_SHA384
  "USE_TLS_RSA_WITH_AES_256_GCM_SHA384\n"
# endif
# ifdef USE_TLS_RSA_WITH_IDEA_CBC_SHA
  "USE_TLS_RSA_WITH_IDEA_CBC_SHA\n"
# endif
# ifdef USE_TLS_RSA_WITH_RC4_128_SHA
  "USE_TLS_RSA_WITH_RC4_128_SHA\n"
# endif
# ifdef USE_TLS_RSA_WITH_SEED_CBC_SHA
  "USE_TLS_RSA_WITH_SEED_CBC_SHA\n"
# endif
# ifdef USE_TLS_ECDHE_SM2_WITH_SMS4_SM3
  "USE_TLS_ECDHE_SM2_WITH_SMS4_SM3\n"
# endif
# ifdef USE_TLS_ECDHE_SM2_WITH_SMS4_SHA256
  "USE_TLS_ECDHE_SM2_WITH_SMS4_SHA256\n"
# endif
# ifdef USE_TLS_ECDHE_SM2_WITH_SMS4_GCM_SM3
  "USE_TLS_ECDHE_SM2_WITH_SMS4_GCM_SM3\n"
# endif
# ifdef USE_TRUSTED_CA_INDICATION
  "USE_TRUSTED_CA_INDICATION\n"
# endif
# ifdef USE_X25519
  "USE_X25519\n"
# endif
# ifdef USE_X509
  "USE_X509\n"
# endif
"===== END CONFIG STRING =====";