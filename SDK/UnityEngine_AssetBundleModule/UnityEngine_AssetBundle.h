#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundleCreateRequest; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Object; };
namespace mscorlib::System { struct String; };
namespace UnityEngine_AssetBundleModule::UnityEngine { struct AssetBundleRequest; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace UnityEngine_AssetBundleModule::UnityEngine
{
	struct AssetBundle : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void _ctor();
		static UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync_Internal(IL2CPP::Array<uint8_t>* binary, uint32_t crc);
		static UnityEngine_AssetBundleModule::UnityEngine::AssetBundleCreateRequest* LoadFromMemoryAsync(IL2CPP::Array<uint8_t>* binary);
		static UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* LoadFromMemory_Internal(IL2CPP::Array<uint8_t>* binary, uint32_t crc);
		static UnityEngine_AssetBundleModule::UnityEngine::AssetBundle* LoadFromMemory(IL2CPP::Array<uint8_t>* binary);
		UnityEngine_CoreModule::UnityEngine::Object* LoadAsset(mscorlib::System::String* name);
		UnityEngine_CoreModule::UnityEngine::Object* LoadAsset(mscorlib::System::String* name, mscorlib::System::Type* type);
		UnityEngine_CoreModule::UnityEngine::Object* LoadAsset_Internal(mscorlib::System::String* name, mscorlib::System::Type* type);
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundleRequest* LoadAssetAsync(mscorlib::System::String* name, mscorlib::System::Type* type);
		template <typename T> static IL2CPP::Array<T>* ConvertObjects(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* rawObjects)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ConvertObjects", std::vector<std::string> { "UnityEngine.Object[]" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)rawObjects;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		template <typename T> IL2CPP::Array<T>* LoadAllAssets()
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "LoadAllAssets");
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, nullptr, &Il2CppException);
			Il2CppExceptionMessage(Il2CppException);
			return (IL2CPP::Array<T>*)returnValue;
		}
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* LoadAllAssets(mscorlib::System::Type* type);
		UnityEngine_AssetBundleModule::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(mscorlib::System::String* name, mscorlib::System::Type* type);
		void Unload(bool unloadAllLoadedObjects);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Object*>* LoadAssetWithSubAssets_Internal(mscorlib::System::String* name, mscorlib::System::Type* type);
	};
}

