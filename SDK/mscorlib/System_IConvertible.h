#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_TypeCode.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct IFormatProvider; };
#include "System_Char.h"
namespace mscorlib::System { struct Char; };
#include "System_SByte.h"
namespace mscorlib::System { struct SByte; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Int16.h"
namespace mscorlib::System { struct Int16; };
#include "System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "System_Single.h"
namespace mscorlib::System { struct Single; };
#include "System_Double.h"
namespace mscorlib::System { struct Double; };
#include "System_Decimal.h"
namespace mscorlib::System { struct Decimal; };
#include "System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System
{
	struct IConvertible
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::TypeCode GetTypeCode();
		bool ToBoolean(mscorlib::System::IFormatProvider* provider);
		wchar_t ToChar(mscorlib::System::IFormatProvider* provider);
		int8_t ToSByte(mscorlib::System::IFormatProvider* provider);
		uint8_t ToByte(mscorlib::System::IFormatProvider* provider);
		int16_t ToInt16(mscorlib::System::IFormatProvider* provider);
		uint16_t ToUInt16(mscorlib::System::IFormatProvider* provider);
		int32_t ToInt32(mscorlib::System::IFormatProvider* provider);
		uint32_t ToUInt32(mscorlib::System::IFormatProvider* provider);
		int64_t ToInt64(mscorlib::System::IFormatProvider* provider);
		uint64_t ToUInt64(mscorlib::System::IFormatProvider* provider);
		float ToSingle(mscorlib::System::IFormatProvider* provider);
		double ToDouble(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Decimal ToDecimal(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::DateTime ToDateTime(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::String* ToString(mscorlib::System::IFormatProvider* provider);
		mscorlib::System::Object* ToType(mscorlib::System::Type* conversionType, mscorlib::System::IFormatProvider* provider);
	};
}

