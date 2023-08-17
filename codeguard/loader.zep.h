
extern zend_class_entry *codeguard_loader_ce;

ZEPHIR_INIT_CLASS(CodeGuard_Loader);

PHP_METHOD(CodeGuard_Loader, crf32_d);
PHP_METHOD(CodeGuard_Loader, activateEncoder);
PHP_METHOD(CodeGuard_Loader, urlSafeB64Encode);
PHP_METHOD(CodeGuard_Loader, urlSafeB64Decode);
PHP_METHOD(CodeGuard_Loader, _testRequirements);
PHP_METHOD(CodeGuard_Loader, getKey);
PHP_METHOD(CodeGuard_Loader, getNewKey);
PHP_METHOD(CodeGuard_Loader, getIv);
PHP_METHOD(CodeGuard_Loader, decrypt);
PHP_METHOD(CodeGuard_Loader, encryptCode);
PHP_METHOD(CodeGuard_Loader, run);
PHP_METHOD(CodeGuard_Loader, getBinaryVersion);
PHP_METHOD(CodeGuard_Loader, canEncryptCode);
PHP_METHOD(CodeGuard_Loader, dispatch);
void zephir_init_static_properties_CodeGuard_Loader(TSRMLS_D);

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_crf32_d, 0, 0, 1)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_activateencoder, 0, 0, 1)
	ZEND_ARG_INFO(0, k)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_urlsafeb64encode, 0, 0, 1)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_urlsafeb64decode, 0, 0, 1)
	ZEND_ARG_INFO(0, b64)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_getkey, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_getnewkey, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_getiv, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_decrypt, 0, 0, 2)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_encryptcode, 0, 0, 1)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_run, 0, 0, 1)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_loader_dispatch, 0, 0, 1)
	ZEND_ARG_INFO(0, code)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(codeguard_loader_method_entry) {
	PHP_ME(CodeGuard_Loader, crf32_d, arginfo_codeguard_loader_crf32_d, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, activateEncoder, arginfo_codeguard_loader_activateencoder, ZEND_ACC_PUBLIC)
	PHP_ME(CodeGuard_Loader, urlSafeB64Encode, arginfo_codeguard_loader_urlsafeb64encode, ZEND_ACC_PRIVATE)
	PHP_ME(CodeGuard_Loader, urlSafeB64Decode, arginfo_codeguard_loader_urlsafeb64decode, ZEND_ACC_PRIVATE)
	PHP_ME(CodeGuard_Loader, _testRequirements, NULL, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, getKey, arginfo_codeguard_loader_getkey, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, getNewKey, arginfo_codeguard_loader_getnewkey, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, getIv, arginfo_codeguard_loader_getiv, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, decrypt, arginfo_codeguard_loader_decrypt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, encryptCode, arginfo_codeguard_loader_encryptcode, ZEND_ACC_PUBLIC)
	PHP_ME(CodeGuard_Loader, run, arginfo_codeguard_loader_run, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, getBinaryVersion, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, canEncryptCode, NULL, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Loader, dispatch, arginfo_codeguard_loader_dispatch, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_FE_END
};
