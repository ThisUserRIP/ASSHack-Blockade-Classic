#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Rendering_VertexAttribute.h"
#include "Unity_Collections_NativeSlice_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeSlice_1; };
namespace UnityEngine_CoreModule::UnityEngine { struct Sprite; };
#include "..\mscorlib\System_UInt16.h"
namespace mscorlib::System { struct UInt16; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "UnityEngine_U2D_SpriteChannelInfo.h"
namespace UnityEngine_CoreModule::UnityEngine::U2D { struct SpriteChannelInfo; };

namespace UnityEngine_CoreModule::UnityEngine::U2D
{
	struct SpriteDataAccessExtensions : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		template <typename T> static void CheckAttributeTypeMatchesAndThrow(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckAttributeTypeMatchesAndThrow", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)&channel;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		template <typename T> static UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T> GetVertexAttribute(UnityEngine_CoreModule::UnityEngine::Sprite* sprite, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVertexAttribute", std::vector<std::string> { "UnityEngine.Sprite", "UnityEngine.Rendering.VertexAttribute" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)sprite;
			params[1] = (intptr_t)&channel;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, nullptr, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T> ret;
				std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T>));
				return ret;
			}
			return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T>>(*(UnityEngine_CoreModule::Unity::Collections::NativeSlice_1<T>*)il2cpp_object_unbox(returnValue));
		}
		static UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> GetIndices(UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
		static UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo GetIndicesInfo(UnityEngine_CoreModule::UnityEngine::Sprite* sprite);
		static UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo GetChannelInfo(UnityEngine_CoreModule::UnityEngine::Sprite* sprite, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel);
		static void GetIndicesInfo_Injected(UnityEngine_CoreModule::UnityEngine::Sprite* sprite, UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo& ret);
		static void GetChannelInfo_Injected(UnityEngine_CoreModule::UnityEngine::Sprite* sprite, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::U2D::SpriteChannelInfo& ret);
	};
}

