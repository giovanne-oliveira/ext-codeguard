
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
#include "kernel/memory.h"
#include "kernel/array.h"
#include "kernel/string.h"
#include "kernel/operators.h"
#include "kernel/fcall.h"
#include "kernel/object.h"
#include "kernel/file.h"
#include "kernel/concat.h"
#include "kernel/exception.h"
#include "kernel/time.h"


ZEPHIR_INIT_CLASS(CodeGuard_Runner) {

	ZEPHIR_REGISTER_CLASS(CodeGuard, Runner, codeguard, runner, codeguard_runner_method_entry, 0);

	zend_declare_property_null(codeguard_runner_ce, SL("_validCiphers"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);

	zend_declare_property_string(codeguard_runner_ce, SL("version"), "0.3.0a", ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);

	zend_declare_property_string(codeguard_runner_ce, SL("api_endpoint"), "d1t78w3k78qjyrbgd4q70t3gdnwprtb3cnq76s9eensjyxhj", ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);

	zend_declare_property_null(codeguard_runner_ce, SL("apikey"), ZEND_ACC_PRIVATE);

	return SUCCESS;

}

PHP_METHOD(CodeGuard_Runner, crf32_d) {

	zend_bool _2;
	zval map;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, buf = 0, bufSize = 0, tmp = 0, _3;
	zephir_fcall_cache_entry *_6 = NULL;
	zval *data = NULL, data_sub, dataSize, res, i, c, b, _0, _1, _4, _5$$4;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&dataSize);
	ZVAL_UNDEF(&res);
	ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&b);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&map);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &data);

	ZEPHIR_SEPARATE_PARAM(data);


	ZEPHIR_INIT_VAR(&map);
	array_init(&map);
	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 61, 0);
	add_assoc_long_ex(&_0, SL("0"), 0);
	add_assoc_long_ex(&_0, SL("O"), 0);
	add_assoc_long_ex(&_0, SL("o"), 0);
	add_assoc_long_ex(&_0, SL("1"), 1);
	add_assoc_long_ex(&_0, SL("I"), 1);
	add_assoc_long_ex(&_0, SL("i"), 1);
	add_assoc_long_ex(&_0, SL("L"), 1);
	add_assoc_long_ex(&_0, SL("l"), 1);
	add_assoc_long_ex(&_0, SL("2"), 2);
	add_assoc_long_ex(&_0, SL("3"), 3);
	add_assoc_long_ex(&_0, SL("4"), 4);
	add_assoc_long_ex(&_0, SL("5"), 5);
	add_assoc_long_ex(&_0, SL("6"), 6);
	add_assoc_long_ex(&_0, SL("7"), 7);
	add_assoc_long_ex(&_0, SL("8"), 8);
	add_assoc_long_ex(&_0, SL("9"), 9);
	add_assoc_long_ex(&_0, SL("A"), 10);
	add_assoc_long_ex(&_0, SL("a"), 10);
	add_assoc_long_ex(&_0, SL("B"), 11);
	add_assoc_long_ex(&_0, SL("b"), 11);
	add_assoc_long_ex(&_0, SL("C"), 12);
	add_assoc_long_ex(&_0, SL("c"), 12);
	add_assoc_long_ex(&_0, SL("D"), 13);
	add_assoc_long_ex(&_0, SL("d"), 13);
	add_assoc_long_ex(&_0, SL("E"), 14);
	add_assoc_long_ex(&_0, SL("e"), 14);
	add_assoc_long_ex(&_0, SL("F"), 15);
	add_assoc_long_ex(&_0, SL("f"), 15);
	add_assoc_long_ex(&_0, SL("G"), 16);
	add_assoc_long_ex(&_0, SL("g"), 16);
	add_assoc_long_ex(&_0, SL("H"), 17);
	add_assoc_long_ex(&_0, SL("h"), 17);
	add_assoc_long_ex(&_0, SL("J"), 18);
	add_assoc_long_ex(&_0, SL("j"), 18);
	add_assoc_long_ex(&_0, SL("K"), 19);
	add_assoc_long_ex(&_0, SL("k"), 19);
	add_assoc_long_ex(&_0, SL("M"), 20);
	add_assoc_long_ex(&_0, SL("m"), 20);
	add_assoc_long_ex(&_0, SL("N"), 21);
	add_assoc_long_ex(&_0, SL("n"), 21);
	add_assoc_long_ex(&_0, SL("P"), 22);
	add_assoc_long_ex(&_0, SL("p"), 22);
	add_assoc_long_ex(&_0, SL("Q"), 23);
	add_assoc_long_ex(&_0, SL("q"), 23);
	add_assoc_long_ex(&_0, SL("R"), 24);
	add_assoc_long_ex(&_0, SL("r"), 24);
	add_assoc_long_ex(&_0, SL("S"), 25);
	add_assoc_long_ex(&_0, SL("s"), 25);
	add_assoc_long_ex(&_0, SL("T"), 26);
	add_assoc_long_ex(&_0, SL("t"), 26);
	add_assoc_long_ex(&_0, SL("V"), 27);
	add_assoc_long_ex(&_0, SL("v"), 27);
	add_assoc_long_ex(&_0, SL("W"), 28);
	add_assoc_long_ex(&_0, SL("w"), 28);
	add_assoc_long_ex(&_0, SL("X"), 29);
	add_assoc_long_ex(&_0, SL("x"), 29);
	add_assoc_long_ex(&_0, SL("Y"), 30);
	add_assoc_long_ex(&_0, SL("y"), 30);
	add_assoc_long_ex(&_0, SL("Z"), 31);
	add_assoc_long_ex(&_0, SL("z"), 31);
	ZEPHIR_CPY_WRT(&map, &_0);
	ZEPHIR_INIT_VAR(&_1);
	zephir_fast_strtolower(&_1, data);
	ZEPHIR_CPY_WRT(data, &_1);
	ZEPHIR_INIT_VAR(&dataSize);
	ZVAL_LONG(&dataSize, zephir_fast_strlen_ev(data));
	buf = 0;
	bufSize = 0;
	ZEPHIR_INIT_VAR(&res);
	ZVAL_STRING(&res, "");
	ZEPHIR_INIT_VAR(&i);
	ZVAL_LONG(&i, 0);
	ZEPHIR_CPY_WRT(&_4, &dataSize);
	_3 = 0;
	_2 = 0;
	if (ZEPHIR_GE_LONG(&_4, _3)) {
		while (1) {
			if (_2) {
				_3++;
				if (!(ZEPHIR_GE_LONG(&_4, _3))) {
					break;
				}
			} else {
				_2 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _3);
			ZEPHIR_OBS_NVAR(&c);
			zephir_array_fetch(&c, data, &i, PH_NOISY, "codeguard/Runner.zep", 30);
			if (!(zephir_array_isset(&map, &c))) {
			}
			ZEPHIR_OBS_NVAR(&b);
			zephir_array_fetch(&b, &map, &c, PH_NOISY, "codeguard/Runner.zep", 34);
			tmp = (buf << 5);
			buf = (tmp | (int) (zephir_get_numberval(&b)));
			bufSize += 5;
			if (bufSize > 7) {
				bufSize -= 8;
				ZEPHIR_INIT_NVAR(&b);
				ZVAL_LONG(&b, (((buf & (255 << bufSize))) >> bufSize));
				ZEPHIR_CALL_FUNCTION(&_5$$4, "chr", &_6, 1, &b);
				zephir_check_call_status();
				zephir_concat_self(&res, &_5$$4);
			}
		}
	}
	RETURN_CCTOR(&res);

}

PHP_METHOD(CodeGuard_Runner, activateEncoder) {

	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *k, k_sub, __$true, remote, _0, _2, _3, _4, _5, json, _9, _6$$3, _7$$3, _8$$3;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&k_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&remote);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&json);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_6$$3);
	ZVAL_UNDEF(&_7$$3);
	ZVAL_UNDEF(&_8$$3);

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &k);



	zephir_read_static_property_ce(&_2, codeguard_runner_ce, SL("api_endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_SELF(&_0, "crf32_d", &_1, 2, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_4);
	ZVAL_STRING(&_4, "5xp6jrv5dsspabvpc5p6js31ehjkyw39cgyk29kcd5hpavkkcnnpay9x");
	ZEPHIR_CALL_SELF(&_3, "crf32_d", &_1, 2, &_4);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_5);
	ZEPHIR_CONCAT_VV(&_5, &_0, &_3);
	ZEPHIR_INIT_VAR(&remote);
	zephir_file_get_contents(&remote, &_5);
	if (!zephir_is_true(&remote)) {
		ZEPHIR_INIT_VAR(&_6$$3);
		object_init_ex(&_6$$3, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(&_8$$3);
		ZVAL_STRING(&_8$$3, "8dgpw9vm41hpyvbndsmp6rbmcmg7etbmd0g50j2g9nwmrtb3cnq76s908dp6yxb4419pawkpcns7683mdwg7crbcd5j62x3541wpyxbj41p6jrv5dsspabg");
		ZEPHIR_CALL_SELF(&_7$$3, "crf32_d", &_1, 2, &_8$$3);
		zephir_check_call_status();
		ZEPHIR_CALL_METHOD(NULL, &_6$$3, "__construct", NULL, 3, &_7$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_6$$3, "codeguard/Runner.zep", 55);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(&json);
	zephir_json_decode(&json, &remote, zephir_get_intval(&__$true) );
	zephir_array_fetch_string(&_9, &json, SL("status"), PH_NOISY | PH_READONLY, "codeguard/Runner.zep", 61);
	if (ZEPHIR_IS_LONG(&_9, 200)) {
		zephir_update_property_zval(this_ptr, ZEND_STRL("apikey"), k);
		RETURN_MM_BOOL(1);
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(CodeGuard_Runner, urlSafeB64Encode) {

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



	ZEPHIR_CALL_FUNCTION(&b64, "base64_encode", NULL, 4, data);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_0);
	ZEPHIR_INIT_VAR(&_1);
	zephir_create_array(&_1, 5, 0);
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
	zephir_create_array(&_3, 2, 0);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "-");
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "_");
	zephir_array_fast_append(&_3, &_2);
	zephir_fast_str_replace(&_0, &_1, &_3, &b64);
	ZEPHIR_CPY_WRT(&b64, &_0);
	RETURN_CCTOR(&b64);

}

PHP_METHOD(CodeGuard_Runner, urlSafeB64Decode) {

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
	zephir_create_array(&_1, 2, 0);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "-");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "_");
	zephir_array_fast_append(&_1, &_2);
	ZEPHIR_INIT_VAR(&_3);
	zephir_create_array(&_3, 2, 0);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "+");
	zephir_array_fast_append(&_3, &_2);
	ZEPHIR_INIT_NVAR(&_2);
	ZVAL_STRING(&_2, "/");
	zephir_array_fast_append(&_3, &_2);
	zephir_fast_str_replace(&_0, &_1, &_3, b64);
	ZEPHIR_CPY_WRT(b64, &_0);
	ZEPHIR_RETURN_CALL_FUNCTION("base64_decode", NULL, 5, b64);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(CodeGuard_Runner, _testRequirements) {

	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "openssl");
	ZEPHIR_CALL_FUNCTION(&_1, "extension_loaded", NULL, 6, &_0);
	zephir_check_call_status();
	if (!zephir_is_true(&_1)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "OpenSSL extension must be loaded!", "codeguard/Runner.zep", 84);
		return;
	}
	if (!((zephir_function_exists_ex(ZEND_STRL("openssl_encrypt")) == SUCCESS))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Could not find function openssl_encrypt!", "codeguard/Runner.zep", 85);
		return;
	}
	if (!((zephir_function_exists_ex(ZEND_STRL("openssl_decrypt")) == SUCCESS))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Could not find function openssl_decrypt!", "codeguard/Runner.zep", 86);
		return;
	}
	ZEPHIR_MM_RESTORE();

}

PHP_METHOD(CodeGuard_Runner, getKey) {

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
	ZVAL_STRING(&key, "8dgpw9vm41hpyrv5dsspabg");
	zephir_read_static_property_ce(&_0, codeguard_runner_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&cipherLength);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY, "codeguard/Runner.zep", 93);
	ZEPHIR_CALL_FUNCTION(&_1, "sha1", NULL, 7, &key);
	zephir_check_call_status();
	ZVAL_LONG(&_2, 0);
	zephir_substr(return_value, &_1, 0 , zephir_get_intval(&cipherLength), 0);
	RETURN_MM();

}

PHP_METHOD(CodeGuard_Runner, getNewKey) {

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


	zephir_read_static_property_ce(&_0, codeguard_runner_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&cipherLength);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY, "codeguard/Runner.zep", 100);
	ZEPHIR_INIT_VAR(&k);
	zephir_create_array(&k, 24, 0);
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

PHP_METHOD(CodeGuard_Runner, getIv) {

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


	zephir_read_static_property_ce(&_0, codeguard_runner_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY | PH_READONLY, "codeguard/Runner.zep", 133);
	ZEPHIR_INIT_VAR(&iv);
	zephir_create_array(&iv, 8, 0);
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

PHP_METHOD(CodeGuard_Runner, decrypt) {

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


	ZEPHIR_CALL_SELF(NULL, "_testrequirements", &_0, 8);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_1);
	zephir_fast_strtolower(&_1, &cipher);
	zephir_get_strval(&cipher, &_1);
	zephir_read_static_property_ce(&_2, codeguard_runner_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_key_exists(&_2, &cipher))) {
		ZEPHIR_INIT_VAR(&_3$$3);
		object_init_ex(&_3$$3, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(&_4$$3);
		zephir_read_static_property_ce(&_5$$3, codeguard_runner_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
		zephir_fast_join_str(&_4$$3, SL(", "), &_5$$3);
		ZEPHIR_INIT_VAR(&_6$$3);
		ZEPHIR_CONCAT_VSV(&_6$$3, &cipher, " is not among the list of valid ciphers: ", &_4$$3);
		ZEPHIR_CALL_METHOD(NULL, &_3$$3, "__construct", NULL, 3, &_6$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_3$$3, "codeguard/Runner.zep", 157);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_CALL_FUNCTION(&tmp, "base64_decode", NULL, 5, &code);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&iv, "getiv", &_7, 9, &cipher);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&_8, "getnewkey", &_9, 10, &cipher);
	zephir_check_call_status();
	ZVAL_LONG(&_10, 1);
	ZEPHIR_RETURN_CALL_FUNCTION("openssl_decrypt", NULL, 11, &tmp, &cipher, &_8, &_10, &iv);
	zephir_check_call_status();
	RETURN_MM();

}

PHP_METHOD(CodeGuard_Runner, encryptCode) {

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


	ZEPHIR_CALL_SELF(NULL, "_testrequirements", &_0, 8);
	zephir_check_call_status();
	zephir_read_property(&_1, this_ptr, ZEND_STRL("apikey"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_strlen_ev(&_1) < 1) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_exception_get_default(TSRMLS_C), "Unauthorized! You need to call activateEncoder function to enable Code Obfuscation", "codeguard/Runner.zep", 173);
		return;
	}
	ZEPHIR_INIT_VAR(&_2);
	zephir_fast_strtolower(&_2, &cipher);
	zephir_get_strval(&cipher, &_2);
	zephir_read_static_property_ce(&_3, codeguard_runner_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_key_exists(&_3, &cipher))) {
		ZEPHIR_INIT_VAR(&_4$$4);
		object_init_ex(&_4$$4, zend_exception_get_default(TSRMLS_C));
		ZEPHIR_INIT_VAR(&_5$$4);
		zephir_read_static_property_ce(&_6$$4, codeguard_runner_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
		zephir_fast_join_str(&_5$$4, SL(", "), &_6$$4);
		ZEPHIR_INIT_VAR(&_7$$4);
		ZEPHIR_CONCAT_VSV(&_7$$4, &cipher, " is not among the list of valid ciphers: ", &_5$$4);
		ZEPHIR_CALL_METHOD(NULL, &_4$$4, "__construct", NULL, 3, &_7$$4);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_4$$4, "codeguard/Runner.zep", 179);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_INIT_VAR(&search);
	zephir_create_array(&search, 2, 0);
	ZEPHIR_INIT_VAR(&_8);
	ZVAL_STRING(&_8, "<?php");
	zephir_array_fast_append(&search, &_8);
	ZEPHIR_INIT_NVAR(&_8);
	ZVAL_STRING(&_8, "?>");
	zephir_array_fast_append(&search, &_8);
	ZEPHIR_INIT_NVAR(&_8);
	ZVAL_STRING(&_8, "");
	ZEPHIR_INIT_VAR(&cleancode);
	zephir_fast_str_replace(&cleancode, &search, &_8, &code);
	ZEPHIR_INIT_VAR(&_9);
	ZEPHIR_INIT_VAR(&_10);
	ZVAL_STRING(&_10, "__DIR__");
	ZEPHIR_INIT_VAR(&_11);
	ZVAL_STRING(&_11, "$_DIR");
	zephir_fast_str_replace(&_9, &_10, &_11, &cleancode);
	ZEPHIR_CPY_WRT(&cleancode, &_9);
	ZEPHIR_INIT_NVAR(&_9);
	ZEPHIR_INIT_VAR(&_12);
	ZVAL_STRING(&_12, "__FILE__");
	ZEPHIR_INIT_VAR(&_13);
	ZVAL_STRING(&_13, "$_FILE");
	zephir_fast_str_replace(&_9, &_12, &_13, &cleancode);
	ZEPHIR_CPY_WRT(&cleancode, &_9);
	ZEPHIR_CALL_SELF(&_14, "getnewkey", &_15, 10, &cipher);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&_16, "getiv", &_17, 9, &cipher);
	zephir_check_call_status();
	ZVAL_LONG(&_18, 0);
	ZEPHIR_CALL_FUNCTION(&tmp, "openssl_encrypt", NULL, 12, &cleancode, &cipher, &_14, &_18, &_16);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_9);
	zephir_time(&_9);
	ZEPHIR_INIT_VAR(&_19);
	ZVAL_STRING(&_19, "D M j G:i:s T Y");
	ZEPHIR_CALL_FUNCTION(&datetime, "date", NULL, 13, &_19, &_9);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&checksum, "sha1", NULL, 7, &cleancode);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&file);
	ZVAL_STRING(&file, "");
	ZEPHIR_OBS_VAR(&_18);
	zephir_read_static_property_ce(&_18, codeguard_runner_ce, SL("version"), PH_NOISY_CC);
	ZEPHIR_INIT_NVAR(&file);
	ZEPHIR_CONCAT_SVS(&file, "<?php /* Protection provided by PHPMyLicense Encoder Library v", &_18, "\n");
	ZEPHIR_INIT_VAR(&_20);
	ZEPHIR_CONCAT_SVSVS(&_20, "Encoded in ", &datetime, ". Checksum: ", &checksum, " */ \n");
	zephir_concat_self(&file, &_20);
	zephir_concat_self_str(&file, SL("if(!extension_loaded(\"pmlencoder\")){die('Can not execute the code. PMLEncoder extension is not loaded');}\n"));
	zephir_concat_self_str(&file, SL("eval(base64_decode('JF9ESVIgPSBwcmVnX3JlcGxhY2UoJ0BcKC4qXCguKiRAJywgJycsIF9fRElSX18pOwokX0ZJTEUgPSBwcmVnX3JlcGxhY2UoJ0BcKC4qXCguKiRAJywgJycsIF9fRklMRV9fKTs7'));\n"));
	ZEPHIR_INIT_VAR(&_21);
	ZEPHIR_CONCAT_SVS(&_21, "CodeGuard\\Runner::run('", &tmp, "');?>");
	zephir_concat_self(&file, &_21);
	RETURN_CCTOR(&file);

}

PHP_METHOD(CodeGuard_Runner, run) {

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
	zephir_eval_php(&_0, return_value, "codeguard/Runner.zep:216");
	RETURN_MM();

}

void zephir_init_static_properties_CodeGuard_Runner(TSRMLS_D) {

	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);

	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 3, 0);
	add_assoc_long_ex(&_0, SL("aes-128-cbc"), 16);
	add_assoc_long_ex(&_0, SL("aes-192-cbc"), 24);
	add_assoc_long_ex(&_0, SL("aes-256-cbc"), 32);
	zephir_update_static_property_ce(codeguard_runner_ce, ZEND_STRL("_validCiphers"), &_0);
	ZEPHIR_MM_RESTORE();

}

