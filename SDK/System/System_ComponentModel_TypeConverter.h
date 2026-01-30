#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace System::System::ComponentModel { struct ITypeDescriptorContext; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Collections { struct IDictionary; };
namespace mscorlib::System { struct Exception; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace mscorlib::System { struct Attribute; };
namespace mscorlib::System::Collections { struct ICollection; };
namespace System::System::ComponentModel { struct TypeConverter_StandardValuesCollection; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System::System::ComponentModel
{
	struct TypeConverter : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* s_UseCompatibleTypeConverterBehavior;
			bool useCompatibleTypeConversion;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static bool get_UseCompatibleTypeConversion();
		bool CanConvertFrom(mscorlib::System::Type* sourceType);
		bool CanConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* sourceType);
		bool CanConvertTo(mscorlib::System::Type* destinationType);
		bool CanConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ConvertFrom(mscorlib::System::Object* value);
		mscorlib::System::Object* ConvertFrom(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value);
		mscorlib::System::Object* ConvertFromInvariantString(mscorlib::System::String* text);
		mscorlib::System::Object* ConvertFromInvariantString(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::String* text);
		mscorlib::System::Object* ConvertFromString(mscorlib::System::String* text);
		mscorlib::System::Object* ConvertFromString(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::String* text);
		mscorlib::System::Object* ConvertFromString(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::String* text);
		mscorlib::System::Object* ConvertTo(mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		mscorlib::System::Object* ConvertTo(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		mscorlib::System::String* ConvertToInvariantString(mscorlib::System::Object* value);
		mscorlib::System::String* ConvertToInvariantString(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value);
		mscorlib::System::String* ConvertToString(mscorlib::System::Object* value);
		mscorlib::System::String* ConvertToString(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value);
		mscorlib::System::String* ConvertToString(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Globalization::CultureInfo* culture, mscorlib::System::Object* value);
		mscorlib::System::Object* CreateInstance(mscorlib::System::Collections::IDictionary* propertyValues);
		mscorlib::System::Object* CreateInstance(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Collections::IDictionary* propertyValues);
		mscorlib::System::Exception* GetConvertFromException(mscorlib::System::Object* value);
		mscorlib::System::Exception* GetConvertToException(mscorlib::System::Object* value, mscorlib::System::Type* destinationType);
		bool GetCreateInstanceSupported();
		bool GetCreateInstanceSupported(System::ComponentModel::ITypeDescriptorContext* context);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Object* value);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		bool GetPropertiesSupported();
		bool GetPropertiesSupported(System::ComponentModel::ITypeDescriptorContext* context);
		mscorlib::System::Collections::ICollection* GetStandardValues();
		System::ComponentModel::TypeConverter_StandardValuesCollection* GetStandardValues(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesExclusive();
		bool GetStandardValuesExclusive(System::ComponentModel::ITypeDescriptorContext* context);
		bool GetStandardValuesSupported();
		bool GetStandardValuesSupported(System::ComponentModel::ITypeDescriptorContext* context);
		bool IsValid(mscorlib::System::Object* value);
		bool IsValid(System::ComponentModel::ITypeDescriptorContext* context, mscorlib::System::Object* value);
		System::ComponentModel::PropertyDescriptorCollection* SortProperties(System::ComponentModel::PropertyDescriptorCollection* props, IL2CPP::Array<mscorlib::System::String*>* names);
		void _ctor();
		static void _cctor();
	};
}

