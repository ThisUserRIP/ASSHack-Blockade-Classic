#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_PropertyDescriptor.h"
namespace System::System::ComponentModel { struct ReflectPropertyDescriptor; };
namespace System::System::ComponentModel { struct IExtenderProvider; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Attribute; };
namespace System::System::ComponentModel { struct PropertyDescriptor; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { struct String; };

namespace System::System::ComponentModel
{
	struct ExtendedPropertyDescriptor : System::ComponentModel::PropertyDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::ComponentModel::ReflectPropertyDescriptor* extenderInfo;
		System::ComponentModel::IExtenderProvider* provider;
		void _ctor(System::ComponentModel::ReflectPropertyDescriptor* extenderInfo, mscorlib::System::Type* receiverType, System::ComponentModel::IExtenderProvider* provider, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		void _ctor(System::ComponentModel::PropertyDescriptor* extender, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		bool CanResetValue(mscorlib::System::Object* comp);
		mscorlib::System::Type* get_ComponentType();
		bool get_IsReadOnly();
		mscorlib::System::Type* get_PropertyType();
		mscorlib::System::String* get_DisplayName();
		mscorlib::System::Object* GetValue(mscorlib::System::Object* comp);
		void ResetValue(mscorlib::System::Object* comp);
		void SetValue(mscorlib::System::Object* component, mscorlib::System::Object* value);
		bool ShouldSerializeValue(mscorlib::System::Object* comp);
	};
}

