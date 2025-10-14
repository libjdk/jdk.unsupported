#ifndef _sun_reflect_ReflectionFactory_h_
#define _sun_reflect_ReflectionFactory_h_
//$ class sun.reflect.ReflectionFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("REFLECTION_FACTORY_ACCESS_PERM")
#undef REFLECTION_FACTORY_ACCESS_PERM

namespace java {
	namespace io {
		class OptionalDataException;
	}
}
namespace java {
	namespace lang {
		namespace invoke {
			class MethodHandle;
		}
	}
}
namespace java {
	namespace lang {
		namespace reflect {
			class Constructor;
		}
	}
}
namespace java {
	namespace security {
		class Permission;
	}
}
namespace jdk {
	namespace internal {
		namespace reflect {
			class ReflectionFactory;
		}
	}
}

namespace sun {
	namespace reflect {

class $export ReflectionFactory : public ::java::lang::Object {
	$class(ReflectionFactory, 0, ::java::lang::Object)
public:
	ReflectionFactory();
	void init$();
	static ::sun::reflect::ReflectionFactory* getReflectionFactory();
	bool hasStaticInitializerForSerialization($Class* cl);
	::java::lang::reflect::Constructor* newConstructorForExternalization($Class* cl);
	virtual ::java::lang::reflect::Constructor* newConstructorForSerialization($Class* cl, ::java::lang::reflect::Constructor* constructorToCall);
	::java::lang::reflect::Constructor* newConstructorForSerialization($Class* cl);
	::java::io::OptionalDataException* newOptionalDataExceptionForSerialization(bool bool$);
	::java::lang::invoke::MethodHandle* readObjectForSerialization($Class* cl);
	::java::lang::invoke::MethodHandle* readObjectNoDataForSerialization($Class* cl);
	::java::lang::invoke::MethodHandle* readResolveForSerialization($Class* cl);
	::java::lang::invoke::MethodHandle* writeObjectForSerialization($Class* cl);
	::java::lang::invoke::MethodHandle* writeReplaceForSerialization($Class* cl);
	static ::sun::reflect::ReflectionFactory* soleInstance;
	static ::jdk::internal::reflect::ReflectionFactory* delegate;
	static ::java::security::Permission* REFLECTION_FACTORY_ACCESS_PERM;
};

	} // reflect
} // sun

#pragma pop_macro("REFLECTION_FACTORY_ACCESS_PERM")

#endif // _sun_reflect_ReflectionFactory_h_