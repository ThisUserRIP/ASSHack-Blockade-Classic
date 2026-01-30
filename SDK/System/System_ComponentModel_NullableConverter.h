#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_TypeConverter.h"
namespace System::System::ComponentModel { struct TypeConverter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct TypeConverter_StandardValuesCollection; };

namespace System::System::ComponentModel
{
	struct NullableConverter : System::ComponentModel::TypeConverter
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* nullableType;
		mscorlib::System::Type* simpleType;
		System::ComponentModel::TypeConverter* simpleTypeConverter;
		void _ctor(mscorlib::System::Type* type);
		bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* sourceType);
		mscorlib::System::Object* ConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value);
		bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* CreateInstance(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Collections::IDictionary* propertyValues);
		bool GetCreateInstanceSupported(System::ComponentModel::ITypeDescriptorContext* context);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext* context);
		System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext* context);
		bool IsValid(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value);
		mscorlib::System::Type* get_NullableType();
		mscorlib::System::Type* get_UnderlyingType();
		System::ComponentModel::TypeConverter* get_UnderlyingTypeConverter();
	};
}

