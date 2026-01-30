#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_FieldInfo.h"
#include "System_Reflection_FieldAttributes.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System { struct Object; };
#include "System_RuntimeFieldHandle.h"
namespace mscorlib::System { struct RuntimeFieldHandle; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };

namespace mscorlib::System::Reflection::Emit
{
	struct FieldBuilder : mscorlib::System::Reflection::FieldInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::FieldAttributes get_Attributes();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::Type* get_FieldType();
		mscorlib::System::String* get_Name();
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj);
		mscorlib::System::RuntimeFieldHandle get_FieldHandle();
		mscorlib::System::Type* get_ReflectedType();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* val, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Globalization::CultureInfo* culture);
	};
}

