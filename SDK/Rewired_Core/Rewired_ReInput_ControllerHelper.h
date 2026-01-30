#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_ReInput.h"
namespace Rewired_Core::Rewired { struct ReInput; };
namespace Rewired_Core::Rewired { struct ReInput_ControllerHelper_PollingHelper; };
namespace Rewired_Core::Rewired { struct ReInput_ControllerHelper_ConflictCheckingHelper; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Rewired_ControllerType.h"
namespace Rewired_Core::Rewired { struct Controller; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
#include "Rewired_ControllerIdentifier.h"
namespace Rewired_Core::Rewired { struct ControllerIdentifier; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace Rewired_Core::Rewired { struct Mouse; };
namespace Rewired_Core::Rewired { struct Keyboard; };
namespace Rewired_Core::Rewired { struct Joystick; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace Rewired_Core::Rewired { struct CustomController; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace Rewired_Core::Rewired { struct ActiveControllerChangedDelegate; };

namespace Rewired_Core::Rewired
{
	struct ReInput_ControllerHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::Rewired::ReInput_ControllerHelper_PollingHelper* polling;
		Rewired_Core::Rewired::ReInput_ControllerHelper_ConflictCheckingHelper* conflictChecking;
		struct StaticFields
		{
			Rewired_Core::Rewired::ReInput_ControllerHelper* PxkTdIkXptwTeWPXwEumaEaSBxt;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static Rewired_Core::Rewired::ReInput_ControllerHelper* get_Instance();
		void _ctor();
		template <typename T> T* GetController(int32_t controllerId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetController", std::vector<std::string> { "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&controllerId;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		int32_t GetControllerCount(Rewired_Core::Rewired::ControllerType controllerType);
		int32_t get_controllerCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Controller>* get_Controllers();
		Rewired_Core::Rewired::Controller* GetController(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		Rewired_Core::Rewired::Controller* GetController(Rewired_Core::Rewired::ControllerIdentifier controllerIdentifier);
		IL2CPP::Array<Rewired_Core::Rewired::Controller*>* GetControllers(Rewired_Core::Rewired::ControllerType controllerType);
		IL2CPP::Array<mscorlib::System::String*>* GetControllerNames(Rewired_Core::Rewired::ControllerType controllerType);
		bool IsControllerAssigned(Rewired_Core::Rewired::ControllerType controllerType, Rewired_Core::Rewired::Controller* controller);
		bool IsControllerAssigned(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		bool IsControllerAssignedToPlayer(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t playerId);
		void RemoveControllerFromAllPlayers(Rewired_Core::Rewired::Controller* controller, bool includeSystemPlayer);
		void RemoveControllerFromAllPlayers(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, bool includeSystemPlayer);
		Rewired_Core::Rewired::Mouse* get_Mouse();
		Rewired_Core::Rewired::Keyboard* get_Keyboard();
		bool get_keyboardEnabled();
		void set_keyboardEnabled(bool value);
		int32_t get_joystickCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::Joystick>* get_Joysticks();
		Rewired_Core::Rewired::Joystick* GetJoystick(int32_t joystickId);
		IL2CPP::Array<Rewired_Core::Rewired::Joystick*>* GetJoysticks();
		IL2CPP::Array<mscorlib::System::String*>* GetJoystickNames();
		bool IsJoystickAssigned(Rewired_Core::Rewired::Joystick* joystick);
		bool IsJoystickAssigned(int32_t joystickId);
		bool IsJoystickAssignedToPlayer(int32_t joystickId, int32_t playerId);
		void RemoveJoystickFromAllPlayers(Rewired_Core::Rewired::Joystick* joystick, bool includeSystemPlayer);
		void RemoveJoystickFromAllPlayers(int32_t joystickId, bool includeSystemPlayer);
		int32_t GetUnityJoystickIdFromAnyButtonPress();
		int32_t GetUnityJoystickIdFromAnyButtonOrAxisPress(float axisThreshold, bool positiveAxesOnly);
		void SetUnityJoystickId(int32_t joystickId, int32_t unityJoystickId);
		bool SetUnityJoystickIdFromAnyButtonPress(int32_t joystickId);
		bool SetUnityJoystickIdFromAnyButtonOrAxisPress(int32_t joystickId, float axisThreshold, bool positiveAxesOnly);
		int32_t get_customControllerCount();
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::CustomController>* get_CustomControllers();
		Rewired_Core::Rewired::CustomController* GetCustomController(int32_t customControllerId);
		IL2CPP::Array<Rewired_Core::Rewired::CustomController*>* GetCustomControllers();
		IL2CPP::Array<mscorlib::System::String*>* GetCustomControllerNames();
		bool IsCustomControllerAssigned(Rewired_Core::Rewired::CustomController* customController);
		bool IsCustomControllerAssigned(int32_t customControllerId);
		bool IsCustomControllerAssignedToPlayer(int32_t customControllerId, int32_t playerId);
		void RemoveCustomControllerFromAllPlayers(Rewired_Core::Rewired::CustomController* customController, bool includeSystemPlayer);
		void RemoveCustomControllerFromAllPlayers(int32_t customControllerId, bool includeSystemPlayer);
		Rewired_Core::Rewired::CustomController* CreateCustomController(int32_t sourceControllerId);
		Rewired_Core::Rewired::CustomController* CreateCustomController(int32_t sourceControllerId, mscorlib::System::String* tag);
		bool DestroyCustomController(Rewired_Core::Rewired::CustomController* customController);
		Rewired_Core::Rewired::CustomController* GetFirstCustomControllerWithSourceId(int32_t sourceId);
		Rewired_Core::Rewired::CustomController* GetFirstCustomControllerWithTag(mscorlib::System::String* tag);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::CustomController>* CustomControllersWithSourceId(int32_t sourceId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::CustomController>* CustomControllersWithTag(mscorlib::System::String* tag);
		template <typename TInterface> mscorlib::System::Collections::Generic::IList_1<TInterface>* GetControllerTemplates()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetControllerTemplates");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = TInterface::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<TInterface>*)returnValue;
		}
		Rewired_Core::Rewired::Controller* GetLastActiveController();
		Rewired_Core::Rewired::Controller* GetLastActiveController(Rewired_Core::Rewired::ControllerType controllerType);
		template <typename T> T* GetLastActiveController()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLastActiveController");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Rewired_Core::Rewired::ControllerType GetLastActiveControllerType();
		void AddLastActiveControllerChangedDelegate(Rewired_Core::Rewired::ActiveControllerChangedDelegate* callback);
		void AddLastActiveControllerChangedDelegate(Rewired_Core::Rewired::ActiveControllerChangedDelegate* callback, Rewired_Core::Rewired::ControllerType controllerType);
		void RemoveLastActiveControllerChangedDelegate(Rewired_Core::Rewired::ActiveControllerChangedDelegate* callback);
		void RemoveLastActiveControllerChangedDelegate(Rewired_Core::Rewired::ActiveControllerChangedDelegate* callback, Rewired_Core::Rewired::ControllerType controllerType);
		void ClearLastActiveControllerChangedDelegates();
		bool GetAnyButton();
		bool GetAnyButton(Rewired_Core::Rewired::ControllerType controllerType);
		bool GetAnyButtonDown();
		bool GetAnyButtonDown(Rewired_Core::Rewired::ControllerType controllerType);
		bool GetAnyButtonUp();
		bool GetAnyButtonUp(Rewired_Core::Rewired::ControllerType controllerType);
		bool GetAnyButtonChanged();
		bool GetAnyButtonChanged(Rewired_Core::Rewired::ControllerType controllerType);
		bool GetAnyButtonPrev();
		bool GetAnyButtonPrev(Rewired_Core::Rewired::ControllerType controllerType);
		bool AutoAssignJoystick(Rewired_Core::Rewired::Joystick* joystick);
		void AutoAssignJoysticks();
	};
}

