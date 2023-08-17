
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/file.h"
#include "kernel/concat.h"
#include "kernel/object.h"
#include "kernel/memory.h"
#include "kernel/operators.h"
#include "kernel/exception.h"
#include "kernel/string.h"
#include "kernel/array.h"
#include "kernel/fcall.h"
#include "kernel/time.h"


ZEPHIR_INIT_CLASS(PMLEncoder_Cryptography) {

	ZEPHIR_REGISTER_CLASS(PMLEncoder, Cryptography, pmlencoder, cryptography, pmlencoder_cryptography_method_entry, 0);

	zend_declare_property_null(pmlencoder_cryptography_ce, SL("_validCiphers"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC TSRMLS_CC);

	zend_declare_property_string(pmlencoder_cryptography_ce, SL("version"), "0.2.0a", ZEND_ACC_PRIVATE|ZEND_ACC_STATIC TSRMLS_CC);

	zend_declare_property_string(pmlencoder_cryptography_ce, SL("api_endpoint"), "https://api.phpmylicense.us/v2", ZEND_ACC_PRIVATE|ZEND_ACC_STATIC TSRMLS_CC);

	zend_declare_property_null(pmlencoder_cryptography_ce, SL("apikey"), ZEND_ACC_PRIVATE TSRMLS_CC);

	return SUCCESS;

}

PHP_METHOD(PMLEncoder_Cryptography, activateEncoder) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *key, key_sub, __$true, remote, _0, _1, json, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&key_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&remote);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&json);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &key);



	ZEPHIR_OBS_VAR(&_0);
	zephir_read_static_property_ce(&_0, pmlencoder_cryptography_ce, SL("api_endpoint"), PH_NOISY_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_VSV(&_1, &_0, "/license/validate?pid=1&licensekey=", key);
	ZEPHIR_INIT_VAR(&remote);
	zephir_file_get_contents(&remote, &_1 TSRMLS_CC);
	if (!zephir_is_true(&remote)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Can't comunicate with PHPMyLicense Cloud Servers to validate your license.", "pmlencoder/Cryptography.zep", 20);
		return;
	}
	ZEPHIR_INIT_VAR(&json);
	zephir_json_decode(&json, &remote, zephir_get_intval(&__$true) );
	zephir_array_fetch_string(&_2, &json, SL("status"), PH_NOISY | PH_READONLY, "pmlencoder/Cryptography.zep", 26 TSRMLS_CC);
	if (ZEPHIR_IS_LONG(&_2, 200)) {
		zephir_update_property_zval(this_ptr, SL("apikey"), key);
		RETURN_MM_BOOL(1);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(PMLEncoder_Cryptography, urlSafeB64Encode) {

	zval _1, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *data, data_sub, b64, _0, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&b64);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &data);



	ZEPHIR_CALL_FUNCTION(&b64, "base64_encode", NULL, 1, data);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_VAR(&_1);
	zephir_create_array(&_1, 5, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "+");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "/");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "\\r");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "\\n");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "=");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 2, 0 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "-");
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "_");
	zephir_array_fast_append(&_3, &_2);
	zephir_fast_str_replace(&_0, &_1, &_3, &b64 TSRMLS_CC);
	ZEPHIR_CPY_WRT(&b64, &_0);
	RETURN_CCTOR(&b64);

}

PHP_METHOD(PMLEncoder_Cryptography, urlSafeB64Decode) {

	zval _1, _3;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *b64 = NULL, b64_sub, _0, _2;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&b64_sub);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &b64);

	ZEPHIR_SEPARATE_PARAM(b64);


	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_VAR(&_1);
	zephir_create_array(&_1, 2, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "-");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "_");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 2, 0 TSRMLS_CC);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "+");
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "/");
	zephir_array_fast_append(&_3, &_2);
	zephir_fast_str_replace(&_0, &_1, &_3, b64 TSRMLS_CC);
	ZEPHIR_CPY_WRT(b64, &_0);
	ZEPHIR_RETURN_CALL_FUNCTION("base64_decode", NULL, 2, b64);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(PMLEncoder_Cryptography, _testRequirements) {

	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "openssl");
	ZEPHIR_CALL_FUNCTION(&_1, "extension_loaded", NULL, 3, &_0);
	zephir_check_call_status();
	if (!zephir_is_true(&_1)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "OpenSSL extension must be loaded!", "pmlencoder/Cryptography.zep", 49);
		return;
	}
	if (!((zephir_function_exists_ex(SL("openssl_encrypt") TSRMLS_CC) == SUCCESS))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Could not find function openssl_encrypt!", "pmlencoder/Cryptography.zep", 50);
		return;
	}
	if (!((zephir_function_exists_ex(SL("openssl_decrypt") TSRMLS_CC) == SUCCESS))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Could not find function openssl_decrypt!", "pmlencoder/Cryptography.zep", 51);
		return;
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(PMLEncoder_Cryptography, getKey) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *cipher_param = NULL, key, cipherLength, _0, _1, _2;
	zval cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&key);
	ZVAL_UNDEF(&cipherLength);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &cipher_param);

	zephir_get_strval(&cipher, cipher_param);


	ZEPHIR_INIT_VAR(&key);
	ZVAL_STRING(&key, "Secr3t123!");
	zephir_read_static_property_ce(&_0, pmlencoder_cryptography_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&cipherLength);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY, "pmlencoder/Cryptography.zep", 58 TSRMLS_CC);
	ZEPHIR_CALL_FUNCTION(&_1, "sha1", NULL, 4, &key);
	zephir_check_call_status();
	ZVAL_LONG(&_2, 0);
	zephir_substr(return_value, &_1, 0 , zephir_get_intval(&cipherLength), 0);
	RETURN_MM();

}

PHP_METHOD(PMLEncoder_Cryptography, getNewKey) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cipher_param = NULL, cipherLength, _0, k, _1, _2;
	zval cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&cipherLength);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &cipher_param);

	zephir_get_strval(&cipher, cipher_param);


	zephir_read_static_property_ce(&_0, pmlencoder_cryptography_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&cipherLength);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY, "pmlencoder/Cryptography.zep", 65 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&k);
	zephir_create_array(&k, 24, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, '07');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '0A');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'CB');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'B5');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'BB');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '98');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '3A');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '80');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '0D');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '1D');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '53');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'AE');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '33');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '16');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '69');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '07');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'B2');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'B7');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '5F');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '10');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'A5');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '89');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '54');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'FA');
	zephir_array_fast_append(&k, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_STRING(&_1, "070ACBB5BB983A800D1D53AE33166907B2B75F10A58954FA");
	ZVAL_LONG(&_2, 0);
	zephir_substr(return_value, &_1, 0 , zephir_get_intval(&cipherLength), 0);
	RETURN_MM();

}

PHP_METHOD(PMLEncoder_Cryptography, getIv) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zval *cipher_param = NULL, cipherLength, _0, iv, _1;
	zval cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&cipherLength);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&iv);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &cipher_param);

	zephir_get_strval(&cipher, cipher_param);


	zephir_read_static_property_ce(&_0, pmlencoder_cryptography_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY | PH_READONLY, "pmlencoder/Cryptography.zep", 98 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&iv);
	zephir_create_array(&iv, 8, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_1);
	ZVAL_LONG(&_1, '93');
	zephir_array_fast_append(&iv, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '04');
	zephir_array_fast_append(&iv, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, 'C2');
	zephir_array_fast_append(&iv, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '65');
	zephir_array_fast_append(&iv, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '84');
	zephir_array_fast_append(&iv, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '8B');
	zephir_array_fast_append(&iv, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '63');
	zephir_array_fast_append(&iv, &_1);
	ZEPHIR_INIT_NVAR(&_1);
	ZVAL_LONG(&_1, '4C');
	zephir_array_fast_append(&iv, &_1);
	RETURN_MM_STRING("9304C265848B634C");

}

PHP_METHOD(PMLEncoder_Cryptography, decrypt) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL, *_7 = NULL, *_9 = NULL;
	zval *cipher_param = NULL, *code_param = NULL, _1, _2, tmp, iv, _8, _10, _3$$3, _4$$3, _5$$3, _6$$3;
	zval cipher, code;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&code);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&tmp);
	ZVAL_UNDEF(&iv);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &cipher_param, &code_param);

	zephir_get_strval(&cipher, cipher_param);
	zephir_get_strval(&code, code_param);


	ZEPHIR_CALL_SELF(NULL, "_testrequirements", &_0, 5);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_1);
	zephir_fast_strtolower(&_1, &cipher);
	zephir_get_strval(&cipher, &_1);
	zephir_read_static_property_ce(&_2, pmlencoder_cryptography_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_key_exists(&_2, &cipher TSRMLS_CC))) {
		ZEPHIR_INIT_VAR(&_3$$3);
		object_init_ex(&_3$$3, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(&_4$$3);
		zephir_read_static_property_ce(&_5$$3, pmlencoder_cryptography_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
		zephir_fast_join_str(&_4$$3, SL(", "), &_5$$3 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_6$$3);
		ZEPHIR_CONCAT_VSV(&_6$$3, &cipher, " is not among the list of valid ciphers: ", &_4$$3);
		ZEPHIR_CALL_METHOD(NULL, &_3$$3, "__construct", NULL, 6, &_6$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_3$$3, "pmlencoder/Cryptography.zep", 122 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_CALL_FUNCTION(&tmp, "base64_decode", NULL, 2, &code);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&iv, "getiv", &_7, 7, &cipher);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&_8, "getnewkey", &_9, 8, &cipher);
	zephir_check_call_status();
	ZVAL_LONG(&_10, 1);
	ZEPHIR_RETURN_CALL_FUNCTION("openssl_decrypt", NULL, 9, &tmp, &cipher, &_8, &_10, &iv);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(PMLEncoder_Cryptography, encryptCode) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL, *_15 = NULL, *_17 = NULL;
	zval *cipher_param = NULL, *code_param = NULL, _1, _2, _3, search, _8, cleancode, _9, _10, _11, _12, _13, tmp, _14, _16, _18, datetime, _19, checksum, file, _20, _21, _4$$4, _5$$4, _6$$4, _7$$4;
	zval cipher, code;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&code);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&search);
	ZVAL_UNDEF(&_8);
	ZVAL_UNDEF(&cleancode);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_10);
	ZVAL_UNDEF(&_11);
	ZVAL_UNDEF(&_12);
	ZVAL_UNDEF(&_13);
	ZVAL_UNDEF(&tmp);
	ZVAL_UNDEF(&_14);
	ZVAL_UNDEF(&_16);
	ZVAL_UNDEF(&_18);
	ZVAL_UNDEF(&datetime);
	ZVAL_UNDEF(&_19);
	ZVAL_UNDEF(&checksum);
	ZVAL_UNDEF(&file);
	ZVAL_UNDEF(&_20);
	ZVAL_UNDEF(&_21);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &cipher_param, &code_param);

	zephir_get_strval(&cipher, cipher_param);
	zephir_get_strval(&code, code_param);


	ZEPHIR_CALL_SELF(NULL, "_testrequirements", &_0, 5);
	zephir_check_call_status();
	zephir_read_property(&_1, this_ptr, SL("apikey"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_strlen_ev(&_1) < 1) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Unauthorized! You need to call activateEncoder function to enable Code Obfuscation", "pmlencoder/Cryptography.zep", 138);
		return;
	}
	ZEPHIR_INIT_VAR(&_2);
	zephir_fast_strtolower(&_2, &cipher);
	zephir_get_strval(&cipher, &_2);
	zephir_read_static_property_ce(&_3, pmlencoder_cryptography_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_key_exists(&_3, &cipher TSRMLS_CC))) {
		ZEPHIR_INIT_VAR(&_4$$4);
		object_init_ex(&_4$$4, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(&_5$$4);
		zephir_read_static_property_ce(&_6$$4, pmlencoder_cryptography_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
		zephir_fast_join_str(&_5$$4, SL(", "), &_6$$4 TSRMLS_CC);
		ZEPHIR_INIT_VAR(&_7$$4);
		ZEPHIR_CONCAT_VSV(&_7$$4, &cipher, " is not among the list of valid ciphers: ", &_5$$4);
		ZEPHIR_CALL_METHOD(NULL, &_4$$4, "__construct", NULL, 6, &_7$$4);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_4$$4, "pmlencoder/Cryptography.zep", 144 TSRMLS_CC);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(&search);
	zephir_create_array(&search, 2, 0 TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_8);
	ZVAL_STRING(&_8, "<?php");
	zephir_array_fast_append(&search, &_8);
	ZEPHIR_INIT_NVAR(&_8);
	ZVAL_STRING(&_8, "?>");
	zephir_array_fast_append(&search, &_8);
	ZEPHIR_INIT_NVAR(&_8);
	ZVAL_STRING(&_8, "");
	ZEPHIR_INIT_VAR(&cleancode);
	zephir_fast_str_replace(&cleancode, &search, &_8, &code TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_9);
	ZEPHIR_INIT_VAR(&_10);
	ZVAL_STRING(&_10, "__DIR__");
	ZEPHIR_INIT_VAR(&_11);
	ZVAL_STRING(&_11, "$_DIR");
	zephir_fast_str_replace(&_9, &_10, &_11, &cleancode TSRMLS_CC);
	ZEPHIR_CPY_WRT(&cleancode, &_9);
	ZEPHIR_INIT_NVAR(&_9);
	ZEPHIR_INIT_VAR(&_12);
	ZVAL_STRING(&_12, "__FILE__");
	ZEPHIR_INIT_VAR(&_13);
	ZVAL_STRING(&_13, "$_FILE");
	zephir_fast_str_replace(&_9, &_12, &_13, &cleancode TSRMLS_CC);
	ZEPHIR_CPY_WRT(&cleancode, &_9);
	ZEPHIR_CALL_SELF(&_14, "getnewkey", &_15, 8, &cipher);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&_16, "getiv", &_17, 7, &cipher);
	zephir_check_call_status();
	ZVAL_LONG(&_18, 0);
	ZEPHIR_CALL_FUNCTION(&tmp, "openssl_encrypt", NULL, 10, &cleancode, &cipher, &_14, &_18, &_16);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_9);
	zephir_time(&_9);
	ZEPHIR_INIT_VAR(&_19);
	ZVAL_STRING(&_19, "D M j G:i:s T Y");
	ZEPHIR_CALL_FUNCTION(&datetime, "date", NULL, 11, &_19, &_9);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&checksum, "sha1", NULL, 4, &cleancode);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&file);
	ZVAL_STRING(&file, "");
	ZEPHIR_OBS_VAR(&_18);
	zephir_read_static_property_ce(&_18, pmlencoder_cryptography_ce, SL("version"), PH_NOISY_CC);
	ZEPHIR_INIT_NVAR(&file);
	ZEPHIR_CONCAT_SVS(&file, "<?php /* Protection provided by PHPMyLicense Encoder Library v", &_18, "\n");
	ZEPHIR_INIT_VAR(&_20);
	ZEPHIR_CONCAT_SVSVS(&_20, "Encoded in ", &datetime, ". Checksum: ", &checksum, " */ \n");
	zephir_concat_self(&file, &_20 TSRMLS_CC);
	zephir_concat_self_str(&file, SL("if(!extension_loaded(\"pmlencoder\")){die('Can not execute the code. PMLEncoder extension is not loaded');}\n") TSRMLS_CC);
	zephir_concat_self_str(&file, SL("eval(base64_decode('JF9ESVIgPSBwcmVnX3JlcGxhY2UoJ0BcKC4qXCguKiRAJywgJycsIF9fRElSX18pOwokX0ZJTEUgPSBwcmVnX3JlcGxhY2UoJ0BcKC4qXCguKiRAJywgJycsIF9fRklMRV9fKTs7'));\n") TSRMLS_CC);
	ZEPHIR_INIT_VAR(&_21);
	ZEPHIR_CONCAT_SVS(&_21, "PMLEncoder\\Cryptography::run('", &tmp, "');?>");
	zephir_concat_self(&file, &_21 TSRMLS_CC);
	RETURN_CCTOR(&file);

}

PHP_METHOD(PMLEncoder_Cryptography, run) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *code_param = NULL, *cipher_param = NULL, _0;
	zval code, cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&code);
	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &code_param, &cipher_param);

	zephir_get_strval(&code, code_param);
	if (!cipher_param) {
		ZEPHIR_INIT_VAR(&cipher);
		ZVAL_STRING(&cipher, "aes-256-cbc");
	} else {
		zephir_get_strval(&cipher, cipher_param);
	}


	ZEPHIR_CALL_SELF(&_0, "decrypt", NULL, 0, &cipher, &code);
	zephir_check_call_status();
	zephir_eval_php(&_0, return_value, "pmlencoder/Cryptography.zep:181" TSRMLS_CC);
	RETURN_MM();

}

void zephir_init_static_properties_PMLEncoder_Cryptography(TSRMLS_D) {

	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 3, 0 TSRMLS_CC);
	add_assoc_long_ex(&_0, SL("aes-128-cbc"), 16);
	add_assoc_long_ex(&_0, SL("aes-192-cbc"), 24);
	add_assoc_long_ex(&_0, SL("aes-256-cbc"), 32);
	zephir_update_static_property_ce(pmlencoder_cryptography_ce, ZEND_STRL("_validCiphers"), &_0);
	ZEPHIR_MM_RESTORE();

}

