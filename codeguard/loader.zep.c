
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
#include "kernel/fcall.h"
#include "kernel/operators.h"
#include "kernel/exception.h"
#include "kernel/concat.h"
#include "kernel/object.h"
#include "kernel/file.h"
#include "kernel/time.h"
#include "kernel/require.h"


ZEPHIR_INIT_CLASS(CodeGuard_Loader)
{
	ZEPHIR_REGISTER_CLASS(CodeGuard, Loader, codeguard, loader, codeguard_loader_method_entry, 0);

	zend_declare_property_null(codeguard_loader_ce, SL("_validCiphers"), ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);
	zend_declare_property_string(codeguard_loader_ce, SL("version"), "0.4.3b", ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);
	zend_declare_property_string(codeguard_loader_ce, SL("api_endpoint"), "d1t78w3k78qjyrbgd4q70t3gdnwprtb3cnq76s9eensjyxhj", ZEND_ACC_PRIVATE|ZEND_ACC_STATIC);
	zend_declare_property_null(codeguard_loader_ce, SL("apikey"), ZEND_ACC_PRIVATE);
	return SUCCESS;
}

PHP_METHOD(CodeGuard_Loader, crf32_d)
{
	zend_bool _3;
	zval map;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zephir_fcall_cache_entry *_8 = NULL, *_10 = NULL, *_12 = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS, buf = 0, bufSize = 0, tmp = 0, _2, _4;
	zval *data = NULL, data_sub, dataSize, res, i, c, b, _0, _1, dataArr, _5, _6$$4, _7$$4, _9$$4, _11$$5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&data_sub);
	ZVAL_UNDEF(&dataSize);
	ZVAL_UNDEF(&res);
	ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&c);
	ZVAL_UNDEF(&b);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&dataArr);
	ZVAL_UNDEF(&_5);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
	ZVAL_UNDEF(&_9$$4);
	ZVAL_UNDEF(&_11$$5);
	ZVAL_UNDEF(&map);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(data)
	ZEND_PARSE_PARAMETERS_END();
#endif


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
	ZEPHIR_CALL_FUNCTION(&dataArr, "str_split", NULL, 1, data);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&dataSize);
	ZVAL_LONG(&dataSize, zephir_fast_strlen_ev(data));
	_2 = (zephir_get_numberval(&dataSize) - 1);
	ZEPHIR_INIT_NVAR(&dataSize);
	ZVAL_LONG(&dataSize, _2);
	buf = 0;
	bufSize = 0;
	ZEPHIR_INIT_VAR(&res);
	ZVAL_STRING(&res, "");
	ZEPHIR_INIT_VAR(&i);
	ZVAL_LONG(&i, 0);
	ZEPHIR_CPY_WRT(&_5, &dataSize);
	_4 = 0;
	_3 = 0;
	if (ZEPHIR_GE_LONG(&_5, _4)) {
		while (1) {
			if (_3) {
				_4++;
				if (!(ZEPHIR_GE_LONG(&_5, _4))) {
					break;
				}
			} else {
				_3 = 1;
			}
			ZEPHIR_INIT_NVAR(&i);
			ZVAL_LONG(&i, _4);
			ZEPHIR_OBS_NVAR(&c);
			zephir_array_fetch(&c, &dataArr, &i, PH_NOISY, "codeguard/Loader.zep", 94);
			if (!(zephir_array_isset(&map, &c))) {
				ZEPHIR_INIT_NVAR(&_6$$4);
				object_init_ex(&_6$$4, zend_ce_exception);
				ZEPHIR_CALL_FUNCTION(&_7$$4, "bin2hex", &_8, 2, &c);
				zephir_check_call_status();
				ZEPHIR_INIT_NVAR(&_9$$4);
				ZEPHIR_CONCAT_SVSVS(&_9$$4, "CRF - Unsupported character", &c, " (0x", &_7$$4, ") at position {i}");
				ZEPHIR_CALL_METHOD(NULL, &_6$$4, "__construct", &_10, 3, &_9$$4);
				zephir_check_call_status();
				zephir_throw_exception_debug(&_6$$4, "codeguard/Loader.zep", 96);
				ZEPHIR_MM_RESTORE();
				return;
			}
			ZEPHIR_OBS_NVAR(&b);
			zephir_array_fetch(&b, &map, &c, PH_NOISY, "codeguard/Loader.zep", 98);
			tmp = (buf << 5);
			buf = (tmp | (int) (zephir_get_numberval(&b)));
			bufSize += 5;
			if (bufSize > 7) {
				bufSize -= 8;
				ZEPHIR_INIT_NVAR(&b);
				ZVAL_LONG(&b, (((buf & (255 << bufSize))) >> bufSize));
				ZEPHIR_CALL_FUNCTION(&_11$$5, "chr", &_12, 4, &b);
				zephir_check_call_status();
				zephir_concat_self(&res, &_11$$5);
			}
		}
	}
	RETURN_CCTOR(&res);
}

PHP_METHOD(CodeGuard_Loader, activateEncoder)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL;
	zval *k, k_sub, __$true, endpoint, _1, remote, _2, _3, _4, json, _5;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&k_sub);
	ZVAL_BOOL(&__$true, 1);
	ZVAL_UNDEF(&endpoint);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&remote);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&_3);
	ZVAL_UNDEF(&_4);
	ZVAL_UNDEF(&json);
	ZVAL_UNDEF(&_5);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(k)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &k);


	zephir_read_static_property_ce(&_1, codeguard_loader_ce, SL("api_endpoint"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_CALL_SELF(&endpoint, "crf32_d", &_0, 5, &_1);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "L2xpY2Vuc2UvdmFsaWRhdGU/cGlkPTEmbGljZW5zZWtleT0=");
	ZEPHIR_CALL_FUNCTION(&_3, "base64_decode", NULL, 6, &_2);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_4);
	ZEPHIR_CONCAT_VVV(&_4, &endpoint, &_3, k);
	ZEPHIR_INIT_VAR(&remote);
	zephir_file_get_contents(&remote, &_4);
	if (!zephir_is_true(&remote)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_ce_exception, "Can't comunicate with PHPMyLicense Cloud Servers to validate your license.", "codeguard/Loader.zep", 119);
		return;
	}
	ZEPHIR_INIT_VAR(&json);
	zephir_json_decode(&json, &remote, zephir_get_intval(&__$true) );
	zephir_array_fetch_string(&_5, &json, SL("status"), PH_NOISY | PH_READONLY, "codeguard/Loader.zep", 126);
	if (ZEPHIR_IS_LONG(&_5, 200)) {
		zephir_update_property_zval(this_ptr, ZEND_STRL("apikey"), k);
		RETURN_MM_BOOL(1);
	}
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(CodeGuard_Loader, urlSafeB64Encode)
{
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
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(data)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &data);


	ZEPHIR_CALL_FUNCTION(&b64, "base64_encode", NULL, 7, data);
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

PHP_METHOD(CodeGuard_Loader, urlSafeB64Decode)
{
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
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(b64)
	ZEND_PARSE_PARAMETERS_END();
#endif


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
	ZEPHIR_RETURN_CALL_FUNCTION("base64_decode", NULL, 6, b64);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(CodeGuard_Loader, _testRequirements)
{
	zval _0, _1;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	ZVAL_STRING(&_0, "openssl");
	ZEPHIR_CALL_FUNCTION(&_1, "extension_loaded", NULL, 8, &_0);
	zephir_check_call_status();
	if (!zephir_is_true(&_1)) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_ce_exception, "OpenSSL extension must be loaded!", "codeguard/Loader.zep", 149);
		return;
	}
	if (!((zephir_function_exists_ex(ZEND_STRL("openssl_encrypt")) == SUCCESS))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_ce_exception, "Could not find function openssl_encrypt!", "codeguard/Loader.zep", 150);
		return;
	}
	if (!((zephir_function_exists_ex(ZEND_STRL("openssl_decrypt")) == SUCCESS))) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_ce_exception, "Could not find function openssl_decrypt!", "codeguard/Loader.zep", 151);
		return;
	}
	ZEPHIR_MM_RESTORE();
}

PHP_METHOD(CodeGuard_Loader, getKey)
{
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
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(cipher)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &cipher_param);
	zephir_get_strval(&cipher, cipher_param);


	ZEPHIR_INIT_VAR(&key);
	ZVAL_STRING(&key, "8dgpw9vm41hpyrv5dsspabg");
	zephir_read_static_property_ce(&_0, codeguard_loader_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&cipherLength);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY, "codeguard/Loader.zep", 158);
	ZEPHIR_CALL_FUNCTION(&_1, "sha1", NULL, 9, &key);
	zephir_check_call_status();
	ZVAL_LONG(&_2, 0);
	zephir_substr(return_value, &_1, 0 , zephir_get_intval(&cipherLength), 0);
	RETURN_MM();
}

PHP_METHOD(CodeGuard_Loader, getNewKey)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_2 = NULL;
	zval *cipher_param = NULL, cipherLength, _0, k, _1, kst, _3;
	zval cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&cipherLength);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&kst);
	ZVAL_UNDEF(&_3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(cipher)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &cipher_param);
	zephir_get_strval(&cipher, cipher_param);


	zephir_read_static_property_ce(&_0, codeguard_loader_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	ZEPHIR_OBS_VAR(&cipherLength);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY, "codeguard/Loader.zep", 165);
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
	ZVAL_LONG(&_1, 'D1');
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
	ZVAL_LONG(&_1, '02');
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
	ZVAL_LONG(&_1, '01');
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
	ZVAL_STRING(&_1, "60vk0ga38913agj274w36g9r60r48ca46msm2h9k6crkcdhs60vm4cj26wtmcc9g84tkge9n6h342");
	ZEPHIR_CALL_SELF(&kst, "crf32_d", &_2, 5, &_1);
	zephir_check_call_status();
	ZVAL_LONG(&_3, 0);
	zephir_substr(return_value, &kst, 0 , zephir_get_intval(&cipherLength), 0);
	RETURN_MM();
}

PHP_METHOD(CodeGuard_Loader, getIv)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_1 = NULL;
	zval *cipher_param = NULL, cipherLength, _0, i, _2;
	zval cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&cipherLength);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&i);
	ZVAL_UNDEF(&_2);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_STR(cipher)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &cipher_param);
	zephir_get_strval(&cipher, cipher_param);


	zephir_read_static_property_ce(&_0, codeguard_loader_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	zephir_array_fetch(&cipherLength, &_0, &cipher, PH_NOISY | PH_READONLY, "codeguard/Loader.zep", 200);
	ZEPHIR_INIT_VAR(&_2);
	ZVAL_STRING(&_2, "74sk0d2368v3ae1m7113ccsm8c");
	ZEPHIR_CALL_SELF(&i, "crf32_d", &_1, 5, &_2);
	zephir_check_call_status();
	RETURN_CCTOR(&i);
}

PHP_METHOD(CodeGuard_Loader, decrypt)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL, *_7 = NULL, *_8 = NULL;
	zval *cipher_param = NULL, *code_param = NULL, _1, _2, tmp, iv, k, _9, _3$$3, _4$$3, _5$$3, _6$$3;
	zval cipher, code;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&code);
	ZVAL_UNDEF(&_1);
	ZVAL_UNDEF(&_2);
	ZVAL_UNDEF(&tmp);
	ZVAL_UNDEF(&iv);
	ZVAL_UNDEF(&k);
	ZVAL_UNDEF(&_9);
	ZVAL_UNDEF(&_3$$3);
	ZVAL_UNDEF(&_4$$3);
	ZVAL_UNDEF(&_5$$3);
	ZVAL_UNDEF(&_6$$3);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(2, 2)
		Z_PARAM_STR(cipher)
		Z_PARAM_STR(code)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 2, 0, &cipher_param, &code_param);
	zephir_get_strval(&cipher, cipher_param);
	zephir_get_strval(&code, code_param);


	ZEPHIR_CALL_SELF(NULL, "_testrequirements", &_0, 10);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_1);
	zephir_fast_strtolower(&_1, &cipher);
	zephir_get_strval(&cipher, &_1);
	zephir_read_static_property_ce(&_2, codeguard_loader_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_key_exists(&_2, &cipher))) {
		ZEPHIR_INIT_VAR(&_3$$3);
		object_init_ex(&_3$$3, zend_ce_exception);
		ZEPHIR_INIT_VAR(&_4$$3);
		zephir_read_static_property_ce(&_5$$3, codeguard_loader_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
		zephir_fast_join_str(&_4$$3, SL(", "), &_5$$3);
		ZEPHIR_INIT_VAR(&_6$$3);
		ZEPHIR_CONCAT_VSV(&_6$$3, &cipher, " is not among the list of valid ciphers: ", &_4$$3);
		ZEPHIR_CALL_METHOD(NULL, &_3$$3, "__construct", NULL, 3, &_6$$3);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_3$$3, "codeguard/Loader.zep", 213);
		ZEPHIR_MM_RESTORE();
		return;
	}
	ZEPHIR_CALL_FUNCTION(&tmp, "base64_decode", NULL, 6, &code);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&iv, "getiv", &_7, 11, &cipher);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&k, "getnewkey", &_8, 12, &cipher);
	zephir_check_call_status();
	ZVAL_LONG(&_9, 1);
	ZEPHIR_RETURN_CALL_FUNCTION("openssl_decrypt", NULL, 13, &tmp, &cipher, &k, &_9, &iv);
	zephir_check_call_status();
	RETURN_MM();
}

PHP_METHOD(CodeGuard_Loader, encryptCode)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zephir_fcall_cache_entry *_0 = NULL, *_15 = NULL, *_17 = NULL, *_21 = NULL;
	zval *code_param = NULL, *cipher_param = NULL, _1, _2, _3, search, _8, cleancode, _9, _10, _11, _12, _13, tmp, _14, _16, _18, datetime, _19, checksum, file, _20, _22, _23, _24, _25, _26, _27, _28, _4$$4, _5$$4, _6$$4, _7$$4;
	zval code, cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&code);
	ZVAL_UNDEF(&cipher);
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
	ZVAL_UNDEF(&_22);
	ZVAL_UNDEF(&_23);
	ZVAL_UNDEF(&_24);
	ZVAL_UNDEF(&_25);
	ZVAL_UNDEF(&_26);
	ZVAL_UNDEF(&_27);
	ZVAL_UNDEF(&_28);
	ZVAL_UNDEF(&_4$$4);
	ZVAL_UNDEF(&_5$$4);
	ZVAL_UNDEF(&_6$$4);
	ZVAL_UNDEF(&_7$$4);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(code)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(cipher)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 1, &code_param, &cipher_param);
	zephir_get_strval(&code, code_param);
	if (!cipher_param) {
		ZEPHIR_INIT_VAR(&cipher);
		ZVAL_STRING(&cipher, "aes-256-cbc");
	} else {
		zephir_get_strval(&cipher, cipher_param);
	}


	ZEPHIR_CALL_SELF(NULL, "_testrequirements", &_0, 10);
	zephir_check_call_status();
	zephir_read_property(&_1, this_ptr, ZEND_STRL("apikey"), PH_NOISY_CC | PH_READONLY);
	if (zephir_fast_strlen_ev(&_1) < 1) {
		ZEPHIR_THROW_EXCEPTION_DEBUG_STR(zend_ce_exception, "Unauthorized! You need to call activateEncoder function to enable Code Obfuscation", "codeguard/Loader.zep", 229);
		return;
	}
	ZEPHIR_INIT_VAR(&_2);
	zephir_fast_strtolower(&_2, &cipher);
	zephir_get_strval(&cipher, &_2);
	zephir_read_static_property_ce(&_3, codeguard_loader_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
	if (!(zephir_array_key_exists(&_3, &cipher))) {
		ZEPHIR_INIT_VAR(&_4$$4);
		object_init_ex(&_4$$4, zend_ce_exception);
		ZEPHIR_INIT_VAR(&_5$$4);
		zephir_read_static_property_ce(&_6$$4, codeguard_loader_ce, SL("_validCiphers"), PH_NOISY_CC | PH_READONLY);
		zephir_fast_join_str(&_5$$4, SL(", "), &_6$$4);
		ZEPHIR_INIT_VAR(&_7$$4);
		ZEPHIR_CONCAT_VSV(&_7$$4, &cipher, " is not among the list of valid ciphers: ", &_5$$4);
		ZEPHIR_CALL_METHOD(NULL, &_4$$4, "__construct", NULL, 3, &_7$$4);
		zephir_check_call_status();
		zephir_throw_exception_debug(&_4$$4, "codeguard/Loader.zep", 235);
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
	ZEPHIR_CALL_SELF(&_14, "getnewkey", &_15, 12, &cipher);
	zephir_check_call_status();
	ZEPHIR_CALL_SELF(&_16, "getiv", &_17, 11, &cipher);
	zephir_check_call_status();
	ZVAL_LONG(&_18, 0);
	ZEPHIR_CALL_FUNCTION(&tmp, "openssl_encrypt", NULL, 14, &cleancode, &cipher, &_14, &_18, &_16);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(&_9);
	zephir_time(&_9);
	ZEPHIR_INIT_VAR(&_19);
	ZVAL_STRING(&_19, "D M j G:i:s T Y");
	ZEPHIR_CALL_FUNCTION(&datetime, "date", NULL, 15, &_19, &_9);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&checksum, "sha1", NULL, 9, &cleancode);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&file);
	ZVAL_STRING(&file, "");
	ZEPHIR_INIT_NVAR(&_19);
	ZVAL_STRING(&_19, "7gzq0t3g40qjm82ge9qq8sb3ehmpyvh0e1s6yxk9chjp8832f4g50j2g9nwmrtb3cnq76s908nq66vv4cns20k39c9s62wks41v0");
	ZEPHIR_CALL_SELF(&_20, "crf32_d", &_21, 5, &_19);
	zephir_check_call_status();
	ZEPHIR_OBS_VAR(&_18);
	zephir_read_static_property_ce(&_18, codeguard_loader_ce, SL("version"), PH_NOISY_CC);
	ZEPHIR_INIT_NVAR(&file);
	ZEPHIR_CONCAT_VVS(&file, &_20, &_18, "\n");
	ZEPHIR_INIT_VAR(&_22);
	ZEPHIR_CONCAT_SVSVS(&_22, "Encoded in ", &datetime, ". Checksum: ", &checksum, " */ \n");
	zephir_concat_self(&file, &_22);
	ZEPHIR_INIT_NVAR(&_19);
	ZVAL_STRING(&_19, "d5k2g8b5f1t6avkkd5qpwqvcdxgp8sb450h66vv4cnkqarbjcgh2jabvchmpaa178dgpw83edxt20sbrcnhqax3541t6gs90cdqp8s9e4184tk25dshpys35e8g6ay3mcnq76tbfdrg6jws0dsqq883cdxgp8sb44wmkpz8");
	ZEPHIR_CALL_SELF(&_23, "crf32_d", &_21, 5, &_19);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_24);
	ZEPHIR_CONCAT_VS(&_24, &_23, "\n");
	zephir_concat_self(&file, &_24);
	ZEPHIR_INIT_NVAR(&_19);
	ZVAL_STRING(&_19, "cnv62v18c9gq6s9p6hfp8sb3dxj6aa179933jhakas4pem2k89vp6vapdsc36jkccd3qgt2s69apyjhg89hmpgsme5c46svn9dmn4gaaf5vpejkscdsmjhhscs94av2kb0rkgw2fexqppp1gb9558hancx856gkqcdpncvjr6d56rrt7f1m5jcjndx530gk39d1k8war8dkqajv9a90mmybqcx57jrvk9533jsjjddp4tmjp75k4pn3k6wkjja9v");
	ZEPHIR_CALL_SELF(&_25, "crf32_d", &_21, 5, &_19);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_26);
	ZEPHIR_CONCAT_VS(&_26, &_25, "\n");
	zephir_concat_self(&file, &_26);
	ZEPHIR_INIT_NVAR(&_19);
	ZVAL_STRING(&_19, "8dqp8sa7engq4s2w9hqp2s35e8x3mwkndrm2e");
	ZEPHIR_CALL_SELF(&_27, "crf32_d", &_21, 5, &_19);
	zephir_check_call_status();
	ZEPHIR_INIT_VAR(&_28);
	ZEPHIR_CONCAT_VVS(&_28, &_27, &tmp, "');?>");
	zephir_concat_self(&file, &_28);
	RETURN_CCTOR(&file);
}

PHP_METHOD(CodeGuard_Loader, run)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *code_param = NULL, *cipher_param = NULL, _0;
	zval code, cipher;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&code);
	ZVAL_UNDEF(&cipher);
	ZVAL_UNDEF(&_0);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 2)
		Z_PARAM_STR(code)
		Z_PARAM_OPTIONAL
		Z_PARAM_STR(cipher)
	ZEND_PARSE_PARAMETERS_END();
#endif


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
	zephir_eval_php(&_0, return_value, "codeguard/Loader.zep:274");
	RETURN_MM();
}

PHP_METHOD(CodeGuard_Loader, getBinaryVersion)
{
	zval _0;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&_0);



	zephir_read_static_property_ce(&_0, codeguard_loader_ce, SL("version"), PH_NOISY_CC | PH_READONLY);
	RETURN_CTORW(&_0);
}

PHP_METHOD(CodeGuard_Loader, canEncryptCode)
{
	zval *this_ptr = getThis();



	RETURN_BOOL(1);
}

PHP_METHOD(CodeGuard_Loader, dispatch)
{
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
	zend_long ZEPHIR_LAST_CALL_STATUS;
	zval *code, code_sub, tmp, tmpf, _0, _1;
	zval *this_ptr = getThis();

	ZVAL_UNDEF(&code_sub);
	ZVAL_UNDEF(&tmp);
	ZVAL_UNDEF(&tmpf);
	ZVAL_UNDEF(&_0);
	ZVAL_UNDEF(&_1);
#if PHP_VERSION_ID >= 80000
	bool is_null_true = 1;
	ZEND_PARSE_PARAMETERS_START(1, 1)
		Z_PARAM_ZVAL(code)
	ZEND_PARSE_PARAMETERS_END();
#endif


	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &code);


	ZEPHIR_CALL_FUNCTION(&tmp, "tmpfile", NULL, 16);
	zephir_check_call_status();
	ZEPHIR_CALL_FUNCTION(&tmpf, "stream_get_meta_data", NULL, 17, &tmp);
	zephir_check_call_status();
	zephir_array_fetch_string(&_0, &tmpf, SL("uri"), PH_NOISY | PH_READONLY, "codeguard/Loader.zep", 293);
	ZEPHIR_CPY_WRT(&tmpf, &_0);
	zephir_fwrite(NULL, &tmp, code);
	ZEPHIR_INIT_VAR(&_1);
	ZEPHIR_CONCAT_SV(&_1, "<?php ", &tmpf);
	if (zephir_require_zval(&_1) == FAILURE) {
		RETURN_MM_NULL();
	}
	zephir_fclose(&tmp);
	ZEPHIR_MM_RESTORE();
}

void zephir_init_static_properties_CodeGuard_Loader()
{
	zval _0;
	zephir_method_globals *ZEPHIR_METHOD_GLOBALS_PTR = NULL;
		ZVAL_UNDEF(&_0);


	ZEPHIR_MM_GROW();

	ZEPHIR_INIT_VAR(&_0);
	zephir_create_array(&_0, 3, 0);
	add_assoc_long_ex(&_0, SL("aes-128-cbc"), 16);
	add_assoc_long_ex(&_0, SL("aes-192-cbc"), 24);
	add_assoc_long_ex(&_0, SL("aes-256-cbc"), 32);
	zephir_update_static_property_ce(codeguard_loader_ce, ZEND_STRL("_validCiphers"), &_0);
	ZEPHIR_MM_RESTORE();
}

