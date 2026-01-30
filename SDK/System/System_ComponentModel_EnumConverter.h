#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeConverter.h"
namespace System::System::ComponentModel { struct TypeConverter_StandardValuesCollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System::Collections { struct IComparer; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct CultureInfo; };

namespace System::System::ComponentModel
{
	struct EnumConverter : System::ComponentModel::TypeConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::TypeConverter_StandardValuesCollection* values;
		mscorlib::System::Type* type;
		void _ctor(mscorlib::System::Type* type);
		mscorlib::System::Type* get_EnumType();
		System::ComponentModel::TypeConverter_StandardValuesCollection* get_Values();
		void set_Values(System::ComponentModel::TypeConverter_StandardValuesCollection* value);
		bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* sourceType);
		bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* destinationType);
		mscorlib::System::Collections::IComparer* get_Comparer();
		mscorlib::System::Object* ConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value);
		mscorlib::System::Object* ConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext* context);
		bool IsValid(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value);
	};
}

