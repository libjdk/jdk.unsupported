#include <com/sun/nio/file/SensitivityWatchEventModifier.h>

#include <java/lang/Enum.h>
#include <java/nio/file/WatchEvent$Modifier.h>
#include <jdk/internal/misc/FileSystemOption.h>
#include <jcpp.h>

#undef HIGH
#undef LOW
#undef MEDIUM
#undef SENSITIVITY_HIGH
#undef SENSITIVITY_LOW
#undef SENSITIVITY_MEDIUM

using $SensitivityWatchEventModifierArray = $Array<::com::sun::nio::file::SensitivityWatchEventModifier>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $WatchEvent$Modifier = ::java::nio::file::WatchEvent$Modifier;
using $FileSystemOption = ::jdk::internal::misc::FileSystemOption;

namespace com {
	namespace sun {
		namespace nio {
			namespace file {

$FieldInfo _SensitivityWatchEventModifier_FieldInfo_[] = {
	{"HIGH", "Lcom/sun/nio/file/SensitivityWatchEventModifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SensitivityWatchEventModifier, HIGH)},
	{"MEDIUM", "Lcom/sun/nio/file/SensitivityWatchEventModifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SensitivityWatchEventModifier, MEDIUM)},
	{"LOW", "Lcom/sun/nio/file/SensitivityWatchEventModifier;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SensitivityWatchEventModifier, LOW)},
	{"$VALUES", "[Lcom/sun/nio/file/SensitivityWatchEventModifier;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SensitivityWatchEventModifier, $VALUES)},
	{"sensitivity", "I", nullptr, $PRIVATE | $FINAL, $field(SensitivityWatchEventModifier, sensitivity)},
	{}
};

$MethodInfo _SensitivityWatchEventModifier_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/nio/file/SensitivityWatchEventModifier;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SensitivityWatchEventModifierArray*(*)()>(&SensitivityWatchEventModifier::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjdk/internal/misc/FileSystemOption;I)V", "(Ljdk/internal/misc/FileSystemOption<Ljava/lang/Integer;>;I)V", $PRIVATE, $method(static_cast<void(SensitivityWatchEventModifier::*)($String*,int32_t,$FileSystemOption*,int32_t)>(&SensitivityWatchEventModifier::init$))},
	{"*name", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"sensitivityValueInSeconds", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SensitivityWatchEventModifier::*)()>(&SensitivityWatchEventModifier::sensitivityValueInSeconds))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/nio/file/SensitivityWatchEventModifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SensitivityWatchEventModifier*(*)($String*)>(&SensitivityWatchEventModifier::valueOf))},
	{"values", "()[Lcom/sun/nio/file/SensitivityWatchEventModifier;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SensitivityWatchEventModifierArray*(*)()>(&SensitivityWatchEventModifier::values))},
	{}
};

$InnerClassInfo _SensitivityWatchEventModifier_InnerClassesInfo_[] = {
	{"java.nio.file.WatchEvent$Modifier", "java.nio.file.WatchEvent", "Modifier", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _SensitivityWatchEventModifier_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.nio.file.SensitivityWatchEventModifier",
	"java.lang.Enum",
	"java.nio.file.WatchEvent$Modifier",
	_SensitivityWatchEventModifier_FieldInfo_,
	_SensitivityWatchEventModifier_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/nio/file/SensitivityWatchEventModifier;>;Ljava/nio/file/WatchEvent$Modifier;",
	nullptr,
	_SensitivityWatchEventModifier_InnerClassesInfo_
};

$Object* allocate$SensitivityWatchEventModifier($Class* clazz) {
	return $of($alloc(SensitivityWatchEventModifier));
}

$String* SensitivityWatchEventModifier::name() {
	 return this->$Enum::name();
}

$String* SensitivityWatchEventModifier::toString() {
	 return this->$Enum::toString();
}

bool SensitivityWatchEventModifier::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t SensitivityWatchEventModifier::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* SensitivityWatchEventModifier::clone() {
	 return this->$Enum::clone();
}

void SensitivityWatchEventModifier::finalize() {
	this->$Enum::finalize();
}

SensitivityWatchEventModifier* SensitivityWatchEventModifier::HIGH = nullptr;
SensitivityWatchEventModifier* SensitivityWatchEventModifier::MEDIUM = nullptr;
SensitivityWatchEventModifier* SensitivityWatchEventModifier::LOW = nullptr;
$SensitivityWatchEventModifierArray* SensitivityWatchEventModifier::$VALUES = nullptr;

$SensitivityWatchEventModifierArray* SensitivityWatchEventModifier::$values() {
	$init(SensitivityWatchEventModifier);
	return $new($SensitivityWatchEventModifierArray, {
		SensitivityWatchEventModifier::HIGH,
		SensitivityWatchEventModifier::MEDIUM,
		SensitivityWatchEventModifier::LOW
	});
}

$SensitivityWatchEventModifierArray* SensitivityWatchEventModifier::values() {
	$init(SensitivityWatchEventModifier);
	return $cast($SensitivityWatchEventModifierArray, SensitivityWatchEventModifier::$VALUES->clone());
}

SensitivityWatchEventModifier* SensitivityWatchEventModifier::valueOf($String* name) {
	$init(SensitivityWatchEventModifier);
	return $cast(SensitivityWatchEventModifier, $Enum::valueOf(SensitivityWatchEventModifier::class$, name));
}

int32_t SensitivityWatchEventModifier::sensitivityValueInSeconds() {
	return this->sensitivity;
}

void SensitivityWatchEventModifier::init$($String* $enum$name, int32_t $enum$ordinal, $FileSystemOption* option, int32_t sensitivity) {
	$Enum::init$($enum$name, $enum$ordinal);
	this->sensitivity = sensitivity;
	$nc(option)->register$(this, $($Integer::valueOf(sensitivity)));
}

void clinit$SensitivityWatchEventModifier($Class* class$) {
	$init($FileSystemOption);
	$assignStatic(SensitivityWatchEventModifier::HIGH, $new(SensitivityWatchEventModifier, "HIGH"_s, 0, $FileSystemOption::SENSITIVITY_HIGH, 2));
	$assignStatic(SensitivityWatchEventModifier::MEDIUM, $new(SensitivityWatchEventModifier, "MEDIUM"_s, 1, $FileSystemOption::SENSITIVITY_MEDIUM, 10));
	$assignStatic(SensitivityWatchEventModifier::LOW, $new(SensitivityWatchEventModifier, "LOW"_s, 2, $FileSystemOption::SENSITIVITY_LOW, 30));
	$assignStatic(SensitivityWatchEventModifier::$VALUES, SensitivityWatchEventModifier::$values());
}

SensitivityWatchEventModifier::SensitivityWatchEventModifier() {
}

$Class* SensitivityWatchEventModifier::load$($String* name, bool initialize) {
	$loadClass(SensitivityWatchEventModifier, name, initialize, &_SensitivityWatchEventModifier_ClassInfo_, clinit$SensitivityWatchEventModifier, allocate$SensitivityWatchEventModifier);
	return class$;
}

$Class* SensitivityWatchEventModifier::class$ = nullptr;

			} // file
		} // nio
	} // sun
} // com