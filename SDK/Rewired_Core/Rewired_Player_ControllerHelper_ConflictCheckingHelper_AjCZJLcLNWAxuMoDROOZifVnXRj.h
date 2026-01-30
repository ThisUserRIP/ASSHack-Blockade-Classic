#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Player_ControllerHelper_ConflictCheckingHelper.h"
namespace Rewired_Core::Rewired { struct Player_ControllerHelper_ConflictCheckingHelper; };
#include "Rewired_ElementAssignmentConflictInfo.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ElementAssignmentConflictCheck.h"
namespace Rewired_Core::Rewired { struct ElementAssignmentConflictCheck; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core { template <typename T> struct vhWAChkQtfbJbONWUAQVROGQdlbD; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace Rewired_Core::Rewired { struct InputMapCategory; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerator_1; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };

namespace Rewired_Core::Rewired
{
	template <typename T> struct Player_ControllerHelper_ConflictCheckingHelper_AjCZJLcLNWAxuMoDROOZifVnXRj : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 1;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(T::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Rewired_Core::Rewired::Player_ControllerHelper_ConflictCheckingHelper::GetIl2CppClass(), "AjCZJLcLNWAxuMoDROOZifVnXRj")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		Rewired_Core::Rewired::ElementAssignmentConflictInfo BLXOCZLUNCgPIURsBNVsBPlcDcw;
		int32_t VQDKxkXDrsgBgiFagWJRbTHVWMvQ;
		int32_t gsYcdgsVXKPCZInLZIsqDbJfYDK;
		Rewired_Core::Rewired::Player_ControllerHelper_ConflictCheckingHelper* NyfwhqBNXDPdOSLBNnpiEtscIKX;
		Rewired_Core::Rewired::ElementAssignmentConflictCheck PajoeCafETWKosgajZhDLrSXwQY;
		Rewired_Core::Rewired::ElementAssignmentConflictCheck ILqTJcynRugGjmQKngtLzyECLPC;
		bool NDxocnnrflICZFSWUtWTsvnZlPg;
		bool MRTCKGXDaXDKObmlBGfPGBKvnUNG;
		bool brjLDCEZJNKlFYnthIyKeXDBiY;
		bool UBNBnbjQQuWUKvUONVgCXEwYHbW;
		Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* jELAVoRkBctcIIpzkywKGLGvtsg;
		Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<T>* uXQeZpxkrapCXCURNlgLkByqbUj;
		Rewired_Core::Rewired::Player* cogRfYkiWSqiMTKvcmZFySFcdGI;
		Rewired_Core::Rewired::ControllerMap* HWAhjDjLQjzrOYdNzUObmFvuovf;
		Rewired_Core::Rewired::InputMapCategory* CrsBUBHRnKXfCFCDfioOYdtZZqtS;
		int32_t uPSeleFLUtWouPHWjzNPsEuiMZgJ;
		Rewired_Core::Rewired::ControllerMap* qDcqXwFpksVqQboRYQfVyvtQFoh;
		Rewired_Core::Rewired::ElementAssignmentConflictInfo njCfgEqdZeUYRXhSHRjNeeXpytN;
		Rewired_Core::Rewired::ElementAssignmentConflictInfo VABpWwfNDPSIVvEzXvcgvJlqzhc;
		mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* sgyDAdjKFcPQUJcCudonDKuycDkp;
		mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>* System_Collections_Generic_IEnumerable_Rewired_ElementAssignmentConflictInfo__GetEnumerator()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IEnumerable<Rewired.ElementAssignmentConflictInfo>.GetEnumerator");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerator_1<Rewired_Core::Rewired::ElementAssignmentConflictInfo>*)returnValue;
		}
		mscorlib::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerable.GetEnumerator");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::IEnumerator*)returnValue;
		}
		bool MoveNext()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MoveNext");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		Rewired_Core::Rewired::ElementAssignmentConflictInfo System_Collections_Generic_IEnumerator_Rewired_ElementAssignmentConflictInfo__get_Current()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.Generic.IEnumerator<Rewired.ElementAssignmentConflictInfo>.get_Current");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				Rewired_Core::Rewired::ElementAssignmentConflictInfo ret;
				std::memset(&ret, 0, sizeof(Rewired_Core::Rewired::ElementAssignmentConflictInfo));
				return ret;
			}
			return static_cast<Rewired_Core::Rewired::ElementAssignmentConflictInfo>(*(Rewired_Core::Rewired::ElementAssignmentConflictInfo*)il2cpp_object_unbox(returnValue));
		}
		void System_Collections_IEnumerator_Reset()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerator.Reset");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		void System_IDisposable_Dispose()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.IDisposable.Dispose");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "System.Collections.IEnumerator.get_Current");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Object*)returnValue;
		}
		void _ctor(int32_t __1__state)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&__1__state;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ktdGQmQwLWVpXINEHLWbFpeiAGS()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ktdGQmQwLWVpXINEHLWbFpeiAGS");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

