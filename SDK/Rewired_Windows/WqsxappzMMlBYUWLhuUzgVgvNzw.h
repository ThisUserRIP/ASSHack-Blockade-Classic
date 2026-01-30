#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UFszbrouPHhjAZsfhrYqirKsuPI.h"
namespace Rewired_Windows { struct QUYPIifcuLAPLIvfNJxrbnKJViEu; };
namespace mscorlib::System { struct String; };
namespace Rewired_Windows { struct QtwxMtQpjmqWDvhmwUtaOWEpPwn; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput { struct DirectInput; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };

namespace Rewired_Windows
{
	template <typename T, typename TRaw, typename TUpdate> struct WqsxappzMMlBYUWLhuUzgVgvNzw : Rewired_Windows::UFszbrouPHhjAZsfhrYqirKsuPI
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 3;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TRaw::GetIl2CppClass()));
			arrayType->vector[2] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TUpdate::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIL2CppClass("Rewired_Windows.dll", "", "WqsxappzMMlBYUWLhuUzgVgvNzw")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		Rewired_Windows::QUYPIifcuLAPLIvfNJxrbnKJViEu* daEZGgqEaauNkkEmDzVRAPuNQYR;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, Rewired_Windows::QtwxMtQpjmqWDvhmwUtaOWEpPwn>* hmOXMBLUXLzkHguKLaGMMbRqWyK;
		struct StaticFields
		{
			IL2CPP::Array<TUpdate>* qlcjrekEZNmGEkRBCXAakRAIOuZ;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor(Rewired_Windows::Rewired::Libraries::SharpDX::DirectInput::DirectInput* directInput, mscorlib::System::Guid deviceGuid)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "Rewired.Libraries.SharpDX.DirectInput.DirectInput", "System.Guid" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)directInput;
			params[1] = (intptr_t)&deviceGuid;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void wledkvZZXHJZCGibcvpXSJqvROK(T* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "wledkvZZXHJZCGibcvpXSJqvROK");
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		T* jIAgKjaWkiECIkbCSUYgZKnJbAf()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jIAgKjaWkiECIkbCSUYgZKnJbAf");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		void jIAgKjaWkiECIkbCSUYgZKnJbAf(T& A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "jIAgKjaWkiECIkbCSUYgZKnJbAf");
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		Rewired_Windows::QUYPIifcuLAPLIvfNJxrbnKJViEu* KAlkexAQFvcWMncpLkUSoHnJuUp()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "KAlkexAQFvcWMncpLkUSoHnJuUp");
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Windows::QUYPIifcuLAPLIvfNJxrbnKJViEu*)returnValue;
		}
		static void _cctor()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

