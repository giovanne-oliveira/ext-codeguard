
extern zend_class_entry *codeguard_runner_ce;

ZEPHIR_INIT_CLASS(CodeGuard_Runner);

PHP_METHOD(CodeGuard_Runner, crf32_d);
PHP_METHOD(CodeGuard_Runner, activateEncoder);
PHP_METHOD(CodeGuard_Runner, urlSafeB64Encode);
PHP_METHOD(CodeGuard_Runner, urlSafeB64Decode);
PHP_METHOD(CodeGuard_Runner, _testRequirements);
PHP_METHOD(CodeGuard_Runner, getKey);
PHP_METHOD(CodeGuard_Runner, getNewKey);
PHP_METHOD(CodeGuard_Runner, getIv);
PHP_METHOD(CodeGuard_Runner, decrypt);
PHP_METHOD(CodeGuard_Runner, encryptCode);
PHP_METHOD(CodeGuard_Runner, run);
void zephir_init_static_properties_CodeGuard_Runner(TSRMLS_D);

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_crf32_d, 0, 0, 1)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_activateencoder, 0, 0, 1)
	ZEND_ARG_INFO(0, k)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_urlsafeb64encode, 0, 0, 1)
	ZEND_ARG_INFO(0, data)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_urlsafeb64decode, 0, 0, 1)
	ZEND_ARG_INFO(0, b64)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_getkey, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_getnewkey, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_getiv, 0, 0, 1)
#if PHP_VERSION_ID >= 70200
	ZEND_ARG_TYPE_INFO(0, cipher, IS_STRING, 0)
#else
	ZEND_ARG_INFO(0, cipher)
#endif
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_decrypt, 0, 0, 2)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_encryptcode, 0, 0, 2)
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

ZEND_BEGIN_ARG_INFO_EX(arginfo_codeguard_runner_run, 0, 0, 1)
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

ZEPHIR_INIT_FUNCS(codeguard_runner_method_entry) {
	PHP_ME(CodeGuard_Runner, crf32_d, arginfo_codeguard_runner_crf32_d, ZEND_ACC_PRIVATE)
	PHP_ME(CodeGuard_Runner, activateEncoder, arginfo_codeguard_runner_activateencoder, ZEND_ACC_PUBLIC)
	PHP_ME(CodeGuard_Runner, urlSafeB64Encode, arginfo_codeguard_runner_urlsafeb64encode, ZEND_ACC_PUBLIC)
	PHP_ME(CodeGuard_Runner, urlSafeB64Decode, arginfo_codeguard_runner_urlsafeb64decode, ZEND_ACC_PUBLIC)
	PHP_ME(CodeGuard_Runner, _testRequirements, NULL, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Runner, getKey, arginfo_codeguard_runner_getkey, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Runner, getNewKey, arginfo_codeguard_runner_getnewkey, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Runner, getIv, arginfo_codeguard_runner_getiv, ZEND_ACC_PRIVATE|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Runner, decrypt, arginfo_codeguard_runner_decrypt, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_ME(CodeGuard_Runner, encryptCode, arginfo_codeguard_runner_encryptcode, ZEND_ACC_PUBLIC)
	PHP_ME(CodeGuard_Runner, run, arginfo_codeguard_runner_run, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
	PHP_FE_END
};
