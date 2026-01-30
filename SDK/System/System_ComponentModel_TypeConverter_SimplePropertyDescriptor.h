#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_ComponentModel_PropertyDescriptor.h"
#include "System_ComponentModel_TypeConverter.h"
namespace System::System::ComponentModel { struct TypeConverter; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Attribute; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace System::System::ComponentModel
{
	struct TypeConverter_SimplePropertyDescriptor : System::ComponentModel::PropertyDescriptor
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Type* componentType;
		mscorlib::System::Type* propertyType;
		void _ctor(mscorlib::System::Type* componentType, mscorlib::System::String* name, mscorlib::System::Type* propertyType);
		void _ctor(mscorlib::System::Type* componentType, mscorlib::System::String* name, mscorlib::System::Type* propertyType, IL2CPP::Array<mscorlib::System::Attribute*>* attributes);
		mscorlib::System::Type* get_ComponentType();
		bool get_IsReadOnly();
		mscorlib::System::Type* get_PropertyType();
		bool CanResetValue(mscorlib::System::Object* component);
		void ResetValue(mscorlib::System::Object* component);
		bool ShouldSerializeValue(mscorlib::System::Object* component);
	};
}

