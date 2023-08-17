
extern zend_class_entry *pmlencoder_cryptography_ce;

ZEPHIR_INIT_CLASS(PMLEncoder_Cryptography);

PHP_METHOD(PMLEncoder_Cryptography, activateEncoder);
PHP_METHOD(PMLEncoder_Cryptography, urlSafeB64Encode);
PHP_METHOD(PMLEncoder_Cryptography, urlSafeB64Decode);
PHP_METHOD(PMLEncoder_Cryptography, _testRequirements);
PHP_METHOD(PMLEncoder_Cryptography, getKey);
PHP_METHOD(PMLEncoder_Cryptography, getNewKey);
PHP_METHOD(PMLEncoder_Cryptography, getIv);
PHP_METHOD(PMLEncoder_Cryptography, decrypt);
PHP_METHOD(PMLEncoder_Cryptography, encryptCode);
PHP_METHOD(PMLEncoder_Cryptography, run);
void zephir_init_static_properties_PMLEncoder_Cryptography(TSRMLS_D);

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_activateencoder, 0, 0, 1)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_urlsafeb64encode, 0, 0, 1)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_urlsafeb64decode, 0, 0, 1)
	ZEND_ARG_INFO(0, b64)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_getkey, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_getnewkey, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_getiv, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_decrypt, 0, 0, 2)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, code)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_encryptcode, 0, 0, 2)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, code)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_pmlencoder_cryptography_run, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, code)
#endif
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(pmlencoder_cryptography_method_entry) {
	PHP_ME(PMLEncoder_Cryptography, activateEncoder, arginfo_pmlencoder_cryptography_activateencoder, ZEND_ACC_PUBLIC)
	PHP_ME(PMLEncoder_Cryptography, urlSafeB64Encode, arginfo_pmlencoder_cryptography_urlsafeb64encode, ZEND_ACC_PUBLIC)
	PHP_ME(PMLEncoder_Cryptography, urlSafeB64Decode, arginfo_pmlencoder_cryptography_urlsafeb64decode, ZEND_ACC_PUBLIC)
	PHP_ME(PMLEncoder_Cryptography, _testRequirements, NULL, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(PMLEncoder_Cryptography, getKey, arginfo_pmlencoder_cryptography_getkey, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(PMLEncoder_Cryptography, getNewKey, arginfo_pmlencoder_cryptography_getnewkey, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(PMLEncoder_Cryptography, getIv, arginfo_pmlencoder_cryptography_getiv, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(PMLEncoder_Cryptography, decrypt, arginfo_pmlencoder_cryptography_decrypt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(PMLEncoder_Cryptography, encryptCode, arginfo_pmlencoder_cryptography_encryptcode, ZEND_ACC_PUBLIC)
	PHP_ME(PMLEncoder_Cryptography, run, arginfo_pmlencoder_cryptography_run, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
