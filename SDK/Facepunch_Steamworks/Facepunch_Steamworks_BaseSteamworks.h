#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Networking; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Inventory; };
namespace Facepunch_Steamworks::Facepunch::Steamworks { struct Workshop; };
namespace mscorlib::System { struct Action; };
namespace Facepunch_Steamworks::Facepunch::Steamworks::Interop { struct NativeInterface; };
namespace Facepunch_Steamworks::SteamNative { struct CallbackHandle; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Facepunch_Steamworks::SteamNative { struct CallResult; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T> struct Action_1; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Facepunch_Steamworks::Facepunch::Steamworks
{
	struct BaseSteamworks : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		uint32_t _AppId_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Networking* _Networking_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory* _Inventory_k__BackingField;
		Facepunch_Steamworks::Facepunch::Steamworks::Workshop* _Workshop_k__BackingField;
		mscorlib::System::Action* OnUpdate;
		Facepunch_Steamworks::Facepunch::Steamworks::Interop::NativeInterface* native;
		mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::SteamNative::CallbackHandle>* CallbackHandles;
		mscorlib::System::Collections::Generic::List_1<Facepunch_Steamworks::SteamNative::CallResult>* CallResults;
		bool disposed;
		mscorlib::System::Action_1<mscorlib::System::Object>* OnAnyCallback;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Type, mscorlib::System::Collections::Generic::List_1<mscorlib::System::Action_1<mscorlib::System::Object>>>* Callbacks;
		uint32_t get_AppId();
		void set_AppId(uint32_t value);
		Facepunch_Steamworks::Facepunch::Steamworks::Networking* get_Networking();
		void set_Networking(Facepunch_Steamworks::Facepunch::Steamworks::Networking* value);
		Facepunch_Steamworks::Facepunch::Steamworks::Inventory* get_Inventory();
		void set_Inventory(Facepunch_Steamworks::Facepunch::Steamworks::Inventory* value);
		Facepunch_Steamworks::Facepunch::Steamworks::Workshop* get_Workshop();
		void set_Workshop(Facepunch_Steamworks::Facepunch::Steamworks::Workshop* value);
		void _ctor(uint32_t appId);
		void Finalize();
		void Dispose();
		void SetupCommonInterfaces();
		bool get_IsValid();
		bool get_IsGameServer();
		void RegisterCallbackHandle(Facepunch_Steamworks::SteamNative::CallbackHandle* handle);
		void RegisterCallResult(Facepunch_Steamworks::SteamNative::CallResult* handle);
		void UnregisterCallResult(Facepunch_Steamworks::SteamNative::CallResult* handle);
		void Update();
		void RunUpdateCallbacks();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Action_1<mscorlib::System::Object>>* CallbackList(mscorlib::System::Type* T);
		template <typename T> void OnCallback(T* data)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCallback", std::vector<std::string> { GetGenericTypeName<T>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)data;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> void RegisterCallback(mscorlib::System::Action_1<T>* func)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RegisterCallback", std::vector<std::string> { "System.Action`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)func;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
	};
}

