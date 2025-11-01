#ifndef _com_sun_nio_file_ExtendedCopyOption_h_
#define _com_sun_nio_file_ExtendedCopyOption_h_
//$ class com.sun.nio.file.ExtendedCopyOption
//$ extends java.lang.Enum
//$ implements java.nio.file.CopyOption

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/nio/file/CopyOption.h>

#pragma push_macro("INTERRUPTIBLE")
#undef INTERRUPTIBLE

namespace jdk {
	namespace internal {
		namespace misc {
			class FileSystemOption;
		}
	}
}

namespace com {
	namespace sun {
		namespace nio {
			namespace file {

class $import ExtendedCopyOption : public ::java::lang::Enum, public ::java::nio::file::CopyOption {
	$class(ExtendedCopyOption, 0, ::java::lang::Enum, ::java::nio::file::CopyOption)
public:
	ExtendedCopyOption();
	static $Array<::com::sun::nio::file::ExtendedCopyOption>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, ::jdk::internal::misc::FileSystemOption* option);
	virtual $String* toString() override;
	static ::com::sun::nio::file::ExtendedCopyOption* valueOf($String* name);
	static $Array<::com::sun::nio::file::ExtendedCopyOption>* values();
	static ::com::sun::nio::file::ExtendedCopyOption* INTERRUPTIBLE;
	static $Array<::com::sun::nio::file::ExtendedCopyOption>* $VALUES;
};

			} // file
		} // nio
	} // sun
} // com

#pragma pop_macro("INTERRUPTIBLE")

#endif // _com_sun_nio_file_ExtendedCopyOption_h_