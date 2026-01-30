#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Utils_SafeDelegate_1.h"
namespace Rewired_Core::Rewired::Utils { template <typename T> struct SafeDelegate_1; };
namespace mscorlib::System { struct Object; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired::Utils { template <typename T> struct SafeDelegate_1_PPnOJYjlmBDkPfaCVnVOtBfIsgb; };

namespace Rewired_Core::Rewired::Utils
{
	template <typename T> struct SafeDelegate_1_PPnOJYjlmBDkPfaCVnVOtBfIsgb : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Rewired_Core::Rewired::Utils::SafeDelegate_1<T>::GetIl2CppClass(), "PPnOJYjlmBDkPfaCVnVOtBfIsgb")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		T gRujaznfmMAKcZIlSQEmtksdosS;
		mscorlib::System::Object* WzOxoriEmhWTekHkNjzWpAiwMXi;
		mscorlib::System::Object* MhuPUEMDLTFBnAsJoJrgrjIYEgQO;
		bool ZIwoHGmMaUQrDbqIBfTgpqPUwhd;
		void _ctor(T* item)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { GetGenericTypeName<T>() });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)item;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor(Rewired_Core::Rewired::Utils::SafeDelegate_1_PPnOJYjlmBDkPfaCVnVOtBfIsgb<T>* source)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Utils.SafeDelegate`1/PPnOJYjlmBDkPfaCVnVOtBfIsgb<T>" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)source;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		bool LdfuTgalrdAAwmigDaoBETrmTjZS()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LdfuTgalrdAAwmigDaoBETrmTjZS");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
	};
}

