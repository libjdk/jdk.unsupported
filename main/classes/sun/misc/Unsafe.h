#ifndef _sun_misc_Unsafe_h_
#define _sun_misc_Unsafe_h_
//$ class sun.misc.Unsafe
//$ extends java.lang.Object

#include <java/lang/Array.h>
#include <jdk/internal/misc/Unsafe.h>

#pragma push_macro("ADDRESS_SIZE")
#undef ADDRESS_SIZE
#pragma push_macro("ARRAY_BOOLEAN_BASE_OFFSET")
#undef ARRAY_BOOLEAN_BASE_OFFSET
#pragma push_macro("ARRAY_BOOLEAN_INDEX_SCALE")
#undef ARRAY_BOOLEAN_INDEX_SCALE
#pragma push_macro("ARRAY_BYTE_BASE_OFFSET")
#undef ARRAY_BYTE_BASE_OFFSET
#pragma push_macro("ARRAY_BYTE_INDEX_SCALE")
#undef ARRAY_BYTE_INDEX_SCALE
#pragma push_macro("ARRAY_CHAR_BASE_OFFSET")
#undef ARRAY_CHAR_BASE_OFFSET
#pragma push_macro("ARRAY_CHAR_INDEX_SCALE")
#undef ARRAY_CHAR_INDEX_SCALE
#pragma push_macro("ARRAY_DOUBLE_BASE_OFFSET")
#undef ARRAY_DOUBLE_BASE_OFFSET
#pragma push_macro("ARRAY_DOUBLE_INDEX_SCALE")
#undef ARRAY_DOUBLE_INDEX_SCALE
#pragma push_macro("ARRAY_FLOAT_BASE_OFFSET")
#undef ARRAY_FLOAT_BASE_OFFSET
#pragma push_macro("ARRAY_FLOAT_INDEX_SCALE")
#undef ARRAY_FLOAT_INDEX_SCALE
#pragma push_macro("ARRAY_INT_BASE_OFFSET")
#undef ARRAY_INT_BASE_OFFSET
#pragma push_macro("ARRAY_INT_INDEX_SCALE")
#undef ARRAY_INT_INDEX_SCALE
#pragma push_macro("ARRAY_LONG_BASE_OFFSET")
#undef ARRAY_LONG_BASE_OFFSET
#pragma push_macro("ARRAY_LONG_INDEX_SCALE")
#undef ARRAY_LONG_INDEX_SCALE
#pragma push_macro("ARRAY_OBJECT_BASE_OFFSET")
#undef ARRAY_OBJECT_BASE_OFFSET
#pragma push_macro("ARRAY_OBJECT_INDEX_SCALE")
#undef ARRAY_OBJECT_INDEX_SCALE
#pragma push_macro("ARRAY_SHORT_BASE_OFFSET")
#undef ARRAY_SHORT_BASE_OFFSET
#pragma push_macro("ARRAY_SHORT_INDEX_SCALE")
#undef ARRAY_SHORT_INDEX_SCALE
#pragma push_macro("INVALID_FIELD_OFFSET")
#undef INVALID_FIELD_OFFSET

namespace java {
	namespace lang {
		class Throwable;
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Field;
		}
	}
}
namespace java {
	namespace nio {
		class ByteBuffer;
	}
}

namespace sun {
	namespace misc {

class $export Unsafe : public ::java::lang::Object {
	$class(Unsafe, 0, ::java::lang::Object)
public:
	Unsafe();
	void init$();
	int32_t addressSize();
	$Object* allocateInstance($Class* cls);
	int64_t allocateMemory(int64_t bytes);
	int32_t arrayBaseOffset($Class* arrayClass);
	int32_t arrayIndexScale($Class* arrayClass);
	bool compareAndSwapInt(Object$* o, int64_t offset, int32_t expected, int32_t x);
	bool compareAndSwapLong(Object$* o, int64_t offset, int64_t expected, int64_t x);
	bool compareAndSwapObject(Object$* o, int64_t offset, Object$* expected, Object$* x);
	void copyMemory(Object$* srcBase, int64_t srcOffset, Object$* destBase, int64_t destOffset, int64_t bytes);
	void copyMemory(int64_t srcAddress, int64_t destAddress, int64_t bytes);
	void ensureClassInitialized($Class* c);
	void freeMemory(int64_t address);
	void fullFence();
	int64_t getAddress(int64_t address);
	int32_t getAndAddInt(Object$* o, int64_t offset, int32_t delta);
	int64_t getAndAddLong(Object$* o, int64_t offset, int64_t delta);
	int32_t getAndSetInt(Object$* o, int64_t offset, int32_t newValue);
	int64_t getAndSetLong(Object$* o, int64_t offset, int64_t newValue);
	$Object* getAndSetObject(Object$* o, int64_t offset, Object$* newValue);
	bool getBoolean(Object$* o, int64_t offset);
	bool getBooleanVolatile(Object$* o, int64_t offset);
	int8_t getByte(Object$* o, int64_t offset);
	int8_t getByte(int64_t address);
	int8_t getByteVolatile(Object$* o, int64_t offset);
	char16_t getChar(Object$* o, int64_t offset);
	char16_t getChar(int64_t address);
	char16_t getCharVolatile(Object$* o, int64_t offset);
	double getDouble(Object$* o, int64_t offset);
	double getDouble(int64_t address);
	double getDoubleVolatile(Object$* o, int64_t offset);
	float getFloat(Object$* o, int64_t offset);
	float getFloat(int64_t address);
	float getFloatVolatile(Object$* o, int64_t offset);
	int32_t getInt(Object$* o, int64_t offset);
	int32_t getInt(int64_t address);
	int32_t getIntVolatile(Object$* o, int64_t offset);
	int32_t getLoadAverage($doubles* loadavg, int32_t nelems);
	int64_t getLong(Object$* o, int64_t offset);
	int64_t getLong(int64_t address);
	int64_t getLongVolatile(Object$* o, int64_t offset);
	$Object* getObject(Object$* o, int64_t offset);
	$Object* getObjectVolatile(Object$* o, int64_t offset);
	int16_t getShort(Object$* o, int64_t offset);
	int16_t getShort(int64_t address);
	int16_t getShortVolatile(Object$* o, int64_t offset);
	static ::sun::misc::Unsafe* getUnsafe();
	void invokeCleaner(::java::nio::ByteBuffer* directBuffer);
	void loadFence();
	int64_t objectFieldOffset(::java::lang::reflect::Field* f);
	int32_t pageSize();
	void park(bool isAbsolute, int64_t time);
	void putAddress(int64_t address, int64_t x);
	void putBoolean(Object$* o, int64_t offset, bool x);
	void putBooleanVolatile(Object$* o, int64_t offset, bool x);
	void putByte(Object$* o, int64_t offset, int8_t x);
	void putByte(int64_t address, int8_t x);
	void putByteVolatile(Object$* o, int64_t offset, int8_t x);
	void putChar(Object$* o, int64_t offset, char16_t x);
	void putChar(int64_t address, char16_t x);
	void putCharVolatile(Object$* o, int64_t offset, char16_t x);
	void putDouble(Object$* o, int64_t offset, double x);
	void putDouble(int64_t address, double x);
	void putDoubleVolatile(Object$* o, int64_t offset, double x);
	void putFloat(Object$* o, int64_t offset, float x);
	void putFloat(int64_t address, float x);
	void putFloatVolatile(Object$* o, int64_t offset, float x);
	void putInt(Object$* o, int64_t offset, int32_t x);
	void putInt(int64_t address, int32_t x);
	void putIntVolatile(Object$* o, int64_t offset, int32_t x);
	void putLong(Object$* o, int64_t offset, int64_t x);
	void putLong(int64_t address, int64_t x);
	void putLongVolatile(Object$* o, int64_t offset, int64_t x);
	void putObject(Object$* o, int64_t offset, Object$* x);
	void putObjectVolatile(Object$* o, int64_t offset, Object$* x);
	void putOrderedInt(Object$* o, int64_t offset, int32_t x);
	void putOrderedLong(Object$* o, int64_t offset, int64_t x);
	void putOrderedObject(Object$* o, int64_t offset, Object$* x);
	void putShort(Object$* o, int64_t offset, int16_t x);
	void putShort(int64_t address, int16_t x);
	void putShortVolatile(Object$* o, int64_t offset, int16_t x);
	int64_t reallocateMemory(int64_t address, int64_t bytes);
	void setMemory(Object$* o, int64_t offset, int64_t bytes, int8_t value);
	void setMemory(int64_t address, int64_t bytes, int8_t value);
	bool shouldBeInitialized($Class* c);
	$Object* staticFieldBase(::java::lang::reflect::Field* f);
	int64_t staticFieldOffset(::java::lang::reflect::Field* f);
	void storeFence();
	void throwException($Throwable* ee);
	void unpark(Object$* thread);
	static ::sun::misc::Unsafe* theUnsafe;
	static ::jdk::internal::misc::Unsafe* theInternalUnsafe;
	static const int32_t INVALID_FIELD_OFFSET = jdk::internal::misc::Unsafe::INVALID_FIELD_OFFSET;
	static int32_t ARRAY_BOOLEAN_BASE_OFFSET;
	static int32_t ARRAY_BYTE_BASE_OFFSET;
	static int32_t ARRAY_SHORT_BASE_OFFSET;
	static int32_t ARRAY_CHAR_BASE_OFFSET;
	static int32_t ARRAY_INT_BASE_OFFSET;
	static int32_t ARRAY_LONG_BASE_OFFSET;
	static int32_t ARRAY_FLOAT_BASE_OFFSET;
	static int32_t ARRAY_DOUBLE_BASE_OFFSET;
	static int32_t ARRAY_OBJECT_BASE_OFFSET;
	static int32_t ARRAY_BOOLEAN_INDEX_SCALE;
	static int32_t ARRAY_BYTE_INDEX_SCALE;
	static int32_t ARRAY_SHORT_INDEX_SCALE;
	static int32_t ARRAY_CHAR_INDEX_SCALE;
	static int32_t ARRAY_INT_INDEX_SCALE;
	static int32_t ARRAY_LONG_INDEX_SCALE;
	static int32_t ARRAY_FLOAT_INDEX_SCALE;
	static int32_t ARRAY_DOUBLE_INDEX_SCALE;
	static int32_t ARRAY_OBJECT_INDEX_SCALE;
	static int32_t ADDRESS_SIZE;
};

	} // misc
} // sun

#pragma pop_macro("ADDRESS_SIZE")
#pragma pop_macro("ARRAY_BOOLEAN_BASE_OFFSET")
#pragma pop_macro("ARRAY_BOOLEAN_INDEX_SCALE")
#pragma pop_macro("ARRAY_BYTE_BASE_OFFSET")
#pragma pop_macro("ARRAY_BYTE_INDEX_SCALE")
#pragma pop_macro("ARRAY_CHAR_BASE_OFFSET")
#pragma pop_macro("ARRAY_CHAR_INDEX_SCALE")
#pragma pop_macro("ARRAY_DOUBLE_BASE_OFFSET")
#pragma pop_macro("ARRAY_DOUBLE_INDEX_SCALE")
#pragma pop_macro("ARRAY_FLOAT_BASE_OFFSET")
#pragma pop_macro("ARRAY_FLOAT_INDEX_SCALE")
#pragma pop_macro("ARRAY_INT_BASE_OFFSET")
#pragma pop_macro("ARRAY_INT_INDEX_SCALE")
#pragma pop_macro("ARRAY_LONG_BASE_OFFSET")
#pragma pop_macro("ARRAY_LONG_INDEX_SCALE")
#pragma pop_macro("ARRAY_OBJECT_BASE_OFFSET")
#pragma pop_macro("ARRAY_OBJECT_INDEX_SCALE")
#pragma pop_macro("ARRAY_SHORT_BASE_OFFSET")
#pragma pop_macro("ARRAY_SHORT_INDEX_SCALE")
#pragma pop_macro("INVALID_FIELD_OFFSET")

#endif // _sun_misc_Unsafe_h_