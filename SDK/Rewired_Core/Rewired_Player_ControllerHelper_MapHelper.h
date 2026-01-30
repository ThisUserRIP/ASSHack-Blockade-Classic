#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Rewired_Utils_Classes_CodeHelper.h"
#include "Rewired_Player_ControllerHelper.h"
namespace Rewired_Core::Rewired { struct Player_ControllerHelper; };
namespace Rewired_Core { struct mUbbinbjQOMNIAzUbOrfgDmjOhKR; };
namespace Rewired_Core::Rewired { struct Player; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Rewired_Core::Rewired { struct ControllerMapLayoutManager_StartingSettings; };
namespace Rewired_Core::Rewired { struct ControllerMapEnabler_wHqkuIoGNdizXgXEUBaCAAvdFEds; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System { struct String; };
#include "Rewired_ControllerType.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "Rewired_BoolOption.h"
namespace Rewired_Core::Rewired { struct ControllerMap; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IEnumerable_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct IList_1; };
namespace Rewired_Core::Rewired { struct Controller; };
namespace Rewired_Core::Rewired { struct ActionElementMap; };
#include "Rewired_ControllerElementTarget.h"
namespace Rewired_Core::Rewired { struct ControllerElementTarget; };
namespace Rewired_Core::Rewired { struct IControllerElementTarget; };
namespace Rewired_Core::Rewired { struct ControllerMapSaveData; };
namespace Rewired_Core::Rewired { struct InputMapCategory; };
namespace Rewired_Core::Rewired { struct InputBehavior; };
namespace Rewired_Core::Rewired { struct Player_ControllerHelper_TZoNXevHUTdPPGNpVPmigLKtHbF; };
namespace Rewired_Core::Rewired { struct JoystickMap; };
namespace Rewired_Core { template <typename T> struct vhWAChkQtfbJbONWUAQVROGQdlbD; };
namespace Rewired_Core::Rewired { struct Joystick; };
namespace Rewired_Core { struct ubZlOyeOreOlVqBmvjKDEenhiPaM; };
namespace Rewired_Core::Rewired { struct CustomControllerMap; };
namespace Rewired_Core::Rewired { struct CustomController; };

namespace Rewired_Core::Rewired
{
	struct Player_ControllerHelper_MapHelper : Rewired_Core::Rewired::Utils::Classes::CodeHelper
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Rewired_Core::mUbbinbjQOMNIAzUbOrfgDmjOhKR* XiyyfUJTKujIvoaCXLNkTjUGKco;
		Rewired_Core::Rewired::Player* HhyEsCLrtcDWZIsHkrLgznfvXFy;
		Rewired_Core::Rewired::Player_ControllerHelper* twIWFTWbDLyQHeCkvFyegiKwlQTa;
		Rewired_Core::Rewired::ControllerMapEnabler* HfrbltcfvyFSgaBSpWCHQSWHBxfe;
		Rewired_Core::Rewired::ControllerMapLayoutManager* zmqzzeJIpPuBMefJuzLmaPZlnWw;
		int32_t CegCZCxKXWIRHZSULEYHhSHkAZS;
		void _ctor(Rewired_Core::Rewired::Player* player, Rewired_Core::Rewired::Player_ControllerHelper* parent, Rewired_Core::mUbbinbjQOMNIAzUbOrfgDmjOhKR* startingControllerMapInfo, Rewired_Core::Rewired::ControllerMapLayoutManager_StartingSettings* controllerMapLayoutManagerSettings, Rewired_Core::Rewired::ControllerMapEnabler_wHqkuIoGNdizXgXEUBaCAAvdFEds* controllerMapEnablerSettings);
		Rewired_Core::Rewired::ControllerMapLayoutManager* get_layoutManager();
		Rewired_Core::Rewired::ControllerMapEnabler* get_mapEnabler();
		template <typename T> void LoadMap(int32_t controllerId, int32_t categoryId, int32_t layoutId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			params[2] = (intptr_t)&layoutId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void LoadMap(int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			params[2] = (intptr_t)layoutName;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId);
		void LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		template <typename T> void LoadMap(int32_t controllerId, int32_t categoryId, int32_t layoutId, bool startEnabled)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			params[2] = (intptr_t)&layoutId;
			params[3] = (intptr_t)&startEnabled;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void LoadMap(int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName, bool startEnabled)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadMap", std::vector<std::string> { "System.Int32", "System.String", "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			params[2] = (intptr_t)layoutName;
			params[3] = (intptr_t)&startEnabled;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId, bool startEnabled);
		void LoadMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName, bool startEnabled);
		template <typename T> void IKrWTsyIupuadXOTRfKZsAuDblA(int32_t A_1, int32_t A_2, int32_t A_3, Rewired_Core::Rewired::BoolOption A_4)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IKrWTsyIupuadXOTRfKZsAuDblA");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			params[2] = (intptr_t)&A_3;
			params[3] = (intptr_t)&A_4;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void IKrWTsyIupuadXOTRfKZsAuDblA(int32_t A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3, Rewired_Core::Rewired::BoolOption A_4)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IKrWTsyIupuadXOTRfKZsAuDblA");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[4];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)A_2;
			params[2] = (intptr_t)A_3;
			params[3] = (intptr_t)&A_4;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void IKrWTsyIupuadXOTRfKZsAuDblA(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4, Rewired_Core::Rewired::BoolOption A_5);
		void IKrWTsyIupuadXOTRfKZsAuDblA(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4, Rewired_Core::Rewired::BoolOption A_5);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetAllMaps();
		int32_t GetAllMaps(mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<T>* GetAllMaps()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMaps");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<T>*)returnValue;
		}
		template <typename T> int32_t GetAllMaps(mscorlib::System::Collections::Generic::List_1<T>* results)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMaps", std::vector<std::string> { "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)results;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetAllMaps(Rewired_Core::Rewired::ControllerType controllerType);
		int32_t GetAllMaps(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetAllMapsInCategory(mscorlib::System::String* categoryName);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetAllMapsInCategory(int32_t categoryId);
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<T>* GetAllMapsInCategory(mscorlib::System::String* categoryName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)categoryName;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<T>*)returnValue;
		}
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<T>* GetAllMapsInCategory(int32_t categoryId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&categoryId;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<T>*)returnValue;
		}
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetAllMapsInCategory(mscorlib::System::String* categoryName, Rewired_Core::Rewired::ControllerType controllerType);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetAllMapsInCategory(int32_t categoryId, Rewired_Core::Rewired::ControllerType controllerType);
		int32_t GetAllMapsInCategory(mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		int32_t GetAllMapsInCategory(int32_t categoryId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		template <typename T> int32_t GetAllMapsInCategory(mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<T>* results)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.String", "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)categoryName;
			params[1] = (intptr_t)results;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> int32_t GetAllMapsInCategory(int32_t categoryId, mscorlib::System::Collections::Generic::List_1<T>* results)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapsInCategory", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&categoryId;
			params[1] = (intptr_t)results;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		int32_t GetAllMapsInCategory(mscorlib::System::String* categoryName, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		int32_t GetAllMapsInCategory(int32_t categoryId, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		template <typename T> mscorlib::System::Collections::Generic::IList_1<T>* GetMaps(int32_t controllerId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMaps", std::vector<std::string> { "System.Int32" });
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
			return (mscorlib::System::Collections::Generic::IList_1<T>*)returnValue;
		}
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* GetMaps(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* GetMaps(Rewired_Core::Rewired::Controller* controller);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, int32_t categoryId);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName);
		int32_t GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		int32_t GetMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		int32_t GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, int32_t categoryId, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		int32_t GetMapsInCategory(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* results);
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<T>* GetMapsInCategory(int32_t controllerId, int32_t categoryId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<T>*)returnValue;
		}
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<T>* GetMapsInCategory(int32_t controllerId, mscorlib::System::String* categoryName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "System.Int32", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<T>*)returnValue;
		}
		template <typename T> int32_t GetMapsInCategory(int32_t controllerId, int32_t categoryId, mscorlib::System::Collections::Generic::List_1<T>* results)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "System.Int32", "System.Int32", "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			params[2] = (intptr_t)results;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> int32_t GetMapsInCategory(int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::Collections::Generic::List_1<T>* results)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapsInCategory", std::vector<std::string> { "System.Int32", "System.String", "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			params[2] = (intptr_t)results;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		template <typename T> T* GetMap(int32_t controllerId, int32_t mapId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&mapId;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* GetMap(int32_t controllerId, int32_t categoryId, int32_t layoutId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			params[2] = (intptr_t)&layoutId;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* GetMap(int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMap", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			params[2] = (intptr_t)layoutName;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Rewired_Core::Rewired::ControllerMap* GetMap(int32_t mapId);
		Rewired_Core::Rewired::ControllerMap* GetMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t mapId);
		Rewired_Core::Rewired::ControllerMap* GetMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId);
		Rewired_Core::Rewired::ControllerMap* GetMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		Rewired_Core::Rewired::ControllerMap* GetMap(Rewired_Core::Rewired::Controller* controller, int32_t mapId);
		Rewired_Core::Rewired::ControllerMap* GetMap(Rewired_Core::Rewired::Controller* controller, int32_t categoryId, int32_t layoutId);
		Rewired_Core::Rewired::ControllerMap* GetMap(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		template <typename T> T* GetFirstMapInCategory(int32_t controllerId, mscorlib::System::String* categoryName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstMapInCategory", std::vector<std::string> { "System.Int32", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		template <typename T> T* GetFirstMapInCategory(int32_t controllerId, int32_t categoryId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetFirstMapInCategory", std::vector<std::string> { "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		Rewired_Core::Rewired::ControllerMap* GetFirstMapInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName);
		Rewired_Core::Rewired::ControllerMap* GetFirstMapInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId);
		Rewired_Core::Rewired::ControllerMap* GetFirstMapInCategory(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName);
		Rewired_Core::Rewired::ControllerMap* GetFirstMapInCategory(Rewired_Core::Rewired::Controller* controller, int32_t categoryId);
		template <typename T> void AddMap(int32_t controllerId, Rewired_Core::Rewired::ControllerMap* map)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMap", std::vector<std::string> { "System.Int32", "Rewired.ControllerMap" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)map;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void AddMap(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::ControllerMap* map);
		void AddMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* map);
		template <typename T> void AddMap(int32_t controllerId, Rewired_Core::Rewired::ControllerMap* map, bool startEnabled)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMap", std::vector<std::string> { "System.Int32", "Rewired.ControllerMap", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)map;
			params[2] = (intptr_t)&startEnabled;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void AddMap(Rewired_Core::Rewired::Controller* controller, Rewired_Core::Rewired::ControllerMap* map, bool startEnabled);
		void AddMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, Rewired_Core::Rewired::ControllerMap* map, bool startEnabled);
		template <typename T> bool AddMapFromXml(int32_t controllerId, mscorlib::System::String* xmlString)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapFromXml", std::vector<std::string> { "System.Int32", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)xmlString;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool AddMapFromXml(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* xmlString);
		template <typename T> int32_t AddMapsFromXml(int32_t controllerId, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* xmlStrings)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapsFromXml", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<System.String>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)xmlStrings;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		int32_t AddMapsFromXml(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* xmlStrings);
		template <typename T> bool AddMapFromJson(int32_t controllerId, mscorlib::System::String* jsonString)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapFromJson", std::vector<std::string> { "System.Int32", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)jsonString;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				bool ret;
				std::memset(&ret, 0, sizeof(bool));
				return ret;
			}
			return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
		}
		bool AddMapFromJson(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* jsonString);
		template <typename T> int32_t AddMapsFromJson(int32_t controllerId, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* jsonStrings)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddMapsFromJson", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<System.String>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)jsonStrings;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
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
		int32_t AddMapsFromJson(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* jsonStrings);
		template <typename T> void AddEmptyMap(int32_t controllerId, int32_t categoryId, int32_t layoutId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEmptyMap", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			params[2] = (intptr_t)&layoutId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void AddEmptyMap(int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEmptyMap", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			params[2] = (intptr_t)layoutName;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void AddEmptyMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId);
		void AddEmptyMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		template <typename T> void RemoveMap(int32_t controllerId, int32_t mapId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveMap", std::vector<std::string> { "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&mapId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void RemoveMap(int32_t controllerId, int32_t categoryId, int32_t layoutId)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveMap", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			params[2] = (intptr_t)&layoutId;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void RemoveMap(int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveMap", std::vector<std::string> { "System.Int32", "System.String", "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			params[2] = (intptr_t)layoutName;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void RemoveMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t mapId);
		void RemoveMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, int32_t layoutId);
		void RemoveMap(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		template <typename T> void ClearMaps(bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMaps", std::vector<std::string> { "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ClearMaps(Rewired_Core::Rewired::ControllerType controllerType, bool userAssignableOnly);
		template <typename T> void ClearMapsInCategory(int32_t categoryId, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&categoryId;
			params[1] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void ClearMapsInCategory(mscorlib::System::String* categoryName, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)categoryName;
			params[1] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void ClearMapsInCategory(int32_t categoryId, int32_t layoutId, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&categoryId;
			params[1] = (intptr_t)&layoutId;
			params[2] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void ClearMapsInCategory(mscorlib::System::String* categoryName, mscorlib::System::String* layoutName, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInCategory", std::vector<std::string> { "System.String", "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)categoryName;
			params[1] = (intptr_t)layoutName;
			params[2] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ClearMapsInCategory(int32_t categoryId, bool userAssignableOnly);
		void ClearMapsInCategory(mscorlib::System::String* categoryName, bool userAssignableOnly);
		void ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId, bool userAssignableOnly);
		void ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName, bool userAssignableOnly);
		void ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId, int32_t layoutId, bool userAssignableOnly);
		void ClearMapsInCategory(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName, bool userAssignableOnly);
		template <typename T> void ClearMapsInLayout(int32_t layoutId, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInLayout", std::vector<std::string> { "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&layoutId;
			params[1] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void ClearMapsInLayout(mscorlib::System::String* layoutName, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsInLayout", std::vector<std::string> { "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)layoutName;
			params[1] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ClearMapsInLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t layoutId, bool userAssignableOnly);
		void ClearMapsInLayout(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* layoutName, bool userAssignableOnly);
		template <typename T> void ClearMapsForController(int32_t controllerId, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForController", std::vector<std::string> { "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void ClearMapsForController(int32_t controllerId, int32_t categoryId, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForController", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&categoryId;
			params[2] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void ClearMapsForController(int32_t controllerId, mscorlib::System::String* categoryName, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForController", std::vector<std::string> { "System.Int32", "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)categoryName;
			params[2] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ClearMapsForController(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, bool userAssignableOnly);
		void ClearMapsForController(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t categoryId, bool userAssignableOnly);
		void ClearMapsForController(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* categoryName, bool userAssignableOnly);
		template <typename T> void ClearMapsForControllerInLayout(int32_t controllerId, int32_t layoutId, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForControllerInLayout", std::vector<std::string> { "System.Int32", "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&layoutId;
			params[2] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void ClearMapsForControllerInLayout(int32_t controllerId, mscorlib::System::String* layoutName, bool userAssignableOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearMapsForControllerInLayout", std::vector<std::string> { "System.Int32", "System.String", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)layoutName;
			params[2] = (intptr_t)&userAssignableOnly;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void ClearMapsForControllerInLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t layoutId, bool userAssignableOnly);
		void ClearMapsForControllerInLayout(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* layoutName, bool userAssignableOnly);
		void ClearAllMaps(bool userAssignableOnly);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstButtonMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		int32_t GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetButtonMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstAxisMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* AxisMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		int32_t GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetAxisMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps);
		int32_t GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithAction(mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* ElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps);
		Rewired_Core::Rewired::ActionElementMap* GetFirstElementMapWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::ControllerElementTarget elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, int32_t actionId, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		int32_t GetElementMapsWithElementTarget(Rewired_Core::Rewired::IControllerElementTarget* elementTarget, mscorlib::System::String* actionName, bool skipDisabledMaps, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* results);
		template <typename T> IL2CPP::Array<T>* GetMapSaveData(int32_t controllerId, bool userAssignableMapsOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetMapSaveData", std::vector<std::string> { "System.Int32", "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&controllerId;
			params[1] = (intptr_t)&userAssignableMapsOnly;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* GetMapSaveData(Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId, bool userAssignableMapsOnly);
		template <typename T> IL2CPP::Array<T>* GetAllMapSaveData(bool userAssignableMapsOnly)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllMapSaveData", std::vector<std::string> { "System.Boolean" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&userAssignableMapsOnly;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* GetAllMapSaveData(Rewired_Core::Rewired::ControllerType controllerType, bool userAssignableMapsOnly);
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* GetAllMapSaveData(bool userAssignableMapsOnly);
		int32_t SetAllMapsEnabled(bool state);
		int32_t SetAllMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType);
		int32_t SetAllMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller);
		int32_t SetAllMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, int32_t controllerId);
		int32_t SetMapsEnabled(bool state, int32_t categoryId);
		int32_t SetMapsEnabled(bool state, mscorlib::System::String* categoryName);
		int32_t SetMapsEnabled(bool state, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId, int32_t layoutId);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::ControllerType controllerType, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, int32_t categoryId);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, int32_t categoryId, int32_t layoutId);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName);
		int32_t SetMapsEnabled(bool state, Rewired_Core::Rewired::Controller* controller, mscorlib::System::String* categoryName, mscorlib::System::String* layoutName);
		void LoadDefaultMaps(Rewired_Core::Rewired::ControllerType controllerType);
		bool ContainsMapInCategory(Rewired_Core::Rewired::InputMapCategory* category);
		bool ContainsMapInCategory(int32_t categoryId);
		bool ContainsMapInCategory(mscorlib::System::String* categoryName);
		bool ContainsMapInCategory(Rewired_Core::Rewired::ControllerType controllerType, int32_t categoryId);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::InputBehavior>* get_InputBehaviors();
		Rewired_Core::Rewired::InputBehavior* GetInputBehavior(int32_t behaviorId);
		Rewired_Core::Rewired::InputBehavior* GetInputBehavior(mscorlib::System::String* behaviorName);
		void pKLNoWCgVUqlRfCsOXaDmHUNbICB();
		void UFGekIJnsUAEDIMyARHumOSXWzG(bool A_1);
		void kzhOtKCVbsTbYXFSwaOVYVPkUua(bool A_1);
		void nDsKFCNOFoaBQbrKaLFNnRmYliPC(bool A_1);
		void CdgOeyFDQQaURAtXLnfDGSscXlfl(bool A_1);
		template <typename T> Rewired_Core::Rewired::Player_ControllerHelper_TZoNXevHUTdPPGNpVPmigLKtHbF* ATwafMbbmXfqCTGBfqaDQryQiSGD()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ATwafMbbmXfqCTGBfqaDQryQiSGD");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (Rewired_Core::Rewired::Player_ControllerHelper_TZoNXevHUTdPPGNpVPmigLKtHbF*)returnValue;
		}
		Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::JoystickMap>* xmmJXbxWBpqxqFQoGGEghHZgEEt(Rewired_Core::Rewired::Joystick* A_1, bool A_2);
		void HlqfMvClTHRWQTvDtQbnuOMcGCD(Rewired_Core::Rewired::Joystick* A_1, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::JoystickMap>* A_2, Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM* A_3, bool A_4);
		Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::CustomControllerMap>* czfhyoJVuNkXEfoXmBTNKebCGXG(Rewired_Core::Rewired::CustomController* A_1, bool A_2);
		void LcGLWizcLlknBEsvDyaPiPkfGSu(Rewired_Core::Rewired::CustomController* A_1, Rewired_Core::vhWAChkQtfbJbONWUAQVROGQdlbD<Rewired_Core::Rewired::CustomControllerMap>* A_2, Rewired_Core::ubZlOyeOreOlVqBmvjKDEenhiPaM* A_3, bool A_4);
		void jJZfFxXXoleYVsgxcuZeaYAuMEk(Rewired_Core::Rewired::Controller* A_1, Rewired_Core::Rewired::ControllerMap* A_2);
		template <typename T> mscorlib::System::Collections::Generic::IList_1<T>* BRffQAcaZfKRnLUhLQHBZQnzxTt(int32_t A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BRffQAcaZfKRnLUhLQHBZQnzxTt");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<T>*)returnValue;
		}
		template <typename T> mscorlib::System::Collections::Generic::IList_1<T>* BRffQAcaZfKRnLUhLQHBZQnzxTt(Rewired_Core::Rewired::Controller* A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BRffQAcaZfKRnLUhLQHBZQnzxTt");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IList_1<T>*)returnValue;
		}
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* BRffQAcaZfKRnLUhLQHBZQnzxTt(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2);
		mscorlib::System::Collections::Generic::IList_1<Rewired_Core::Rewired::ControllerMap>* BRffQAcaZfKRnLUhLQHBZQnzxTt(Rewired_Core::Rewired::Controller* A_1);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4, Rewired_Core::Rewired::BoolOption A_5);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3, Rewired_Core::Rewired::BoolOption A_4);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4, Rewired_Core::Rewired::BoolOption A_5);
		void HWliegiTytEdMKscITjuZFUIUwc(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3, Rewired_Core::Rewired::BoolOption A_4);
		void MSZlPVEeYNbwVPkxTZXNShnHikO(Rewired_Core::Rewired::Controller* A_1, Rewired_Core::Rewired::ControllerMap* A_2, Rewired_Core::Rewired::BoolOption A_3);
		void MSZlPVEeYNbwVPkxTZXNShnHikO(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, Rewired_Core::Rewired::ControllerMap* A_3, Rewired_Core::Rewired::BoolOption A_4);
		bool HadpDEAFGdERATBkYNpHiugUBEP(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3);
		int32_t fbKDZUzXLkXBKLrXitKNFMdxXcx(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* A_3);
		bool OyMiwIkyyUkMbkivMeCHhnfKTyb(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3);
		int32_t zxyyQoTslBDoVjNdpywZCxCQJQo(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* A_3);
		void raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4);
		void raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3);
		void raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4);
		void raqYxuHgEuDWUyudnKUDJlSanQS(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, int32_t A_2);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, Rewired_Core::Rewired::ControllerMap* A_3);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, Rewired_Core::Rewired::ControllerMap* A_2);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4);
		void DzdezaXxJsalGxZqAPptPgaqDPS(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3);
		Rewired_Core::Rewired::ControllerMap* YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3);
		Rewired_Core::Rewired::ControllerMap* YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::Controller* A_1, int32_t A_2);
		Rewired_Core::Rewired::ControllerMap* YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, int32_t A_4);
		Rewired_Core::Rewired::ControllerMap* YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, int32_t A_3);
		Rewired_Core::Rewired::ControllerMap* YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::String* A_4);
		Rewired_Core::Rewired::ControllerMap* YIyVRucimZzkWXfxuwMOsilvaRfE(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::String* A_3);
		Rewired_Core::Rewired::ControllerMap* TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3);
		Rewired_Core::Rewired::ControllerMap* TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::Controller* A_1, int32_t A_2);
		Rewired_Core::Rewired::ControllerMap* TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3);
		Rewired_Core::Rewired::ControllerMap* TLvqPELxMsUEHJmVDvkWaReKby(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2);
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMap*>* dJdVZJmwFgsUpkypGIdtjOxDXud(Rewired_Core::Rewired::ControllerType A_1);
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* vmXpGuVEcIiguvWoSDzNDQEZcQz(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3);
		template <typename T> IL2CPP::Array<T>* vmXpGuVEcIiguvWoSDzNDQEZcQz(int32_t A_1, bool A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "vmXpGuVEcIiguvWoSDzNDQEZcQz");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		IL2CPP::Array<Rewired_Core::Rewired::ControllerMapSaveData*>* zYTmJsWKwSVNFHlCuepIPrfrZPI(Rewired_Core::Rewired::ControllerType A_1, bool A_2);
		template <typename T> IL2CPP::Array<T>* zYTmJsWKwSVNFHlCuepIPrfrZPI(bool A_1)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "zYTmJsWKwSVNFHlCuepIPrfrZPI");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&A_1;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		int32_t WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_4);
		int32_t WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::Controller* A_1, int32_t A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_3);
		int32_t WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_4);
		int32_t WWYGgareYqKtPkItghwilmdeZpy(Rewired_Core::Rewired::Controller* A_1, mscorlib::System::String* A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ControllerMap>* A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ControllerMap>* bKWBogKmADXqVMSoQMEpHdAAhBF(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3);
		template <typename T> mscorlib::System::Collections::Generic::IEnumerable_1<T>* bKWBogKmADXqVMSoQMEpHdAAhBF(int32_t A_1, int32_t A_2)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "bKWBogKmADXqVMSoQMEpHdAAhBF");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)&A_1;
			params[1] = (intptr_t)&A_2;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::Generic::IEnumerable_1<T>*)returnValue;
		}
		Rewired_Core::Rewired::ActionElementMap* SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3);
		Rewired_Core::Rewired::ActionElementMap* SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3);
		Rewired_Core::Rewired::ActionElementMap* QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3);
		Rewired_Core::Rewired::ActionElementMap* QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3);
		Rewired_Core::Rewired::ActionElementMap* YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3);
		Rewired_Core::Rewired::ActionElementMap* YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3);
		int32_t PhvjWzVlndcjGaWuuNXNcJAUJVw(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t HhTPZpqHEqCaPgxuKyUaIZmjJQS(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t kHBiXVfNdxECkHbVXxCMinXJVpV(int32_t A_1, bool A_2, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_3, bool A_4);
		int32_t qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5);
		int32_t qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5);
		int32_t ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5);
		int32_t ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5);
		int32_t DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5);
		int32_t DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, mscorlib::System::String* A_2, bool A_3, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_4, bool A_5);
		Rewired_Core::Rewired::ActionElementMap* SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4);
		Rewired_Core::Rewired::ActionElementMap* SzWZWxhYRHeBlRgfXLEdnXSnwjv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* cNEbfcGlqtniFgCASaoMCvhFqcLL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4);
		Rewired_Core::Rewired::ActionElementMap* QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4);
		Rewired_Core::Rewired::ActionElementMap* QtGVMwsaqYAYLpCmJHrDtEVRhNZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* hsbdZUUeiiGtANwiaysKJecWjdq(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4);
		Rewired_Core::Rewired::ActionElementMap* YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4);
		Rewired_Core::Rewired::ActionElementMap* YykMKZGZdZNaEFacNMRyQbLrMVl(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* treCDMOXcXHxgTgHKiFaHjRIXbv(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4);
		int32_t qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6);
		int32_t qZZvLpqPhQMNbadGuProGPCsfGN(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6);
		int32_t ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6);
		int32_t ZbVAgtFgFQKgLEoFXuFOSuzwfsZ(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6);
		int32_t DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6);
		int32_t DPJJGDqnDXiINfRjAuXGgmuDQFiL(Rewired_Core::Rewired::ControllerType A_1, int32_t A_2, mscorlib::System::String* A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6);
		Rewired_Core::Rewired::ActionElementMap* WBzDGxkJTWyXtTxvxQlcjXsJkOq(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4);
		mscorlib::System::Collections::Generic::IEnumerable_1<Rewired_Core::Rewired::ActionElementMap>* pSoToZtjdOeWvhYrvSSNhSdoxAma(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4);
		int32_t IwQNvexHUPPgfWTtCngRIAdZYvB(Rewired_Core::Rewired::IControllerElementTarget* A_1, bool A_2, int32_t A_3, bool A_4, mscorlib::System::Collections::Generic::List_1<Rewired_Core::Rewired::ActionElementMap>* A_5, bool A_6);
	};
}

