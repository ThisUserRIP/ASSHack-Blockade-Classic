#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_BaseNumberConverter.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Globalization { struct NumberFormatInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct DecimalConverter : System::ComponentModel::BaseNumberConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool get_AllowHex();
		mscorlib::System::Type* get_TargetType();
		bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* FromString(mscorlib::System::String* value, int32_t radix);
		mscorlib::System::Object* FromString(mscorlib::System::String* value, mscorlib::System::Globalization::NumberFormatInfo* formatInfo);
		mscorlib::System::Object* FromString(mscorlib::System::String* value, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::String* ToString(mscorlib::System::Object* value, mscorlib::System::Globalization::NumberFormatInfo* formatInfo);
		void _ctor();
	};
}

