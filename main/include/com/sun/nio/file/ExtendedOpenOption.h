#ifndef _com_sun_nio_file_ExtendedOpenOption_h_
#define _com_sun_nio_file_ExtendedOpenOption_h_
//$ class com.sun.nio.file.ExtendedOpenOption
//$ extends java.lang.Enum
//$ implements java.nio.file.OpenOption

#include <java/lang/Array.h>
#include <java/lang/Enum.h>
#include <java/nio/file/OpenOption.h>

#pragma push_macro("DIRECT")
#undef DIRECT
#pragma push_macro("NOSHARE_DELETE")
#undef NOSHARE_DELETE
#pragma push_macro("NOSHARE_READ")
#undef NOSHARE_READ
#pragma push_macro("NOSHARE_WRITE")
#undef NOSHARE_WRITE

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

class $import ExtendedOpenOption : public ::java::lang::Enum, public ::java::nio::file::OpenOption {
	$class(ExtendedOpenOption, 0, ::java::lang::Enum, ::java::nio::file::OpenOption)
public:
	ExtendedOpenOption();
	static $Array<::com::sun::nio::file::ExtendedOpenOption>* $values();
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$($String* $enum$name, int32_t $enum$ordinal, ::jdk::internal::misc::FileSystemOption* option);
	virtual $String* toString() override;
	static ::com::sun::nio::file::ExtendedOpenOption* valueOf($String* name);
	static $Array<::com::sun::nio::file::ExtendedOpenOption>* values();
	static ::com::sun::nio::file::ExtendedOpenOption* NOSHARE_READ;
	static ::com::sun::nio::file::ExtendedOpenOption* NOSHARE_WRITE;
	static ::com::sun::nio::file::ExtendedOpenOption* NOSHARE_DELETE;
	static ::com::sun::nio::file::ExtendedOpenOption* DIRECT;
	static $Array<::com::sun::nio::file::ExtendedOpenOption>* $VALUES;
};

			} // file
		} // nio
	} // sun
} // com

#pragma pop_macro("DIRECT")
#pragma pop_macro("NOSHARE_DELETE")
#pragma pop_macro("NOSHARE_READ")
#pragma pop_macro("NOSHARE_WRITE")

#endif // _com_sun_nio_file_ExtendedOpenOption_h_