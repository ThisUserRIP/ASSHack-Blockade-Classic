#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_FieldInfo.h"
namespace mscorlib::System::Reflection { struct RuntimeFieldInfo; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Reflection { struct Module; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_RuntimeFieldHandle.h"
namespace mscorlib::System { struct RuntimeFieldHandle; };
#include "System_Reflection_FieldAttributes.h"

namespace mscorlib::System::Runtime::Serialization
{
	struct SerializationFieldInfo : mscorlib::System::Reflection::FieldInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::RuntimeFieldInfo* m_field;
		mscorlib::System::String* m_serializationName;
		mscorlib::System::Reflection::Module* get_Module();
		int32_t get_MetadataToken();
		void _ctor(mscorlib::System::Reflection::RuntimeFieldInfo* field, mscorlib::System::String* namePrefix);
		mscorlib::System::String* get_Name();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::Type* get_ReflectedType();
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		mscorlib::System::Type* get_FieldType();
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj);
		mscorlib::System::Object* InternalGetValue(mscorlib::System::Object* obj);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Globalization::CultureInfo* culture);
		void InternalSetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Reflection::RuntimeFieldInfo* get_FieldInfo();
		mscorlib::System::RuntimeFieldHandle get_FieldHandle();
		mscorlib::System::Reflection::FieldAttributes get_Attributes();
	};
}

