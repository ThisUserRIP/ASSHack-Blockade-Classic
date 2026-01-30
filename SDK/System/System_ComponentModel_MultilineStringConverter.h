#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeConverter.h"
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace mscorlib::System { struct Attribute; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct MultilineStringConverter : System::ComponentModel::TypeConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Object* ConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext* context);
		void _ctor();
	};
}

