#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Player_ControllerHelper_XHBWhjAIALWaYcfRSvzZLuARvNK.h"
namespace Rewired_Core::Rewired { template <typename TController, typename TMap> struct Player_ControllerHelper_XHBWhjAIALWaYcfRSvzZLuARvNK; };
namespace Rewired_Core { template <typename T> struct vhWAChkQtfbJbONWUAQVROGQdlbD; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core { struct VuPCublfnEonOHYjswRWsBZbjCI; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired
{
	template <typename TController, typename TMap> struct Player_ControllerHelper_XHBWhjAIALWaYcfRSvzZLuARvNK_YGBkGFuLpTsyqrkYuBEpxAlpgcdH : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass()
		{
			IL2CPP::Array<mscorlib::System::Type*>* arrayType = new IL2CPP::Array<mscorlib::System::Type*>();
			arrayType->max_length = 2;
			arrayType->vector[0] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TController::GetIl2CppClass()));
			arrayType->vector[1] = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(TMap::GetIl2CppClass()));
			intptr_t handle = ((intptr_t)il2cpp_class_get_type(GetIl2CppNestedType(Rewired_Core::Rewired::Player_ControllerHelper_XHBWhjAIALWaYcfRSvzZLuARvNK<TController, TMap>::GetIl2CppClass(), "YGBkGFuLpTsyqrkYuBEpxAlpgcdH")));
			const IL2CPP::Il2CppType* Il2CppType = (const IL2CPP::Il2CppType*)(mscorlib::System::Type::internal_from_handle(handle)->MakeGenericType(arrayType)->get_TypeHandle().value);
			IL2CPP::Il2CppClass* il2cppclass = il2cpp_class_from_type(Il2CppType);
			return il2cppclass;
		}
		static mscorlib::System::Type* GetIl2CppType()
		{
			static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
			return il2cpptype;
		}
		TController OCljOHdKkRpLcEpEKEFeASEafaMy;
		Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<TMap>* ADJKAOBKjrLyvyDZIqhWgKAakxu;
		double zVGZtOTSkNwsFZXhYRukBBSBUpP;
		Rewired_Core::Rewired::Controller* Rewired_Player_ControllerHelper_IControllerSetEntry_get_controller()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Player.ControllerHelper.IControllerSetEntry.get_controller");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Controller*)returnValue;
		}
		Rewired_Core::VuPCublfnEonOHYjswRWsBZbjCI* Rewired_Player_ControllerHelper_IControllerSetEntry_get_mapSet()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Player.ControllerHelper.IControllerSetEntry.get_mapSet");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::VuPCublfnEonOHYjswRWsBZbjCI*)returnValue;
		}
		double Rewired_Player_ControllerHelper_IControllerSetEntry_get_lastActiveTime()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Rewired.Player.ControllerHelper.IControllerSetEntry.get_lastActiveTime");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				double ret;
				std::memset(&ret, 0, sizeof(double));
				return ret;
			}
			return static_cast<double>(*(double*)il2cpp_object_unbox(returnValue));
		}
		void _ctor(TController* controller, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<TMap>* mapSet)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { GetGenericTypeName<TController>(), "vhWAChkQtfbJbONWUAQVROGQdlbD<TMap>" });
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)controller;
			params[1] = (intptr_t)mapSet;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void eTqKIbwYQdbUNVDcxhaFjFmShZay()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "eTqKIbwYQdbUNVDcxhaFjFmShZay");
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

