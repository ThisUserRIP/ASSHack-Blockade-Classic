#include "UnityEngine_Rendering_CullingResults.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine.Rendering", "CullingResults");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetLightIndexCount(intptr_t cullingResultsPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightIndexCount", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cullingResultsPtr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetReflectionProbeIndexCount(intptr_t cullingResultsPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetReflectionProbeIndexCount", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cullingResultsPtr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices(intptr_t cullingResultsPtr, UnityEngine_CoreModule::UnityEngine::ComputeBuffer* computeBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillLightAndReflectionProbeIndices", std::vector<std::string> { "System.IntPtr", "UnityEngine.ComputeBuffer" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cullingResultsPtr;
	params[1] = (intptr_t)computeBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetLightIndexMapSize(intptr_t cullingResultsPtr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightIndexMapSize", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&cullingResultsPtr;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::FillLightIndexMap(intptr_t cullingResultsPtr, intptr_t indexMapPtr, int32_t indexMapSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillLightIndexMap", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&cullingResultsPtr;
	params[1] = (intptr_t)&indexMapPtr;
	params[2] = (intptr_t)&indexMapSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::SetLightIndexMap(intptr_t cullingResultsPtr, intptr_t indexMapPtr, int32_t indexMapSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLightIndexMap", std::vector<std::string> { "System.IntPtr", "System.IntPtr", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&cullingResultsPtr;
	params[1] = (intptr_t)&indexMapPtr;
	params[2] = (intptr_t)&indexMapSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetShadowCasterBounds(intptr_t cullingResultsPtr, int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Bounds& bounds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetShadowCasterBounds", std::vector<std::string> { "System.IntPtr", "System.Int32", "UnityEngine.Bounds&" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&cullingResultsPtr;
	params[1] = (intptr_t)&lightIndex;
	params[2] = (intptr_t)&bounds;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives(intptr_t cullingResultsPtr, int32_t activeLightIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeSpotShadowMatricesAndCullingPrimitives", std::vector<std::string> { "System.IntPtr", "System.Int32", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&", "UnityEngine.Rendering.ShadowSplitData&" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&cullingResultsPtr;
	params[1] = (intptr_t)&activeLightIndex;
	params[2] = (intptr_t)&viewMatrix;
	params[3] = (intptr_t)&projMatrix;
	params[4] = (intptr_t)&shadowSplitData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives(intptr_t cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_CoreModule::UnityEngine::Vector3 splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeDirectionalShadowMatricesAndCullingPrimitives", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Vector3", "System.Int32", "System.Single", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&", "UnityEngine.Rendering.ShadowSplitData&" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&cullingResultsPtr;
	params[1] = (intptr_t)&activeLightIndex;
	params[2] = (intptr_t)&splitIndex;
	params[3] = (intptr_t)&splitCount;
	params[4] = (intptr_t)&splitRatio;
	params[5] = (intptr_t)&shadowResolution;
	params[6] = (intptr_t)&shadowNearPlaneOffset;
	params[7] = (intptr_t)&viewMatrix;
	params[8] = (intptr_t)&projMatrix;
	params[9] = (intptr_t)&shadowSplitData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::get_visibleLights()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_visibleLights");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight> ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>>(*(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<UnityEngine_CoreModule::UnityEngine::Rendering::VisibleLight>*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::get_lightAndReflectionProbeIndexCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_lightAndReflectionProbeIndexCount");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::FillLightAndReflectionProbeIndices(UnityEngine_CoreModule::UnityEngine::ComputeBuffer* computeBuffer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "FillLightAndReflectionProbeIndices", std::vector<std::string> { "UnityEngine.ComputeBuffer" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)computeBuffer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetLightIndexMap(UnityEngine_CoreModule::Unity::Collections::Allocator allocator)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLightIndexMap", std::vector<std::string> { "Unity.Collections.Allocator" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&allocator;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32>));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32>>(*(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32>*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::SetLightIndexMap(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::Int32> lightIndexMap)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetLightIndexMap", std::vector<std::string> { "Unity.Collections.NativeArray`1<System.Int32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&lightIndexMap;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetShadowCasterBounds(int32_t lightIndex, UnityEngine_CoreModule::UnityEngine::Bounds& outBounds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetShadowCasterBounds", std::vector<std::string> { "System.Int32", "UnityEngine.Bounds&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&lightIndex;
	params[1] = (intptr_t)&outBounds;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::ComputeSpotShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeSpotShadowMatricesAndCullingPrimitives", std::vector<std::string> { "System.Int32", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&", "UnityEngine.Rendering.ShadowSplitData&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&activeLightIndex;
	params[1] = (intptr_t)&viewMatrix;
	params[2] = (intptr_t)&projMatrix;
	params[3] = (intptr_t)&shadowSplitData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives(int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_CoreModule::UnityEngine::Vector3 splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeDirectionalShadowMatricesAndCullingPrimitives", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Vector3", "System.Int32", "System.Single", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&", "UnityEngine.Rendering.ShadowSplitData&" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&activeLightIndex;
	params[1] = (intptr_t)&splitIndex;
	params[2] = (intptr_t)&splitCount;
	params[3] = (intptr_t)&splitRatio;
	params[4] = (intptr_t)&shadowResolution;
	params[5] = (intptr_t)&shadowNearPlaneOffset;
	params[6] = (intptr_t)&viewMatrix;
	params[7] = (intptr_t)&projMatrix;
	params[8] = (intptr_t)&shadowSplitData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::Equals(UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults other)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "UnityEngine.Rendering.CullingResults" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&other;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::Equals(mscorlib::System::Object* obj)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Equals", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)obj;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
int32_t UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::GetHashCode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetHashCode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
bool UnityEngine_CoreModule::UnityEngine::Rendering::CullingResults::ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected(intptr_t cullingResultsPtr, int32_t activeLightIndex, int32_t splitIndex, int32_t splitCount, UnityEngine_CoreModule::UnityEngine::Vector3& splitRatio, int32_t shadowResolution, float shadowNearPlaneOffset, UnityEngine_CoreModule::UnityEngine::Matrix4x4& viewMatrix, UnityEngine_CoreModule::UnityEngine::Matrix4x4& projMatrix, UnityEngine_CoreModule::UnityEngine::Rendering::ShadowSplitData& shadowSplitData)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeDirectionalShadowMatricesAndCullingPrimitives_Injected", std::vector<std::string> { "System.IntPtr", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Vector3&", "System.Int32", "System.Single", "UnityEngine.Matrix4x4&", "UnityEngine.Matrix4x4&", "UnityEngine.Rendering.ShadowSplitData&" });
	intptr_t* params = new intptr_t[10];
	params[0] = (intptr_t)&cullingResultsPtr;
	params[1] = (intptr_t)&activeLightIndex;
	params[2] = (intptr_t)&splitIndex;
	params[3] = (intptr_t)&splitCount;
	params[4] = (intptr_t)&splitRatio;
	params[5] = (intptr_t)&shadowResolution;
	params[6] = (intptr_t)&shadowNearPlaneOffset;
	params[7] = (intptr_t)&viewMatrix;
	params[8] = (intptr_t)&projMatrix;
	params[9] = (intptr_t)&shadowSplitData;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
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
