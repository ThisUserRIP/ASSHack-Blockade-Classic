#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp { struct Atlas; };
namespace Assembly_CSharp { struct Block; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Assembly_CSharp
{
	struct BlockSet : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* data;
		IL2CPP::Array<Assembly_CSharp::Atlas*>* atlases;
		IL2CPP::Array<Assembly_CSharp::Block*>* blocks;
		void OnEnable();
		void SetAtlases(IL2CPP::Array<Assembly_CSharp::Atlas*>* atlases);
		IL2CPP::Array<Assembly_CSharp::Atlas*>* GetAtlases();
		Assembly_CSharp::Atlas* GetAtlas(int32_t i);
		IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Material*>* GetMaterials(int32_t count);
		void SetBlocks(IL2CPP::Array<Assembly_CSharp::Block*>* blocks);
		IL2CPP::Array<Assembly_CSharp::Block*>* GetBlocks();
		int32_t GetBlockCount();
		Assembly_CSharp::Block* GetBlock(int32_t index);
		Assembly_CSharp::Block* GetBlock(mscorlib::System::String* name);
		template <typename T> T* GetBlock(mscorlib::System::String* name)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetBlock", std::vector<std::string> { "System.String" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)name;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return GetGenericValue<T>(returnValue);;
		}
		IL2CPP::Array<Assembly_CSharp::Block*>* GetBlocks(mscorlib::System::String* name);
		void SetData(mscorlib::System::String* data);
		mscorlib::System::String* GetData();
		void _ctor();
	};
}

