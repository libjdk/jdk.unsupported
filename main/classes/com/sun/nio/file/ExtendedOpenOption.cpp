#include <com/sun/nio/file/ExtendedOpenOption.h>

#include <java/lang/Enum.h>
#include <java/nio/file/OpenOption.h>
#include <jdk/internal/misc/FileSystemOption.h>
#include <jcpp.h>

#undef DIRECT
#undef NOSHARE_DELETE
#undef NOSHARE_READ
#undef NOSHARE_WRITE

using $ExtendedOpenOptionArray = $Array<::com::sun::nio::file::ExtendedOpenOption>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OpenOption = ::java::nio::file::OpenOption;
using $FileSystemOption = ::jdk::internal::misc::FileSystemOption;

namespace com {
	namespace sun {
		namespace nio {
			namespace file {

$FieldInfo _ExtendedOpenOption_FieldInfo_[] = {
	{"NOSHARE_READ", "Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedOpenOption, NOSHARE_READ)},
	{"NOSHARE_WRITE", "Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedOpenOption, NOSHARE_WRITE)},
	{"NOSHARE_DELETE", "Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedOpenOption, NOSHARE_DELETE)},
	{"DIRECT", "Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(ExtendedOpenOption, DIRECT)},
	{"$VALUES", "[Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(ExtendedOpenOption, $VALUES)},
	{}
};

$MethodInfo _ExtendedOpenOption_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$ExtendedOpenOptionArray*(*)()>(&ExtendedOpenOption::$values))},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $FINAL},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $FINAL},
	{"*finalize", "()V", nullptr, $PROTECTED | $FINAL},
	{"*hashCode", "()I", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljava/lang/String;ILjdk/internal/misc/FileSystemOption;)V", "(Ljdk/internal/misc/FileSystemOption<Ljava/lang/Void;>;)V", $PRIVATE, $method(static_cast<void(ExtendedOpenOption::*)($String*,int32_t,$FileSystemOption*)>(&ExtendedOpenOption::init$))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<ExtendedOpenOption*(*)($String*)>(&ExtendedOpenOption::valueOf))},
	{"values", "()[Lcom/sun/nio/file/ExtendedOpenOption;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ExtendedOpenOptionArray*(*)()>(&ExtendedOpenOption::values))},
	{}
};

$ClassInfo _ExtendedOpenOption_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.nio.file.ExtendedOpenOption",
	"java.lang.Enum",
	"java.nio.file.OpenOption",
	_ExtendedOpenOption_FieldInfo_,
	_ExtendedOpenOption_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/nio/file/ExtendedOpenOption;>;Ljava/nio/file/OpenOption;"
};

$Object* allocate$ExtendedOpenOption($Class* clazz) {
	return $of($alloc(ExtendedOpenOption));
}

$String* ExtendedOpenOption::toString() {
	 return this->$Enum::toString();
}

bool ExtendedOpenOption::equals(Object$* arg0) {
	 return this->$Enum::equals(arg0);
}

int32_t ExtendedOpenOption::hashCode() {
	 return this->$Enum::hashCode();
}

$Object* ExtendedOpenOption::clone() {
	 return this->$Enum::clone();
}

void ExtendedOpenOption::finalize() {
	this->$Enum::finalize();
}

ExtendedOpenOption* ExtendedOpenOption::NOSHARE_READ = nullptr;
ExtendedOpenOption* ExtendedOpenOption::NOSHARE_WRITE = nullptr;
ExtendedOpenOption* ExtendedOpenOption::NOSHARE_DELETE = nullptr;
ExtendedOpenOption* ExtendedOpenOption::DIRECT = nullptr;
$ExtendedOpenOptionArray* ExtendedOpenOption::$VALUES = nullptr;

$ExtendedOpenOptionArray* ExtendedOpenOption::$values() {
	$init(ExtendedOpenOption);
	return $new($ExtendedOpenOptionArray, {
		ExtendedOpenOption::NOSHARE_READ,
		ExtendedOpenOption::NOSHARE_WRITE,
		ExtendedOpenOption::NOSHARE_DELETE,
		ExtendedOpenOption::DIRECT
	});
}

$ExtendedOpenOptionArray* ExtendedOpenOption::values() {
	$init(ExtendedOpenOption);
	return $cast($ExtendedOpenOptionArray, ExtendedOpenOption::$VALUES->clone());
}

ExtendedOpenOption* ExtendedOpenOption::valueOf($String* name) {
	$init(ExtendedOpenOption);
	return $cast(ExtendedOpenOption, $Enum::valueOf(ExtendedOpenOption::class$, name));
}

void ExtendedOpenOption::init$($String* $enum$name, int32_t $enum$ordinal, $FileSystemOption* option) {
	$Enum::init$($enum$name, $enum$ordinal);
	$nc(option)->register$(static_cast<$OpenOption*>(this));
}

void clinit$ExtendedOpenOption($Class* class$) {
	$init($FileSystemOption);
	$assignStatic(ExtendedOpenOption::NOSHARE_READ, $new(ExtendedOpenOption, "NOSHARE_READ"_s, 0, $FileSystemOption::NOSHARE_READ));
	$assignStatic(ExtendedOpenOption::NOSHARE_WRITE, $new(ExtendedOpenOption, "NOSHARE_WRITE"_s, 1, $FileSystemOption::NOSHARE_WRITE));
	$assignStatic(ExtendedOpenOption::NOSHARE_DELETE, $new(ExtendedOpenOption, "NOSHARE_DELETE"_s, 2, $FileSystemOption::NOSHARE_DELETE));
	$assignStatic(ExtendedOpenOption::DIRECT, $new(ExtendedOpenOption, "DIRECT"_s, 3, $FileSystemOption::DIRECT));
	$assignStatic(ExtendedOpenOption::$VALUES, ExtendedOpenOption::$values());
}

ExtendedOpenOption::ExtendedOpenOption() {
}

$Class* ExtendedOpenOption::load$($String* name, bool initialize) {
	$loadClass(ExtendedOpenOption, name, initialize, &_ExtendedOpenOption_ClassInfo_, clinit$ExtendedOpenOption, allocate$ExtendedOpenOption);
	return class$;
}

$Class* ExtendedOpenOption::class$ = nullptr;

			} // file
		} // nio
	} // sun
} // com