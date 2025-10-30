#include <com/sun/nio/file/ExtendedWatchEventModifier.h>

#include <java/lang/Enum.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <jdk/internal/misc/FileSystemOption.h>
#include <jcpp.h>

#undef FILE_TREE

using $ExtendedWatchEventModifierArray = $Array<::com::sun::nio::file::ExtendedWatchEventModifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchEvent$Modifier = ::java::nio::file::WatchEvent$Modifier;
using $FileSystemOption = ::jdk::internal::misc::FileSystemOption;

namespace com {
	namespace sun {
		namespace nio {
			namespace file {

$FieldInfo _ExtendedWatchEventModifier_FieldInfo_[] = {
	{"FILE_TREE", "Lcom/sun/nio/file/ExtendedWatchEventModifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedWatchEventModifier, FILE_TREE)},
	{"$VALUES", "[Lcom/sun/nio/file/ExtendedWatchEventModifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ExtendedWatchEventModifier, $VALUES)},
	{}
};

$MethodInfo _ExtendedWatchEventModifier_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/nio/file/ExtendedWatchEventModifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ExtendedWatchEventModifierArray*(*)()>(&ExtendedWatchEventModifier::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjdk/internal/misc/FileSystemOption;)V", "(Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;)V", $PRIVATE, $method(static_cast<void(ExtendedWatchEventModifier::*)($String*,int32_t,$FileSystemOption*)>(&ExtendedWatchEventModifier::init$))},
	{"*name", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/nio/file/ExtendedWatchEventModifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ExtendedWatchEventModifier*(*)($String*)>(&ExtendedWatchEventModifier::valueOf))},
	{"values", "()[Lcom/sun/nio/file/ExtendedWatchEventModifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ExtendedWatchEventModifierArray*(*)()>(&ExtendedWatchEventModifier::values))},
	{}
};

$InnerClassInfo _ExtendedWatchEventModifier_InnerClassesInfo_[] = {
	{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _ExtendedWatchEventModifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.nio.file.ExtendedWatchEventModifier",
	"java.lang.Enum",
	"java.nio.file.WatchEvent$Modifier",
	_ExtendedWatchEventModifier_FieldInfo_,
	_ExtendedWatchEventModifier_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/nio/file/ExtendedWatchEventModifier;>;Ljava/nio/file/WatchEvent$Modifier;",
	nullptr,
	_ExtendedWatchEventModifier_InnerClassesInfo_
};

$Object* allocate$ExtendedWatchEventModifier($Class* clazz) {
	return $of($alloc(ExtendedWatchEventModifier));
}

$String* ExtendedWatchEventModifier::name() {
	 return this->$Enum::name();
}

$String* ExtendedWatchEventModifier::toString() {
	 return this->$Enum::toString();
}

bool ExtendedWatchEventModifier::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t ExtendedWatchEventModifier::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* ExtendedWatchEventModifier::clone() {
	 return this->$Enum::clone();
}

void ExtendedWatchEventModifier::finalize() {
	this->$Enum::finalize();
}

ExtendedWatchEventModifier* ExtendedWatchEventModifier::FILE_TREE = nullptr;
$ExtendedWatchEventModifierArray* ExtendedWatchEventModifier::$VALUES = nullptr;

$ExtendedWatchEventModifierArray* ExtendedWatchEventModifier::$values() {
	$init(ExtendedWatchEventModifier);
	return $new($ExtendedWatchEventModifierArray, {ExtendedWatchEventModifier::FILE_TREE});
}

$ExtendedWatchEventModifierArray* ExtendedWatchEventModifier::values() {
	$init(ExtendedWatchEventModifier);
	return $cast($ExtendedWatchEventModifierArray, ExtendedWatchEventModifier::$VALUES->clone());
}

ExtendedWatchEventModifier* ExtendedWatchEventModifier::valueOf($String* name) {
	$init(ExtendedWatchEventModifier);
	return $cast(ExtendedWatchEventModifier, $Enum::valueOf(ExtendedWatchEventModifier::class$, name));
}

void ExtendedWatchEventModifier::init$($String* $enum$name, int32_t $enum$ordinal, $FileSystemOption* option) {
	$Enum::init$($enum$name, $enum$ordinal);
	$nc(option)->register$(static_cast<$WatchEvent$Modifier*>(this));
}

void clinit$ExtendedWatchEventModifier($Class* class$) {
	$init($FileSystemOption);
	$assignStatic(ExtendedWatchEventModifier::FILE_TREE, $new(ExtendedWatchEventModifier, "FILE_TREE"_s, 0, $FileSystemOption::FILE_TREE));
	$assignStatic(ExtendedWatchEventModifier::$VALUES, ExtendedWatchEventModifier::$values());
}

ExtendedWatchEventModifier::ExtendedWatchEventModifier() {
}

$Class* ExtendedWatchEventModifier::load$($String* name, bool initialize) {
	$loadClass(ExtendedWatchEventModifier, name, initialize, &_ExtendedWatchEventModifier_ClassInfo_, clinit$ExtendedWatchEventModifier, allocate$ExtendedWatchEventModifier);
	return class$;
}

$Class* ExtendedWatchEventModifier::class$ = nullptr;

			} // file
		} // nio
	} // sun
} // com