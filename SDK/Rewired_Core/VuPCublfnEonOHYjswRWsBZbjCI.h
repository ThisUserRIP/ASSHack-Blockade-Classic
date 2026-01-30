#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace Rewired_Core::Rewired { struct ControllerMap; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "Rewired_BoolOption.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };

namespace Rewired_Core
{
	struct VuPCublfnEonOHYjswRWsBZbjCI
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ControllerMap* get_Item(int32_t index);
		int32_t get_Count();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* get_Maps();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* IterateMapsInCategory_ControllerMap(int32_t A_1);
		template <typename T> mscorlib::System::Collections::Generic::IList_1<T>* GetMaps()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaps");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<T>*)returnValue;
		}
		void Add(Rewired_Core::Rewired::ControllerMap* A_1, Rewired_Core::Rewired::BoolOption A_2);
		void Remove(Rewired_Core::Rewired::ControllerMap* A_1);
		void Remove(int32_t A_1);
		void Remove(int32_t A_1, int32_t A_2);
		void RemoveById(int32_t A_1);
		int32_t IndexOf(int32_t A_1);
		int32_t IndexOf(int32_t A_1, int32_t A_2);
		bool Contains(int32_t A_1);
		bool Contains(int32_t A_1, int32_t A_2);
		void Clear(bool A_1);
		void Clear(int32_t A_1, bool A_2);
		void ClearByLayout(int32_t A_1, bool A_2);
		int32_t SetEnabledAll(bool A_1);
		int32_t SetEnabledByCategory(bool A_1, int32_t A_2);
		int32_t SetEnabledByCategory(bool A_1, int32_t A_2, int32_t A_3);
		bool ContainsMapInCategory(int32_t A_1);
		Rewired_Core::Rewired::ControllerMap* GetMap(int32_t A_1);
		Rewired_Core::Rewired::ControllerMap* GetMap(int32_t A_1, int32_t A_2);
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMap*>* GetMaps();
		Rewired_Core::Rewired::ControllerMap* GetMapByCategory(int32_t A_1);
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMap*>* GetMapsByCategory(int32_t A_1);
		int32_t GetMapsByCategory(int32_t A_1, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_2, bool A_3);
		template <typename T> int32_t GetMapsByCategory(int32_t A_1, mscorlib::System::Collections::Generic::List_1<T>* A_2, bool A_3)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsByCategory");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)A_2;
			params[2] = (intptr_t)&A_3;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
		int32_t GetMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_1, bool A_2);
		template <typename T> int32_t GetMaps(mscorlib::System::Collections::Generic::List_1<T>* A_1, bool A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaps");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)A_1;
			params[1] = (intptr_t)&A_2;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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

