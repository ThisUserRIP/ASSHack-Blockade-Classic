#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::ComponentModel { struct AttributeCollection; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct TypeConverter; };
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace mscorlib::System { struct Object; };
namespace System::System::ComponentModel { struct EventDescriptorCollection; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };

namespace System::System::ComponentModel
{
	struct ICustomTypeDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::AttributeCollection* GetAttributes();
		mscorlib::System::String* GetClassName();
		mscorlib::System::String* GetComponentName();
		System::ComponentModel::TypeConverter* GetConverter();
		System::ComponentModel::EventDescriptor* GetDefaultEvent();
		System::ComponentModel::PropertyDescriptor* GetDefaultProperty();
		mscorlib::System::Object* GetEditor(mscorlib::System::Type* editorBaseType);
		System::ComponentModel::EventDescriptorCollection* GetEvents();
		System::ComponentModel::EventDescriptorCollection* GetEvents(IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties();
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		mscorlib::System::Object* GetPropertyOwner(System::ComponentModel::PropertyDescriptor* pd);
	};
}

