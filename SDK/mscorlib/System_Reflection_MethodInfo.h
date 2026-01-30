#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "System_Reflection_MethodBase.h"
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Reflection_MemberTypes.h"

namespace mscorlib::System::Reflection
{
	struct MethodInfo : mscorlib::System::Reflection::MethodBase
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static bool op_Equality(mscorlib::System::Reflection::MethodInfo* left, mscorlib::System::Reflection::MethodInfo* right);
		static bool op_Inequality(mscorlib::System::Reflection::MethodInfo* left, mscorlib::System::Reflection::MethodInfo* right);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		mscorlib::System::Reflection::MemberTypes get_MemberType();
		mscorlib::System::Type* get_ReturnType();
		IL2CPP::Array<mscorlib::System::Type*>* GetGenericArguments();
		mscorlib::System::Reflection::MethodInfo* GetGenericMethodDefinition();
		mscorlib::System::Reflection::MethodInfo* MakeGenericMethod(IL2CPP::Array<mscorlib::System::Type*>* typeArguments);
		mscorlib::System::Reflection::MethodInfo* GetBaseMethod();
	};
	bool operator==(mscorlib::System::Reflection::MethodInfo& left, mscorlib::System::Reflection::MethodInfo& right);
	bool operator!=(mscorlib::System::Reflection::MethodInfo& left, mscorlib::System::Reflection::MethodInfo& right);
}

