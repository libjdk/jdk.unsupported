#include <sun/reflect/ReflectionFactory$1.h>

#include <jdk/internal/reflect/ReflectionFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $ReflectionFactory = ::jdk::internal::reflect::ReflectionFactory;

namespace sun {
	namespace reflect {

$MethodInfo _ReflectionFactory$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(ReflectionFactory$1::*)()>(&ReflectionFactory$1::init$))},
	{"run", "()Ljdk/internal/reflect/ReflectionFactory;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _ReflectionFactory$1_EnclosingMethodInfo_ = {
	"sun.reflect.ReflectionFactory",
	nullptr,
	nullptr
};

$InnerClassInfo _ReflectionFactory$1_InnerClassesInfo_[] = {
	{"sun.reflect.ReflectionFactory$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _ReflectionFactory$1_ClassInfo_ = {
	$ACC_SUPER,
	"sun.reflect.ReflectionFactory$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_ReflectionFactory$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljdk/internal/reflect/ReflectionFactory;>;",
	&_ReflectionFactory$1_EnclosingMethodInfo_,
	_ReflectionFactory$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"sun.reflect.ReflectionFactory"
};

$Object* allocate$ReflectionFactory$1($Class* clazz) {
	return $of($alloc(ReflectionFactory$1));
}

void ReflectionFactory$1::init$() {
}

$Object* ReflectionFactory$1::run() {
	return $of($ReflectionFactory::getReflectionFactory());
}

ReflectionFactory$1::ReflectionFactory$1() {
}

$Class* ReflectionFactory$1::load$($String* name, bool initialize) {
	$loadClass(ReflectionFactory$1, name, initialize, &_ReflectionFactory$1_ClassInfo_, allocate$ReflectionFactory$1);
	return class$;
}

$Class* ReflectionFactory$1::class$ = nullptr;

	} // reflect
} // sun