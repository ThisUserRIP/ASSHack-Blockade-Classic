#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_JoystickType.h"
namespace Rewired_Core::Rewired { struct ControllerElementIdentifier; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_CompoundElement; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_DirectInput; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_RawInput; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_XInput; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_OSX; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Linux; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_WindowsUWP; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Fallback; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_PS5; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_WebGL; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Ouya; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_XboxOne; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_GameCore; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_PS4; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_NintendoSwitch; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Stadia; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_InternalDriver; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_SDL2; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Guid.h"
namespace mscorlib::System { struct Guid; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
#include "Rewired_ControllerElementType.h"
#include "Rewired_HardwareControllerMapIdentifier.h"
namespace Rewired_Core::Rewired { struct HardwareControllerMapIdentifier; };
#include "Rewired_AxisRange.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform; };
namespace Rewired_Core::Rewired { struct BridgedControllerHWInfo; };
#include "Rewired_InputPlatform.h"
namespace Rewired_Core::Rewired { struct HardwareJoystickMap_InputManager; };
namespace Rewired_Core::Rewired::Interfaces { struct IControllerElementIdentifierCommon_Internal; };
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_Fallback_Base; };
#include "Rewired_InputSource.h"
namespace Rewired_Core::Rewired::Data::Mapping { struct HardwareJoystickMap_Platform_SDL2_Base; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Rewired_Core::Rewired::Data::Mapping
{
	struct HardwareJoystickMap : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* controllerName;
		mscorlib::System::String* editorControllerName;
		mscorlib::System::String* description;
		mscorlib::System::String* controllerGuid;
		IL2CPP::Array<mscorlib::System::String*>* templateGuids;
		bool hideInLists;
		IL2CPP::Array<Rewired_Core::Rewired::JoystickType>* joystickTypes;
		IL2CPP::Array<Rewired_Core::Rewired::ControllerElementIdentifier*>* elementIdentifiers;
		IL2CPP::Array<Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_CompoundElement*>* compoundElements;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_DirectInput* directInput;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_RawInput* rawInput;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_XInput* xInput;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_OSX* osx;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Linux* linux;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_WindowsUWP* windowsUWP;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_Windows;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_WindowsUWP;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_OSX;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_Linux;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_Linux_PreConfigured;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_Android;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_iOS;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_Blackberry;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_WindowsPhone8;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_XBox360;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_XBoxOne;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_PS3;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_PS4;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_PS5* ps5;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_PSM;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_PSVita;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_Wii;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_WiiU;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_AmazonFireTV;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback* fallback_RazerForgeTV;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_WebGL* webGL;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Ouya* ouya;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_XboxOne* xboxOne;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_GameCore* gameCore;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_PS4* ps4;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_NintendoSwitch* nintendoSwitch;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Stadia* stadia;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_InternalDriver* internalDriver;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2* sdl2_Linux;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2* sdl2_Windows;
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2* sdl2_OSX;
		int32_t elementIdentifierIdCounter;
		void _ctor();
		void _ctor(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* source);
		mscorlib::System::String* get_ControllerName();
		mscorlib::System::String* get_EditorControllerName();
		mscorlib::System::Guid get_Guid();
		mscorlib::System::Collections::Generic::IEnumerable_1<mscorlib::System::Guid>* get_TemplateGuids();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerElementIdentifier>* get_ElementIdentifiers();
		int32_t get_elementIdentifierCount();
		bool get_HideInLists();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::JoystickType>* get_JoystickTypes();
		IL2CPP::Array<mscorlib::System::String*>* GetElementIdentifierNames();
		IL2CPP::Array<int32_t>* GetElementIdentifierIds();
		Rewired_Core::Rewired::ControllerElementIdentifier* GetElementIdentifier(int32_t id);
		bool ContainsElementIdentifier(int32_t id);
		int32_t GetElementIdentifierInfo(Rewired_Core::Rewired::ControllerElementType type, IL2CPP::Array<mscorlib::System::String*>& names, IL2CPP::Array<int32_t>& ids);
		int32_t GetMappableElementIdentifierInfo(IL2CPP::Array<mscorlib::System::String*>& names, IL2CPP::Array<int32_t>& ids);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap* Clone();
		int32_t IndexOfElementIdentifier(int32_t id);
		Rewired_Core::Rewired::ControllerElementType GetEffectiveElementIdentifierType(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, int32_t elementIdentifierId, bool isDefaultMap);
		bool GetEffectiveAxisRange(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, int32_t elementIdentifierId, bool isDefaultMap, Rewired_Core::Rewired::AxisRange& axisRange);
		void GetElementIdentifiersForControllerElements(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier, bool isDefaultMap, IL2CPP::Array<int32_t>& buttons, IL2CPP::Array<int32_t>& axes);
		static bool Matches(Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* platform, Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, int32_t& variantIndex, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& platformMap);
		bool Matches(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex, Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform& platformMap);
		Rewired_Core::Rewired::HardwareJoystickMap_InputManager* GetDefaultHardwareJoystickMap_InputManager(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedController);
		IL2CPP::Array<mscorlib::System::String*>* GetTemplateGuidsOrig();
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal>* Rewired_Data_Mapping_IHardwareControllerMap_Internal_get_ElementIdentifiers();
		Rewired_Core::Rewired::Interfaces::IControllerElementIdentifierCommon_Internal* Rewired_Data_Mapping_IHardwareControllerMap_Internal_GetElementIdentifier(int32_t id);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base* FindFallbackMatch(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_Fallback_Base* FindFallbackMap(Rewired_Core::Rewired::InputSource inputSource, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2_Base* FindSDL2Match(Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform_SDL2_Base* FindSDL2Map(Rewired_Core::Rewired::InputSource inputSource, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex);
		template <typename T> T* TryGetFirstValidMap(T* mainMap, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetFirstValidMap", std::vector<std::string> { GetGenericTypeName<T>(), "System.Boolean", "Rewired.InputPlatform&", "System.Int32&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)mainMap;
			params[1] = (intptr_t)&isDefaultMap;
			params[2] = (intptr_t)&actualInputPlatform;
			params[3] = (intptr_t)&variantIndex;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* TryGetFirstMatchingMap(T* mainMap, Rewired_Core::Rewired::BridgedControllerHWInfo* bridgedControllerHWInfo, bool strictMatch, bool isDefaultMap, Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TryGetFirstMatchingMap", std::vector<std::string> { GetGenericTypeName<T>(), "Rewired.BridgedControllerHWInfo", "System.Boolean", "System.Boolean", "Rewired.InputPlatform&", "System.Int32&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[6];
			params[0] = (intptr_t)mainMap;
			params[1] = (intptr_t)bridgedControllerHWInfo;
			params[2] = (intptr_t)&strictMatch;
			params[3] = (intptr_t)&isDefaultMap;
			params[4] = (intptr_t)&actualInputPlatform;
			params[5] = (intptr_t)&variantIndex;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* GetUniversalDefaultMap(Rewired_Core::Rewired::InputPlatform& actualInputPlatform, int32_t& variantIndex)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUniversalDefaultMap", std::vector<std::string> { "Rewired.InputPlatform&", "System.Int32&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&actualInputPlatform;
			params[1] = (intptr_t)&variantIndex;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* GetUniversalDefaultMapRoot(mscorlib::System::Type* type, Rewired_Core::Rewired::InputPlatform& actualInputPlatform)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUniversalDefaultMapRoot", std::vector<std::string> { "System.Type", "Rewired.InputPlatform&" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)type;
			params[1] = (intptr_t)&actualInputPlatform;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* GetSpecificPlatformMap(Rewired_Core::Rewired::HardwareControllerMapIdentifier hardwareMapIdentifier);
		Rewired_Core::Rewired::Data::Mapping::HardwareJoystickMap_Platform* GetSpecificPlatformRoot(Rewired_Core::Rewired::InputPlatform exactInputPlatform);
	};
}

