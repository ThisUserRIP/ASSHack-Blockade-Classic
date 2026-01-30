#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_RtFieldInfo.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_RuntimeFieldHandle.h"
namespace mscorlib::System { struct RuntimeFieldHandle; };
namespace mscorlib::System { struct String; };
#include "System_Reflection_FieldAttributes.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
namespace mscorlib::System::Reflection { struct CustomAttributeData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace mscorlib::System::Reflection
{
	struct MonoField : mscorlib::System::Reflection::RtFieldInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t klass;
		mscorlib::System::RuntimeFieldHandle fhandle;
		mscorlib::System::String* name;
		mscorlib::System::Type* type;
		mscorlib::System::Reflection::FieldAttributes attrs;
		mscorlib::System::Reflection::FieldAttributes get_Attributes();
		mscorlib::System::RuntimeFieldHandle get_FieldHandle();
		mscorlib::System::Type* ResolveType();
		mscorlib::System::Type* get_FieldType();
		mscorlib::System::Type* GetParentType(bool declaring);
		mscorlib::System::Type* get_ReflectedType();
		mscorlib::System::Type* get_DeclaringType();
		mscorlib::System::String* get_Name();
		bool IsDefined(mscorlib::System::Type* attributeType, bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(bool inherit);
		IL2CPP::Array<mscorlib::System::Object*>* GetCustomAttributes(mscorlib::System::Type* attributeType, bool inherit);
		int32_t GetFieldOffset();
		mscorlib::System::Object* GetValueInternal(mscorlib::System::Object* obj);
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj);
		mscorlib::System::String* ToString();
		static void SetValueInternal(mscorlib::System::Reflection::FieldInfo* fi, mscorlib::System::Object* obj, mscorlib::System::Object* value);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* val, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Globalization::CultureInfo* culture);
		mscorlib::System::Object* GetRawConstantValue();
		mscorlib::System::Collections::Generic::IList_1<mscorlib::System::Reflection::CustomAttributeData>* GetCustomAttributesData();
		void CheckGeneric();
		void _ctor();
	};
}

