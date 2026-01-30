#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Reflection_TypeAttributes.h"
namespace mscorlib::System::Reflection { struct RuntimeAssembly; };
namespace mscorlib::System::Reflection { struct RuntimeModule; };

namespace mscorlib::System
{
	struct RuntimeTypeHandle
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t value;
		void _ctor(intptr_t val);
		void _ctor(mscorlib::System::RuntimeType* type);
		void _ctor(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		intptr_t get_Value();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static mscorlib::System::Reflection::TypeAttributes GetAttributes(mscorlib::System::RuntimeType* type);
		static int32_t GetMetadataToken(mscorlib::System::RuntimeType* type);
		static int32_t GetToken(mscorlib::System::RuntimeType* type);
		static mscorlib::System::Type* GetGenericTypeDefinition_impl(mscorlib::System::RuntimeType* type);
		static mscorlib::System::Type* GetGenericTypeDefinition(mscorlib::System::RuntimeType* type);
		static bool HasElementType(mscorlib::System::RuntimeType* type);
		static bool HasInstantiation(mscorlib::System::RuntimeType* type);
		static bool IsArray(mscorlib::System::RuntimeType* type);
		static bool IsByRef(mscorlib::System::RuntimeType* type);
		static bool IsComObject(mscorlib::System::RuntimeType* type);
		static bool IsInstanceOfType(mscorlib::System::RuntimeType* type, mscorlib::System::Object* o);
		static bool IsPointer(mscorlib::System::RuntimeType* type);
		static bool IsPrimitive(mscorlib::System::RuntimeType* type);
		static bool HasReferences(mscorlib::System::RuntimeType* type);
		static bool IsComObject(mscorlib::System::RuntimeType* type, bool isGenericCOM);
		static bool IsContextful(mscorlib::System::RuntimeType* type);
		static bool IsEquivalentTo(mscorlib::System::RuntimeType* rtType1, mscorlib::System::RuntimeType* rtType2);
		static bool IsSzArray(mscorlib::System::RuntimeType* type);
		static bool IsInterface(mscorlib::System::RuntimeType* type);
		static int32_t GetArrayRank(mscorlib::System::RuntimeType* type);
		static mscorlib::System::Reflection::RuntimeAssembly* GetAssembly(mscorlib::System::RuntimeType* type);
		static mscorlib::System::RuntimeType* GetElementType(mscorlib::System::RuntimeType* type);
		static mscorlib::System::Reflection::RuntimeModule* GetModule(mscorlib::System::RuntimeType* type);
		static bool IsGenericVariable(mscorlib::System::RuntimeType* type);
		static mscorlib::System::RuntimeType* GetBaseType(mscorlib::System::RuntimeType* type);
		static bool CanCastTo(mscorlib::System::RuntimeType* type, mscorlib::System::RuntimeType* target);
		static bool type_is_assignable_from(mscorlib::System::Type* a, mscorlib::System::Type* b);
		static bool IsGenericTypeDefinition(mscorlib::System::RuntimeType* type);
		static intptr_t GetGenericParameterInfo(mscorlib::System::RuntimeType* type);
	};
}

