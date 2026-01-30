#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Reflection { struct MethodInfo; };
namespace mscorlib::System { struct DelegateData; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct String; };
#include "System_Reflection_BindingFlags.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Runtime::Serialization { struct SerializationInfo; };
#include "System_Runtime_Serialization_StreamingContext.h"
namespace mscorlib::System::Runtime::Serialization { struct StreamingContext; };
namespace mscorlib::System { struct Delegate; };
namespace mscorlib::System { struct RuntimeType; };
namespace mscorlib::System { struct MulticastDelegate; };

namespace mscorlib::System
{
	struct Delegate : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t method_ptr;
		intptr_t invoke_impl;
		mscorlib::System::Object* m_target;
		intptr_t method;
		intptr_t delegate_trampoline;
		intptr_t extra_arg;
		intptr_t method_code;
		mscorlib::System::Reflection::MethodInfo* method_info;
		mscorlib::System::Reflection::MethodInfo* original_method_info;
		mscorlib::System::DelegateData* data;
		bool method_is_virtual;
		mscorlib::System::Reflection::MethodInfo* get_Method();
		mscorlib::System::Reflection::MethodInfo* GetVirtualMethod_internal();
		mscorlib::System::Object* get_Target();
		static mscorlib::System::Delegate* CreateDelegate_internal(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::Reflection::MethodInfo* info, bool throwOnBindFailure);
		static bool arg_type_match(mscorlib::System::Type* delArgType, mscorlib::System::Type* argType);
		static bool arg_type_match_this(mscorlib::System::Type* delArgType, mscorlib::System::Type* argType, bool boxedThis);
		static bool return_type_match(mscorlib::System::Type* delReturnType, mscorlib::System::Type* returnType);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method, bool throwOnBindFailure);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method, bool throwOnBindFailure, bool allowClosed);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Reflection::MethodInfo* method, bool throwOnBindFailure);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Reflection::MethodInfo* method);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::String* method);
		static mscorlib::System::Reflection::MethodInfo* GetCandidateMethod(mscorlib::System::Type* type, mscorlib::System::Type* target, mscorlib::System::String* method, mscorlib::System::Reflection::BindingFlags bflags, bool ignoreCase, bool throwOnBindFailure);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Type* target, mscorlib::System::String* method, bool ignoreCase, bool throwOnBindFailure);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Type* target, mscorlib::System::String* method);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::String* method, bool ignoreCase, bool throwOnBindFailure);
		static mscorlib::System::Delegate* CreateDelegate(mscorlib::System::Type* type, mscorlib::System::Object* target, mscorlib::System::String* method, bool ignoreCase);
		mscorlib::System::Object* Clone();
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::Reflection::MethodInfo* GetMethodImpl();
		void GetObjectData(mscorlib::System::Runtime::Serialization::SerializationInfo* info, mscorlib::System::Runtime::Serialization::StreamingContext context);
		IL2CPP::Array<mscorlib::System::Delegate*>* GetInvocationList();
		static mscorlib::System::Delegate* Combine(mscorlib::System::Delegate* a, mscorlib::System::Delegate* b);
		static mscorlib::System::Delegate* Combine(IL2CPP::Array<mscorlib::System::Delegate*>* delegates);
		mscorlib::System::Delegate* CombineImpl(mscorlib::System::Delegate* d);
		static mscorlib::System::Delegate* Remove(mscorlib::System::Delegate* source, mscorlib::System::Delegate* value);
		mscorlib::System::Delegate* RemoveImpl(mscorlib::System::Delegate* d);
		static mscorlib::System::Delegate* RemoveAll(mscorlib::System::Delegate* source, mscorlib::System::Delegate* value);
		static bool op_Equality(mscorlib::System::Delegate* d1, mscorlib::System::Delegate* d2);
		static bool op_Inequality(mscorlib::System::Delegate* d1, mscorlib::System::Delegate* d2);
		static mscorlib::System::Delegate* CreateDelegateNoSecurityCheck(mscorlib::System::RuntimeType* type, mscorlib::System::Object* firstArgument, mscorlib::System::Reflection::MethodInfo* method);
		static mscorlib::System::MulticastDelegate* AllocDelegateLike_internal(mscorlib::System::Delegate* d);
	};
	bool operator==(mscorlib::System::Delegate& d1, mscorlib::System::Delegate& d2);
	bool operator!=(mscorlib::System::Delegate& d1, mscorlib::System::Delegate& d2);
}

