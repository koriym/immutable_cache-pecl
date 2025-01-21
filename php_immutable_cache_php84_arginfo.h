#ifndef PHP_IMMUTABLE_CACHE_PHP84_ARGINFO_H
#define PHP_IMMUTABLE_CACHE_PHP84_ARGINFO_H
#endif /* PHP_IMMUTABLE_CACHE_PHP84_ARGINFO_H */

#include "php.h"
#include "Zend/zend.h"

#if PHP_VERSION_ID >= 84000
#endif /* PHP_VERSION_ID >= 84000 */
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_immutable_cache_enabled, 0, 0, _IS_BOOL, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_immutable_cache_add, 0, 1, MAY_BE_ARRAY|MAY_BE_BOOL)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_TYPE_INFO(0, value, IS_MIXED, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_immutable_cache_fetch, 0, 1, IS_MIXED, 0)
	ZEND_ARG_INFO(0, key)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(1, success, "null")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_immutable_cache_exists, 0, 1, MAY_BE_ARRAY|MAY_BE_BOOL)
	ZEND_ARG_INFO(0, key)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_MASK_EX(arginfo_immutable_cache_cache_info, 0, 0, MAY_BE_ARRAY|MAY_BE_FALSE)
	ZEND_ARG_TYPE_INFO_WITH_DEFAULT_VALUE(0, limited, _IS_BOOL, 0, "false")
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_immutable_cache_key_info, 0, 1, IS_ARRAY, 1)
	ZEND_ARG_TYPE_INFO(0, key, IS_STRING, 0)
ZEND_END_ARG_INFO()

#define arginfo_immutable_cache_sma_info arginfo_immutable_cache_cache_info


PHP_IMMUTABLE_CACHE_API ZEND_FUNCTION(immutable_cache_enabled);
PHP_IMMUTABLE_CACHE_API ZEND_FUNCTION(immutable_cache_add);
PHP_IMMUTABLE_CACHE_API ZEND_FUNCTION(immutable_cache_fetch);
PHP_IMMUTABLE_CACHE_API ZEND_FUNCTION(immutable_cache_exists);
PHP_IMMUTABLE_CACHE_API ZEND_FUNCTION(immutable_cache_cache_info);
PHP_IMMUTABLE_CACHE_API ZEND_FUNCTION(immutable_cache_key_info);
PHP_IMMUTABLE_CACHE_API ZEND_FUNCTION(immutable_cache_sma_info);


extern const zend_function_entry ext_functions[];
