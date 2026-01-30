#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeConverter.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct GuidConverter : System::ComponentModel::TypeConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* sourceType);
		bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value);
		mscorlib::System::Object* ConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		void _ctor();
	};
}

