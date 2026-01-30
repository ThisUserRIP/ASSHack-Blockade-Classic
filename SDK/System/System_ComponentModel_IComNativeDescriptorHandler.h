#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace System::System::ComponentModel { struct AttributeCollection; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };
namespace System::System::ComponentModel { struct TypeConverter; };
namespace System::System::ComponentModel { struct EventDescriptor; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
namespace System::System::ComponentModel { struct EventDescriptorCollection; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct PropertyDescriptorCollection; };
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace System::System::ComponentModel
{
	struct IComNativeDescriptorHandler
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::AttributeCollection* GetAttributes(mscorlib::System::Object* component);
		mscorlib::System::String* GetClassName(mscorlib::System::Object* component);
		System::ComponentModel::TypeConverter* GetConverter(mscorlib::System::Object* component);
		System::ComponentModel::EventDescriptor* GetDefaultEvent(mscorlib::System::Object* component);
		System::ComponentModel::PropertyDescriptor* GetDefaultProperty(mscorlib::System::Object* component);
		mscorlib::System::Object* GetEditor(mscorlib::System::Object* component, mscorlib::System::Type* baseEditorType);
		mscorlib::System::String* GetName(mscorlib::System::Object* component);
		System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Object* component);
		System::ComponentModel::EventDescriptorCollection* GetEvents(mscorlib::System::Object* component, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		System::ComponentModel::PropertyDescriptorCollection* GetProperties(mscorlib::System::Object* component, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		mscorlib::System::Object* GetPropertyValue(mscorlib::System::Object* component, mscorlib::System::String* propertyName, bool& success);
		mscorlib::System::Object* GetPropertyValue(mscorlib::System::Object* component, int32_t dispid, bool& success);
	};
}

