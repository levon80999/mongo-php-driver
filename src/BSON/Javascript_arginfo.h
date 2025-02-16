/* This is a generated file, edit the .stub.php file instead.
 * Stub hash: a26f3f81298ed3571f27bad3ade4a8540ca986f7 */

#if PHP_VERSION_ID >= 80000
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MongoDB_BSON_Javascript___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
	ZEND_ARG_TYPE_MASK(0, scope, MAY_BE_ARRAY|MAY_BE_OBJECT|MAY_BE_NULL, "null")
ZEND_END_ARG_INFO()
#endif

#if !(PHP_VERSION_ID >= 80000)
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MongoDB_BSON_Javascript___construct, 0, 0, 1)
	ZEND_ARG_TYPE_INFO(0, code, IS_STRING, 0)
	ZEND_ARG_INFO_WITH_DEFAULT_VALUE(0, scope, "null")
ZEND_END_ARG_INFO()
#endif

ZEND_BEGIN_ARG_WITH_RETURN_OBJ_INFO_EX(arginfo_class_MongoDB_BSON_Javascript___set_state, 0, 1, MongoDB\\BSON\\Javascript, 0)
	ZEND_ARG_TYPE_INFO(0, properties, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_BSON_Javascript_getCode, 0, 0, IS_STRING, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_BSON_Javascript_getScope, 0, 0, IS_OBJECT, 1)
ZEND_END_ARG_INFO()

#define arginfo_class_MongoDB_BSON_Javascript___toString arginfo_class_MongoDB_BSON_Javascript_getCode

#define arginfo_class_MongoDB_BSON_Javascript_serialize arginfo_class_MongoDB_BSON_Javascript_getCode

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_BSON_Javascript_unserialize, 0, 1, IS_VOID, 0)
	ZEND_ARG_INFO(0, serialized)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_BSON_Javascript___unserialize, 0, 1, IS_VOID, 0)
	ZEND_ARG_TYPE_INFO(0, data, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_BSON_Javascript___serialize, 0, 0, IS_ARRAY, 0)
ZEND_END_ARG_INFO()

#if PHP_VERSION_ID >= 80000
ZEND_BEGIN_ARG_WITH_RETURN_TYPE_INFO_EX(arginfo_class_MongoDB_BSON_Javascript_jsonSerialize, 0, 0, IS_MIXED, 0)
ZEND_END_ARG_INFO()
#endif

#if !(PHP_VERSION_ID >= 80000)
ZEND_BEGIN_ARG_INFO_EX(arginfo_class_MongoDB_BSON_Javascript_jsonSerialize, 0, 0, 0)
ZEND_END_ARG_INFO()
#endif


#if PHP_VERSION_ID >= 80000
static ZEND_METHOD(MongoDB_BSON_Javascript, __construct);
#endif
#if !(PHP_VERSION_ID >= 80000)
static ZEND_METHOD(MongoDB_BSON_Javascript, __construct);
#endif
static ZEND_METHOD(MongoDB_BSON_Javascript, __set_state);
static ZEND_METHOD(MongoDB_BSON_Javascript, getCode);
static ZEND_METHOD(MongoDB_BSON_Javascript, getScope);
static ZEND_METHOD(MongoDB_BSON_Javascript, __toString);
static ZEND_METHOD(MongoDB_BSON_Javascript, serialize);
static ZEND_METHOD(MongoDB_BSON_Javascript, unserialize);
static ZEND_METHOD(MongoDB_BSON_Javascript, __unserialize);
static ZEND_METHOD(MongoDB_BSON_Javascript, __serialize);
#if PHP_VERSION_ID >= 80000
static ZEND_METHOD(MongoDB_BSON_Javascript, jsonSerialize);
#endif
#if !(PHP_VERSION_ID >= 80000)
static ZEND_METHOD(MongoDB_BSON_Javascript, jsonSerialize);
#endif


static const zend_function_entry class_MongoDB_BSON_Javascript_methods[] = {
#if PHP_VERSION_ID >= 80000
	ZEND_ME(MongoDB_BSON_Javascript, __construct, arginfo_class_MongoDB_BSON_Javascript___construct, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if !(PHP_VERSION_ID >= 80000)
	ZEND_ME(MongoDB_BSON_Javascript, __construct, arginfo_class_MongoDB_BSON_Javascript___construct, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
	ZEND_ME(MongoDB_BSON_Javascript, __set_state, arginfo_class_MongoDB_BSON_Javascript___set_state, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_BSON_Javascript, getCode, arginfo_class_MongoDB_BSON_Javascript_getCode, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_BSON_Javascript, getScope, arginfo_class_MongoDB_BSON_Javascript_getScope, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_BSON_Javascript, __toString, arginfo_class_MongoDB_BSON_Javascript___toString, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_BSON_Javascript, serialize, arginfo_class_MongoDB_BSON_Javascript_serialize, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_BSON_Javascript, unserialize, arginfo_class_MongoDB_BSON_Javascript_unserialize, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_BSON_Javascript, __unserialize, arginfo_class_MongoDB_BSON_Javascript___unserialize, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
	ZEND_ME(MongoDB_BSON_Javascript, __serialize, arginfo_class_MongoDB_BSON_Javascript___serialize, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#if PHP_VERSION_ID >= 80000
	ZEND_ME(MongoDB_BSON_Javascript, jsonSerialize, arginfo_class_MongoDB_BSON_Javascript_jsonSerialize, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
#if !(PHP_VERSION_ID >= 80000)
	ZEND_ME(MongoDB_BSON_Javascript, jsonSerialize, arginfo_class_MongoDB_BSON_Javascript_jsonSerialize, ZEND_ACC_PUBLIC|ZEND_ACC_FINAL)
#endif
	ZEND_FE_END
};

static zend_class_entry *register_class_MongoDB_BSON_Javascript(zend_class_entry *class_entry_MongoDB_BSON_JavascriptInterface, zend_class_entry *class_entry_JsonSerializable, zend_class_entry *class_entry_MongoDB_BSON_Type, zend_class_entry *class_entry_Serializable)
{
	zend_class_entry ce, *class_entry;

	INIT_NS_CLASS_ENTRY(ce, "MongoDB\\BSON", "Javascript", class_MongoDB_BSON_Javascript_methods);
	class_entry = zend_register_internal_class_ex(&ce, NULL);
	class_entry->ce_flags |= ZEND_ACC_FINAL;
	zend_class_implements(class_entry, 4, class_entry_MongoDB_BSON_JavascriptInterface, class_entry_JsonSerializable, class_entry_MongoDB_BSON_Type, class_entry_Serializable);

	return class_entry;
}
