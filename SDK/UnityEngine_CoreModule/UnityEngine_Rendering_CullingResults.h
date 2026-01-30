#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingAllocationInfo; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct CullingAllocationInfo; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct ComputeBuffer; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_CoreModule::UnityEngine { struct Bounds; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine { struct Matrix4x4; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowSplitData; };
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct ShadowSplitData; };
#include "UnityEngine_Vector3.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector3; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "UnityEngine_Rendering_VisibleLight.h"
namespace UnityEngine_CoreModule::UnityEngine::Rendering { struct VisibleLight; };
#include "Unity_Collections_NativeArray_1.h"
namespace UnityEngine_CoreModule::Unity::Collections { template <typename T> struct NativeArray_1; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
#include "Unity_Collections_Allocator.h"
namespace mscorlib::System { struct Object; };

namespace UnityEngine_CoreModule::UnityEngine::Rendering
{
	struct CullingResults
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		intptr_t ptr;
		UnityEngine_CoreModule::UnityEngine::Rendering::CullingAllocationInfo* m_AllocationInfo;
		static int32_t GetLightIndexCount(intptr_t cullingResultsPtr);
		static int32_t GetReflectionProbeIndexCount(intptr_t cullingResultsPtr);
		static void FillLightAndReflectionProbeIndices(intptr_t cullingResultsPtr, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* computeBuffer);
		static int32_t GetLightIndexMapSize(intptr_t cullingResultsPtr);
		static void FillLightIndexMap(intptr_t cullingResultsPtr, intptr_t indexMapPtr, int32_t indexMapSize);
		static void SetLightIndexMap(intptr_t cullingResultsPtr, intptr_t indexMapPtr, int32_t indexMapSize);
		static bool GetShadowCasterBounds(intptr_t cullingResultsPtr, int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Bounds& bounds);
		static bool ComputeSpotShadowMatricesAndCullingPrimitives(intptr_t cullingResultsPtr, int32_t activeLightIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData);
		static bool ComputeDirectionalShadowMatricesAndCullingPrimitives(intptr_t cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_CoreModule::UnityEngine::Vector3 splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData);
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> get_visibleLights();
		template <typename T> UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T> GetNativeArray(void* dataPointer, int32_t length)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetNativeArray", std::vector<std::string> { "System.Void*", "System.Int32" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[2];
			params[0] = (intptr_t)dataPointer;
			params[1] = (intptr_t)&length;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			if (returnValue == nullptr)
			{
				UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T> ret;
				std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T>));
				return ret;
			}
			return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T>>(*(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<T>*)il2cpp_object_unbox(returnValue));
		}
		int32_t get_lightAndReflectionProbeIndexCount();
		void FillLightAndReflectionProbeIndices(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* computeBuffer);
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> GetLightIndexMap(UnityEngine_CoreModule::Unity::Collections::Allocator allocator);
		void SetLightIndexMap(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> lightIndexMap);
		bool GetShadowCasterBounds(int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Bounds& outBounds);
		bool ComputeSpotShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData);
		bool ComputeDirectionalShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_CoreModule::UnityEngine::Vector3 splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData);
		bool Equals(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults other);
		bool Equals(mscorlib::System::Object* obj);
		int32_t GetHashCode();
		static bool ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(intptr_t cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_CoreModule::UnityEngine::Vector3& splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData);
	};
}

