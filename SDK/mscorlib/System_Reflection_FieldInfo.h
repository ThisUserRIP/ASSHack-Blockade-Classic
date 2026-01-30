#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MemberInfo.h"
#include "System_Reflection_FieldAttributes.h"
#include "System_RuntimeFieldHandle.h"
namespace mscorlib::System { struct RuntimeFieldHandle; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
#include "System_Reflection_MemberTypes.h"
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "System_Reflection_BindingFlags.h"
namespace mscorlib::System::Reflection { struct Binder; };
namespace mscorlib::System::Globalization { struct CultureInfo; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_RuntimeTypeHandle.h"
namespace mscorlib::System { struct RuntimeTypeHandle; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_TypedReference.h"
namespace mscorlib::System { struct TypedReference; };
namespace mscorlib::System::Runtime::InteropServices { struct MarshalAsAttribute; };

namespace mscorlib::System::Reflection
{
	struct FieldInfo : mscorlib::System::Reflection::MemberInfo
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Reflection::FieldAttributes get_Attributes();
		mscorlib::System::RuntimeFieldHandle get_FieldHandle();
		void _ctor();
		mscorlib::System::Type* get_FieldType();
		mscorlib::System::Object* GetValue(mscorlib::System::Object* obj);
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		bool get_IsLiteral();
		bool get_IsStatic();
		bool get_IsPublic();
		bool get_IsNotSerialized();
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::Reflection::BindingFlags invokeAttr, mscorlib::System::Reflection::Binder* binder, mscorlib::System::Globalization::CultureInfo* culture);
		void SetValue(mscorlib::System::Object* obj, mscorlib::System::Object* value);
		static mscorlib::System::Reflection::FieldInfo* internal_from_handle_type(intptr_t field_handle, intptr_t type_handle);
		static mscorlib::System::Reflection::FieldInfo* GetFieldFromHandle(mscorlib::System::RuntimeFieldHandle handle);
		static mscorlib::System::Reflection::FieldInfo* GetFieldFromHandle(mscorlib::System::RuntimeFieldHandle handle, mscorlib::System::RuntimeTypeHandle declaringType);
		int32_t GetFieldOffset();
		void SetValueDirect(mscorlib::System::TypedReference obj, mscorlib::System::Object* value);
		mscorlib::System::Runtime::InteropServices::MarshalAsAttribute* get_marshal_info();
		IL2CPP::Array<mscorlib::System::Object*>* GetPseudoCustomAttributes();
		mscorlib::System::Object* GetRawConstantValue();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::Reflection::FieldInfo* left, mscorlib::System::Reflection::FieldInfo* right);
		static bool op_Inequality(mscorlib::System::Reflection::FieldInfo* left, mscorlib::System::Reflection::FieldInfo* right);
	};
	bool operator==(mscorlib::System::Reflection::FieldInfo& left, mscorlib::System::Reflection::FieldInfo& right);
	bool operator!=(mscorlib::System::Reflection::FieldInfo& left, mscorlib::System::Reflection::FieldInfo& right);
}

