#include "UnityEngine_Rendering_Universal_Internal_DeferredTiler.h"

IL2CPP::Il2CppClass* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Unity.RenderPipelines.Universal.Runtime.dll", "UnityEngine.Rendering.Universal.Internal", "DeferredTiler");
	return il2cppclass;
}
mscorlib::System::Type* Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::_ctor(int32_t tilePixelWidth, int32_t tilePixelHeight, int32_t avgLightPerTile, int32_t tilerLevel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&tilePixelWidth;
	params[1] = (intptr_t)&tilePixelHeight;
	params[2] = (intptr_t)&avgLightPerTile;
	params[3] = (intptr_t)&tilerLevel;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TilerLevel()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TilerLevel");
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
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TileXCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TileXCount");
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
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TileYCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TileYCount");
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
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TilePixelWidth()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TilePixelWidth");
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
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TilePixelHeight()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TilePixelHeight");
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
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TileHeaderSize()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TileHeaderSize");
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
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_MaxLightPerTile()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_MaxLightPerTile");
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
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TileDataCapacity()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TileDataCapacity");
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
UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_Tiles()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Tiles");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16> ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>>(*(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32> Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::get_TileHeaders()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_TileHeaders");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32> ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32>));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32>>(*(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt32>*)il2cpp_object_unbox(returnValue));
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::GetTileOffsetAndCount(int32_t i, int32_t j, int32_t& offset, int32_t& count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTileOffsetAndCount", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32&", "System.Int32&" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&j;
	params[2] = (intptr_t)&offset;
	params[3] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::GetTileHeaderOffset(int32_t i, int32_t j)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTileHeaderOffset", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&i;
	params[1] = (intptr_t)&j;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::Setup(int32_t tileDataCapacity)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Setup", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&tileDataCapacity;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::OnCameraCleanup()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnCameraCleanup");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::PrecomputeTiles(UnityEngine_CoreModule::UnityEngine::Matrix4x4 proj, bool isOrthographic, int32_t renderWidth, int32_t renderHeight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrecomputeTiles", std::vector<std::string> { "UnityEngine.Matrix4x4", "System.Boolean", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&proj;
	params[1] = (intptr_t)&isOrthographic;
	params[2] = (intptr_t)&renderWidth;
	params[3] = (intptr_t)&renderHeight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::CullFinalLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& punctualLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& lightIndices, int32_t lightStartIndex, int32_t lightCount, int32_t istart, int32_t iend, int32_t jstart, int32_t jend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CullFinalLights", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>&", "Unity.Collections.NativeArray`1<System.UInt16>&", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&punctualLights;
	params[1] = (intptr_t)&lightIndices;
	params[2] = (intptr_t)&lightStartIndex;
	params[3] = (intptr_t)&lightCount;
	params[4] = (intptr_t)&istart;
	params[5] = (intptr_t)&iend;
	params[6] = (intptr_t)&jstart;
	params[7] = (intptr_t)&jend;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::CullIntermediateLights(UnityEngine_CoreModule::Unity::Collections::NativeArray_1<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_PrePunctualLight>& punctualLights, UnityEngine_CoreModule::Unity::Collections::NativeArray_1<mscorlib::System::UInt16>& lightIndices, int32_t lightStartIndex, int32_t lightCount, int32_t istart, int32_t iend, int32_t jstart, int32_t jend)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CullIntermediateLights", std::vector<std::string> { "Unity.Collections.NativeArray`1<UnityEngine.Rendering.Universal.Internal.DeferredTiler/PrePunctualLight>&", "Unity.Collections.NativeArray`1<System.UInt16>&", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&punctualLights;
	params[1] = (intptr_t)&lightIndices;
	params[2] = (intptr_t)&lightStartIndex;
	params[3] = (intptr_t)&lightCount;
	params[4] = (intptr_t)&istart;
	params[5] = (intptr_t)&iend;
	params[6] = (intptr_t)&jstart;
	params[7] = (intptr_t)&jend;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::AddTileData(uint16_t* lightData, int32_t& size)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTileData", std::vector<std::string> { "System.UInt16*", "System.Int32&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)lightData;
	params[1] = (intptr_t)&size;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::IntersectionLineSphere(Unity_Mathematics::Unity::Mathematics::float3 centre, float radius, Unity_Mathematics::Unity::Mathematics::float3 raySource, Unity_Mathematics::Unity::Mathematics::float3 rayDirection, float& t0, float& t1)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IntersectionLineSphere", std::vector<std::string> { "Unity.Mathematics.float3", "System.Single", "Unity.Mathematics.float3", "Unity.Mathematics.float3", "System.Single&", "System.Single&" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)&centre;
	params[1] = (intptr_t)&radius;
	params[2] = (intptr_t)&raySource;
	params[3] = (intptr_t)&rayDirection;
	params[4] = (intptr_t)&t0;
	params[5] = (intptr_t)&t1;
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
bool Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::Clip(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::PreTile& tile, Unity_Mathematics::Unity::Mathematics::float3 posVS, float radius)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clip", std::vector<std::string> { "UnityEngine.Rendering.Universal.PreTile&", "Unity.Mathematics.float3", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&tile;
	params[1] = (intptr_t)&posVS;
	params[2] = (intptr_t)&radius;
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
Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_ClipResult Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::ClipPartial(Unity_Mathematics::Unity::Mathematics::float4 plane, Unity_Mathematics::Unity::Mathematics::float4 sidePlaneA, Unity_Mathematics::Unity::Mathematics::float4 sidePlaneB, Unity_Mathematics::Unity::Mathematics::float3 posVS, float radius, float radiusSq, int32_t& insideCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClipPartial", std::vector<std::string> { "Unity.Mathematics.float4", "Unity.Mathematics.float4", "Unity.Mathematics.float4", "Unity.Mathematics.float3", "System.Single", "System.Single", "System.Int32&" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&plane;
	params[1] = (intptr_t)&sidePlaneA;
	params[2] = (intptr_t)&sidePlaneB;
	params[3] = (intptr_t)&posVS;
	params[4] = (intptr_t)&radius;
	params[5] = (intptr_t)&radiusSq;
	params[6] = (intptr_t)&insideCount;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_ClipResult ret;
		std::memset(&ret, 0, sizeof(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_ClipResult));
		return ret;
	}
	return static_cast<Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_ClipResult>(*(Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler_ClipResult*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float4 Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::MakePlane(Unity_Mathematics::Unity::Mathematics::float3 pb, Unity_Mathematics::Unity::Mathematics::float3 pc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakePlane", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pb;
	params[1] = (intptr_t)&pc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float4 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float4));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float4>(*(Unity_Mathematics::Unity::Mathematics::float4*)il2cpp_object_unbox(returnValue));
}
Unity_Mathematics::Unity::Mathematics::float4 Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::MakePlane(Unity_Mathematics::Unity::Mathematics::float3 pa, Unity_Mathematics::Unity::Mathematics::float3 pb, Unity_Mathematics::Unity::Mathematics::float3 pc)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MakePlane", std::vector<std::string> { "Unity.Mathematics.float3", "Unity.Mathematics.float3", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&pa;
	params[1] = (intptr_t)&pb;
	params[2] = (intptr_t)&pc;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		Unity_Mathematics::Unity::Mathematics::float4 ret;
		std::memset(&ret, 0, sizeof(Unity_Mathematics::Unity::Mathematics::float4));
		return ret;
	}
	return static_cast<Unity_Mathematics::Unity::Mathematics::float4>(*(Unity_Mathematics::Unity::Mathematics::float4*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::DistanceToPlane(Unity_Mathematics::Unity::Mathematics::float4 plane, Unity_Mathematics::Unity::Mathematics::float3 p)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DistanceToPlane", std::vector<std::string> { "Unity.Mathematics.float4", "Unity.Mathematics.float3" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&plane;
	params[1] = (intptr_t)&p;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::SignedSq(float f)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SignedSq", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&f;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::min2(float a, float b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "min2", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::max2(float a, float b)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "max2", std::vector<std::string> { "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
float Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::max3(float a, float b, float c)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "max3", std::vector<std::string> { "System.Single", "System.Single", "System.Single" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&a;
	params[1] = (intptr_t)&b;
	params[2] = (intptr_t)&c;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		float ret;
		std::memset(&ret, 0, sizeof(float));
		return ret;
	}
	return static_cast<float>(*(float*)il2cpp_object_unbox(returnValue));
}
uint32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::_f32tof16(float x)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "_f32tof16", std::vector<std::string> { "System.Single" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&x;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint32_t ret;
		std::memset(&ret, 0, sizeof(uint32_t));
		return ret;
	}
	return static_cast<uint32_t>(*(uint32_t*)il2cpp_object_unbox(returnValue));
}
int32_t Unity_RenderPipelines_Universal_Runtime::UnityEngine::Rendering::Universal::Internal::DeferredTiler::Align(int32_t s, int32_t alignment)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Align", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&s;
	params[1] = (intptr_t)&alignment;
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
