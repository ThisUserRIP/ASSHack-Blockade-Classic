#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Action; };
#include "Rewired_UpdateLoopType.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };

namespace Rewired_Core::Rewired::Interfaces
{
	struct IInputSource
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void add_DeviceChangedEvent(mscorlib::System::Action* value);
		void remove_DeviceChangedEvent(mscorlib::System::Action* value);
		void SystemDeviceConnected();
		void SystemDeviceDisconnected();
		void Update();
		void UpdateDevices(Rewired_Core::Rewired::UpdateLoopType updateLoop);
		void UpdateFinished();
		template <typename TJoy> mscorlib::System::Collections::Generic::IList_1<TJoy>* GetJoysticks()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetJoysticks");
			const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<TJoy>*)returnValue;
		}
	};
}

