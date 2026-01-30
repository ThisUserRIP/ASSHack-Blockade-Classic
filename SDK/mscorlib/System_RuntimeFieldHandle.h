#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Reflection { struct FieldInfo; };
namespace mscorlib::System::Reflection { struct RtFieldInfo; };
namespace mscorlib::System { struct RuntimeType; };
#include "System_Reflection_FieldAttributes.h"

namespace mscorlib::System
{
	struct RuntimeFieldHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t value;
		void _ctor(intptr_t v);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		intptr_t get_Value();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool Equals(mscorlib::System::Object* obj);
		bool Equals(mscorlib::System::RuntimeFieldHandle handle);
		int32_t GetHashCode();
		static bool op_Equality(mscorlib::System::RuntimeFieldHandle left, mscorlib::System::RuntimeFieldHandle right);
		static void SetValueInternal(mscorlib::System::Reflection::FieldInfo* fi, mscorlib::System::Object* obj, mscorlib::System::Object* value);
		static void SetValue(mscorlib::System::Reflection::RtFieldInfo* field, mscorlib::System::Object* obj, mscorlib::System::Object* value, mscorlib::System::RuntimeType* fieldType, mscorlib::System::Reflection::FieldAttributes fieldAttr, mscorlib::System::RuntimeType* declaringType, bool& domainInitialized);
		static void SetValueDirect(mscorlib::System::Reflection::RtFieldInfo* field, mscorlib::System::RuntimeType* fieldType, void* pTypedRef, mscorlib::System::Object* value, mscorlib::System::RuntimeType* contextType);
	};
	bool operator==(mscorlib::System::RuntimeFieldHandle& left, mscorlib::System::RuntimeFieldHandle& right);
}

