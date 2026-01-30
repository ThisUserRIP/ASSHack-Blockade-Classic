#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct PlayerController_Element; };
namespace Rewired_Core::Rewired::Utils::Classes::Data { template <typename T> struct AList_1; };
namespace Rewired_Core::Rewired { struct PlayerController_Button; };
namespace Rewired_Core::Rewired { struct PlayerController_Axis; };
namespace mscorlib::System::Collections::ObjectModel { template <typename T> struct ReadOnlyCollection_1; };
#include "Rewired_PlayerController_Element_nSovRgKaFDBjLxMEexCWRDaQUBc.h"
namespace Rewired_Core::Rewired { struct PlayerController_Element_nSovRgKaFDBjLxMEexCWRDaQUBc; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace mscorlib::System { template <typename T> struct Action_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct PlayerController_Definition; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace Rewired_Core::Rewired { struct Player; };
#include "Rewired_UpdateLoopType.h"
namespace mscorlib::System { template <typename T> struct Predicate_1; };

namespace Rewired_Core::Rewired
{
	struct PlayerController : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		bool eEGiIPEupbQLDWwJrozxiWefseDw;
		int32_t LvBsMepMzQujePFYUrpFdNOUHkai;
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::PlayerController_Element>* limitbLPQHBEREoTlrBWoQCATCG;
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::PlayerController_Button>* KSpzNAgatRNMZeWMcWyvXBJKZgz;
		Rewired_Core::Rewired::Utils::Classes::Data::AList_1<Rewired_Core::Rewired::PlayerController_Axis>* ihkxSfgDmybPfRXedbSqLVdkipy;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::PlayerController_Element>* BVfiWcyjQaipjiuPedRfeAYWjXl;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::PlayerController_Button>* fibvTDkZrbQCSDhpbyCeVZyhxVJ;
		mscorlib::System::Collections::ObjectModel::ReadOnlyCollection_1<Rewired_Core::Rewired::PlayerController_Axis>* yIJzJFmHtQOpyhkBywciSNuhZfp;
		mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Element_nSovRgKaFDBjLxMEexCWRDaQUBc>* JpzgxQrSQVYrCcdmeHNZBBKEZcUp;
		mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Boolean>* zspohVUieAGJzwLQIshQMCsWIYd;
		mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Single>* YrwuzkvmRMGOeyRmPOoTiFoBsKU;
		mscorlib::System::Action_1<mscorlib::System::Boolean>* cdlYJRuHCDMOFyGAdzsbylqVyav;
		void _ctor(Rewired_Core::Rewired::PlayerController_Definition* definition);
		void Finalize();
		bool get_enabled();
		void set_enabled(bool value);
		int32_t get_playerId();
		void set_playerId(int32_t value);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::PlayerController_Button>* get_buttons();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::PlayerController_Axis>* get_axes();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::PlayerController_Element>* get_elements();
		int32_t get_buttonCount();
		int32_t get_axisCount();
		int32_t get_elementCount();
		void add_ButtonStateChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Boolean>* value);
		void remove_ButtonStateChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Boolean>* value);
		void add_AxisValueChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Single>* value);
		void remove_AxisValueChangedEvent(mscorlib::System::Action_2<mscorlib::System::Int32, mscorlib::System::Single>* value);
		void add_EnabledStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		void remove_EnabledStateChangedEvent(mscorlib::System::Action_1<mscorlib::System::Boolean>* value);
		bool GetButton(int32_t index);
		bool GetButtonDown(int32_t index);
		bool GetButtonUp(int32_t index);
		float GetAxis(int32_t index);
		float GetAxisRaw(int32_t index);
		Rewired_Core::Rewired::PlayerController_Element* GetElement(int32_t index);
		template <typename T> T* GetElement(int32_t index)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetElement", std::vector<std::string> { "System.Int32" });
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&index;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Rewired_Core::Rewired::Player* get_player();
		void LXLYGqZkvcchyPQbGehtfpCiJzuK(Rewired_Core::Rewired::UpdateLoopType A_1);
		bool Update(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void UpdateFinished();
		void ClearVars();
		void PpjIXoIAPvXitJiZFfGrcxhBUoyV(Rewired_Core::Rewired::PlayerController_Element* A_1);
		void PpjIXoIAPvXitJiZFfGrcxhBUoyV(Rewired_Core::Rewired::PlayerController_Element* A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Element>* A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Element>* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Button>* A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::PlayerController_Axis>* A_5);
		template <typename T> static int32_t TTJMwXsUtoJFlBzepkqnLmNqFkI(mscorlib::System::Collections::Generic::IList_1<T>* A_0, mscorlib::System::Predicate_1<T>* A_1, int32_t A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TTJMwXsUtoJFlBzepkqnLmNqFkI");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)A_0;
			params[1] = (intptr_t)A_1;
			params[2] = (intptr_t)&A_2;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				int32_t ret;
				std::memset(&ret, 0, sizeof(int32_t));
				return ret;
			}
			return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
		}
	};
}

