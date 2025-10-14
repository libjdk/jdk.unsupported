#ifndef _sun_reflect_ReflectionFactory$1_h_
#define _sun_reflect_ReflectionFactory$1_h_
//$ class sun.reflect.ReflectionFactory$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace sun {
	namespace reflect {

class ReflectionFactory$1 : public ::java::security::PrivilegedAction {
	$class(ReflectionFactory$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	ReflectionFactory$1();
	void init$();
	virtual $Object* run() override;
};

	} // reflect
} // sun

#endif // _sun_reflect_ReflectionFactory$1_h_