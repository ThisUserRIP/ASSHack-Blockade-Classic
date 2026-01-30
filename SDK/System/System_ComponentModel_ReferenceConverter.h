#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeConverter.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace System::System::ComponentModel { struct TypeConverter_StandardValuesCollection; };

namespace System::System::ComponentModel
{
	struct ReferenceConverter : System::ComponentModel::TypeConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* type;
		struct StaticFields
		{
			mscorlib::System::String* none;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(mscorlib::System::Type* type);
		bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* sourceType);
		mscorlib::System::Object* ConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value);
		mscorlib::System::Object* ConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext* context);
		bool IsValueAllowed(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value);
		static void _cctor();
	};
}

