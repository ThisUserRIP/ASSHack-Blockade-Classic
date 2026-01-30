#include "UnityEngine_Mesh.h"

IL2CPP::Il2CppClass* UnityEngine_CoreModule::UnityEngine::Mesh::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("UnityEngine.CoreModule.dll", "UnityEngine", "Mesh");
	return il2cppclass;
}
mscorlib::System::Type* UnityEngine_CoreModule::UnityEngine::Mesh::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::Internal_Create(UnityEngine_CoreModule::UnityEngine::Mesh* mono)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Internal_Create", std::vector<std::string> { "UnityEngine.Mesh" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)mono;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_indexFormat(UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_indexFormat", std::vector<std::string> { "UnityEngine.Rendering.IndexFormat" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetVertexBufferParamsFromArray(int32_t vertexCount, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVertexBufferParamsFromArray", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.VertexAttributeDescriptor[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&vertexCount;
	params[1] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::InternalSetVertexBufferData(int32_t stream, intptr_t data, int32_t dataStart, int32_t meshBufferStart, int32_t count, int32_t elemSize, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "InternalSetVertexBufferData", std::vector<std::string> { "System.Int32", "System.IntPtr", "System.Int32", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)&stream;
	params[1] = (intptr_t)&data;
	params[2] = (intptr_t)&dataStart;
	params[3] = (intptr_t)&meshBufferStart;
	params[4] = (intptr_t)&count;
	params[5] = (intptr_t)&elemSize;
	params[6] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Mesh::GetVertexAttributeCountImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVertexAttributeCountImpl");
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
UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor UnityEngine_CoreModule::UnityEngine::Mesh::GetVertexAttribute(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVertexAttribute", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor>(*(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor*)il2cpp_object_unbox(returnValue));
}
uint32_t UnityEngine_CoreModule::UnityEngine::Mesh::GetIndexCountImpl(int32_t submesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndexCountImpl", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&submesh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
IL2CPP::Array<int32_t>* UnityEngine_CoreModule::UnityEngine::Mesh::GetTrianglesImpl(int32_t submesh, bool applyBaseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTrianglesImpl", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&submesh;
	params[1] = (intptr_t)&applyBaseVertex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
IL2CPP::Array<int32_t>* UnityEngine_CoreModule::UnityEngine::Mesh::GetIndicesImpl(int32_t submesh, bool applyBaseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndicesImpl", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&submesh;
	params[1] = (intptr_t)&applyBaseVertex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetIndicesImpl(int32_t submesh, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat indicesFormat, mscorlib::System::Array* indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndicesImpl", std::vector<std::string> { "System.Int32", "UnityEngine.MeshTopology", "UnityEngine.Rendering.IndexFormat", "System.Array", "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&submesh;
	params[1] = (intptr_t)&topology;
	params[2] = (intptr_t)&indicesFormat;
	params[3] = (intptr_t)indices;
	params[4] = (intptr_t)&arrayStart;
	params[5] = (intptr_t)&arraySize;
	params[6] = (intptr_t)&calculateBounds;
	params[7] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetIndicesNativeArrayImpl(int32_t submesh, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat indicesFormat, intptr_t indices, int32_t arrayStart, int32_t arraySize, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndicesNativeArrayImpl", std::vector<std::string> { "System.Int32", "UnityEngine.MeshTopology", "UnityEngine.Rendering.IndexFormat", "System.IntPtr", "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&submesh;
	params[1] = (intptr_t)&topology;
	params[2] = (intptr_t)&indicesFormat;
	params[3] = (intptr_t)&indices;
	params[4] = (intptr_t)&arrayStart;
	params[5] = (intptr_t)&arraySize;
	params[6] = (intptr_t)&calculateBounds;
	params[7] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::PrintErrorCantAccessChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute ch)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintErrorCantAccessChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ch;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Mesh::HasVertexAttribute(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute attr)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "HasVertexAttribute", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&attr;
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
void UnityEngine_CoreModule::UnityEngine::Mesh::SetArrayForChannelImpl(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, mscorlib::System::Array* values, int32_t arraySize, int32_t valuesStart, int32_t valuesCount, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetArrayForChannelImpl", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "UnityEngine.Rendering.VertexAttributeFormat", "System.Int32", "System.Array", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)&format;
	params[2] = (intptr_t)&dim;
	params[3] = (intptr_t)values;
	params[4] = (intptr_t)&arraySize;
	params[5] = (intptr_t)&valuesStart;
	params[6] = (intptr_t)&valuesCount;
	params[7] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Array* UnityEngine_CoreModule::UnityEngine::Mesh::GetAllocArrayFromChannelImpl(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetAllocArrayFromChannelImpl", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "UnityEngine.Rendering.VertexAttributeFormat", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)&format;
	params[2] = (intptr_t)&dim;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Array*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::GetArrayFromChannelImpl(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, mscorlib::System::Array* values)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetArrayFromChannelImpl", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "UnityEngine.Rendering.VertexAttributeFormat", "System.Int32", "System.Array" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)&format;
	params[2] = (intptr_t)&dim;
	params[3] = (intptr_t)values;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Mesh::get_canAccess()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_canAccess");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Mesh::get_vertexCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vertexCount");
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
int32_t UnityEngine_CoreModule::UnityEngine::Mesh::get_subMeshCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_subMeshCount");
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
void UnityEngine_CoreModule::UnityEngine::Mesh::set_subMeshCount(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_subMeshCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor UnityEngine_CoreModule::UnityEngine::Mesh::GetSubMesh(int32_t index)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSubMesh", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&index;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor>(*(UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor*)il2cpp_object_unbox(returnValue));
}
UnityEngine_CoreModule::UnityEngine::Bounds UnityEngine_CoreModule::UnityEngine::Mesh::get_bounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_bounds");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Bounds ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Bounds));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Bounds>(*(UnityEngine_CoreModule::UnityEngine::Bounds*)il2cpp_object_unbox(returnValue));
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_bounds(UnityEngine_CoreModule::UnityEngine::Bounds value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_bounds", std::vector<std::string> { "UnityEngine.Bounds" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::ClearImpl(bool keepVertexLayout)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ClearImpl", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&keepVertexLayout;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::RecalculateBoundsImpl(UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecalculateBoundsImpl", std::vector<std::string> { "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::MarkDynamicImpl()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarkDynamicImpl");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::UploadMeshDataImpl(bool markNoLongerReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadMeshDataImpl", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&markNoLongerReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute UnityEngine_CoreModule::UnityEngine::Mesh::GetUVChannel(int32_t uvIndex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUVChannel", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&uvIndex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute ret;
		std::memset(&ret, 0, sizeof(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute));
		return ret;
	}
	return static_cast<UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute>(*(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute*)il2cpp_object_unbox(returnValue));
}
int32_t UnityEngine_CoreModule::UnityEngine::Mesh::DefaultDimensionForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "DefaultDimensionForChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&channel;
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
void UnityEngine_CoreModule::UnityEngine::Mesh::SetSizedArrayForChannel(UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttribute channel, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeFormat format, int32_t dim, mscorlib::System::Array* values, int32_t valuesArrayLength, int32_t valuesStart, int32_t valuesCount, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetSizedArrayForChannel", std::vector<std::string> { "UnityEngine.Rendering.VertexAttribute", "UnityEngine.Rendering.VertexAttributeFormat", "System.Int32", "System.Array", "System.Int32", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)&format;
	params[2] = (intptr_t)&dim;
	params[3] = (intptr_t)values;
	params[4] = (intptr_t)&valuesArrayLength;
	params[5] = (intptr_t)&valuesStart;
	params[6] = (intptr_t)&valuesCount;
	params[7] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* UnityEngine_CoreModule::UnityEngine::Mesh::get_vertices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vertices");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_vertices(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_vertices", std::vector<std::string> { "UnityEngine.Vector3[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* UnityEngine_CoreModule::UnityEngine::Mesh::get_normals()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_normals");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_normals(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector3>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_normals", std::vector<std::string> { "UnityEngine.Vector3[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* UnityEngine_CoreModule::UnityEngine::Mesh::get_tangents()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_tangents");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_tangents(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector4>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_tangents", std::vector<std::string> { "UnityEngine.Vector4[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* UnityEngine_CoreModule::UnityEngine::Mesh::get_uv()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_uv");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_uv(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_uv", std::vector<std::string> { "UnityEngine.Vector2[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_uv2(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Vector2>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_uv2", std::vector<std::string> { "UnityEngine.Vector2[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* UnityEngine_CoreModule::UnityEngine::Mesh::get_colors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_colors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_colors(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_colors", std::vector<std::string> { "UnityEngine.Color[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color32>* UnityEngine_CoreModule::UnityEngine::Mesh::get_colors32()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_colors32");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color32>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_colors32(IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Color32>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_colors32", std::vector<std::string> { "UnityEngine.Color32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inVertices)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVertices", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inVertices;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVertices", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inVertices;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetVertices(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inVertices, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVertices", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)inVertices;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetNormals(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inNormals)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNormals", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inNormals;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetNormals(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNormals", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inNormals;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetNormals(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector3>* inNormals, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetNormals", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector3>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)inNormals;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTangents(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* inTangents)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTangents", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector4>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inTangents;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTangents(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTangents", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inTangents;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTangents(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* inTangents, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTangents", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)inTangents;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetColors(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* inColors)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetColors", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Color32>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)inColors;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetColors(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* inColors, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetColors", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Color32>", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)inColors;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetColors(mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Color32>* inColors, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetColors", std::vector<std::string> { "System.Collections.Generic.List`1<UnityEngine.Color32>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)inColors;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	params[3] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUVs", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector2>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)uvs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUVs", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector4>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)uvs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUVs", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector2>", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)uvs;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector2>* uvs, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUVs", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector2>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)uvs;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUVs", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)uvs;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs, int32_t start, int32_t length, UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetUVs", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector4>", "System.Int32", "System.Int32", "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)uvs;
	params[2] = (intptr_t)&start;
	params[3] = (intptr_t)&length;
	params[4] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::GetUVs(int32_t channel, mscorlib::System::Collections::Generic::List_1<UnityEngine_CoreModule::UnityEngine::Vector4>* uvs)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetUVs", std::vector<std::string> { "System.Int32", "System.Collections.Generic.List`1<UnityEngine.Vector4>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&channel;
	params[1] = (intptr_t)uvs;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t UnityEngine_CoreModule::UnityEngine::Mesh::get_vertexAttributeCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_vertexAttributeCount");
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
void UnityEngine_CoreModule::UnityEngine::Mesh::SetVertexBufferParams(int32_t vertexCount, IL2CPP::Array<UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor>* attributes)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetVertexBufferParams", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.VertexAttributeDescriptor[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&vertexCount;
	params[1] = (intptr_t)attributes;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::PrintErrorCantAccessIndices()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "PrintErrorCantAccessIndices");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool UnityEngine_CoreModule::UnityEngine::Mesh::CheckCanAccessSubmesh(int32_t submesh, bool errorAboutTriangles)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCanAccessSubmesh", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&submesh;
	params[1] = (intptr_t)&errorAboutTriangles;
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
bool UnityEngine_CoreModule::UnityEngine::Mesh::CheckCanAccessSubmeshTriangles(int32_t submesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCanAccessSubmeshTriangles", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&submesh;
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
bool UnityEngine_CoreModule::UnityEngine::Mesh::CheckCanAccessSubmeshIndices(int32_t submesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckCanAccessSubmeshIndices", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&submesh;
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
IL2CPP::Array<int32_t>* UnityEngine_CoreModule::UnityEngine::Mesh::get_triangles()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_triangles");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_triangles(IL2CPP::Array<int32_t>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_triangles", std::vector<std::string> { "System.Int32[]" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<int32_t>* UnityEngine_CoreModule::UnityEngine::Mesh::GetIndices(int32_t submesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndices", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&submesh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
IL2CPP::Array<int32_t>* UnityEngine_CoreModule::UnityEngine::Mesh::GetIndices(int32_t submesh, bool applyBaseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndices", std::vector<std::string> { "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&submesh;
	params[1] = (intptr_t)&applyBaseVertex;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<int32_t>*)returnValue;
}
uint32_t UnityEngine_CoreModule::UnityEngine::Mesh::GetIndexCount(int32_t submesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetIndexCount", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&submesh;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void UnityEngine_CoreModule::UnityEngine::Mesh::CheckIndicesArrayRange(int32_t valuesLength, int32_t start, int32_t length)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CheckIndicesArrayRange", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&valuesLength;
	params[1] = (intptr_t)&start;
	params[2] = (intptr_t)&length;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTrianglesImpl(int32_t submesh, UnityEngine_CoreModule::UnityEngine::Rendering::IndexFormat indicesFormat, mscorlib::System::Array* triangles, int32_t trianglesArrayLength, int32_t start, int32_t length, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTrianglesImpl", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.IndexFormat", "System.Array", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[8];
	params[0] = (intptr_t)&submesh;
	params[1] = (intptr_t)&indicesFormat;
	params[2] = (intptr_t)triangles;
	params[3] = (intptr_t)&trianglesArrayLength;
	params[4] = (intptr_t)&start;
	params[5] = (intptr_t)&length;
	params[6] = (intptr_t)&calculateBounds;
	params[7] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTriangles(IL2CPP::Array<int32_t>* triangles, int32_t submesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTriangles", std::vector<std::string> { "System.Int32[]", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)triangles;
	params[1] = (intptr_t)&submesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTriangles(IL2CPP::Array<int32_t>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTriangles", std::vector<std::string> { "System.Int32[]", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)triangles;
	params[1] = (intptr_t)&submesh;
	params[2] = (intptr_t)&calculateBounds;
	params[3] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTriangles(IL2CPP::Array<int32_t>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTriangles", std::vector<std::string> { "System.Int32[]", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)triangles;
	params[1] = (intptr_t)&trianglesStart;
	params[2] = (intptr_t)&trianglesLength;
	params[3] = (intptr_t)&submesh;
	params[4] = (intptr_t)&calculateBounds;
	params[5] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTriangles(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, int32_t submesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTriangles", std::vector<std::string> { "System.Collections.Generic.List`1<System.Int32>", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)triangles;
	params[1] = (intptr_t)&submesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTriangles(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTriangles", std::vector<std::string> { "System.Collections.Generic.List`1<System.Int32>", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)triangles;
	params[1] = (intptr_t)&submesh;
	params[2] = (intptr_t)&calculateBounds;
	params[3] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetTriangles(mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* triangles, int32_t trianglesStart, int32_t trianglesLength, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetTriangles", std::vector<std::string> { "System.Collections.Generic.List`1<System.Int32>", "System.Int32", "System.Int32", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)triangles;
	params[1] = (intptr_t)&trianglesStart;
	params[2] = (intptr_t)&trianglesLength;
	params[3] = (intptr_t)&submesh;
	params[4] = (intptr_t)&calculateBounds;
	params[5] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetIndices(IL2CPP::Array<int32_t>* indices, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndices", std::vector<std::string> { "System.Int32[]", "UnityEngine.MeshTopology", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)indices;
	params[1] = (intptr_t)&topology;
	params[2] = (intptr_t)&submesh;
	params[3] = (intptr_t)&calculateBounds;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetIndices(IL2CPP::Array<int32_t>* indices, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndices", std::vector<std::string> { "System.Int32[]", "UnityEngine.MeshTopology", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)indices;
	params[1] = (intptr_t)&topology;
	params[2] = (intptr_t)&submesh;
	params[3] = (intptr_t)&calculateBounds;
	params[4] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetIndices(IL2CPP::Array<int32_t>* indices, int32_t indicesStart, int32_t indicesLength, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndices", std::vector<std::string> { "System.Int32[]", "System.Int32", "System.Int32", "UnityEngine.MeshTopology", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)indices;
	params[1] = (intptr_t)&indicesStart;
	params[2] = (intptr_t)&indicesLength;
	params[3] = (intptr_t)&topology;
	params[4] = (intptr_t)&submesh;
	params[5] = (intptr_t)&calculateBounds;
	params[6] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetIndices(IL2CPP::Array<uint16_t>* indices, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndices", std::vector<std::string> { "System.UInt16[]", "UnityEngine.MeshTopology", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)indices;
	params[1] = (intptr_t)&topology;
	params[2] = (intptr_t)&submesh;
	params[3] = (intptr_t)&calculateBounds;
	params[4] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::SetIndices(IL2CPP::Array<uint16_t>* indices, int32_t indicesStart, int32_t indicesLength, UnityEngine_CoreModule::UnityEngine::MeshTopology topology, int32_t submesh, bool calculateBounds, int32_t baseVertex)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "SetIndices", std::vector<std::string> { "System.UInt16[]", "System.Int32", "System.Int32", "UnityEngine.MeshTopology", "System.Int32", "System.Boolean", "System.Int32" });
	intptr_t* params = new intptr_t[7];
	params[0] = (intptr_t)indices;
	params[1] = (intptr_t)&indicesStart;
	params[2] = (intptr_t)&indicesLength;
	params[3] = (intptr_t)&topology;
	params[4] = (intptr_t)&submesh;
	params[5] = (intptr_t)&calculateBounds;
	params[6] = (intptr_t)&baseVertex;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::RecalculateBounds()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecalculateBounds");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::RecalculateBounds(UnityEngine_CoreModule::UnityEngine::Rendering::MeshUpdateFlags flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecalculateBounds", std::vector<std::string> { "UnityEngine.Rendering.MeshUpdateFlags" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::MarkDynamic()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "MarkDynamic");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::UploadMeshData(bool markNoLongerReadable)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UploadMeshData", std::vector<std::string> { "System.Boolean" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&markNoLongerReadable;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::GetVertexAttribute_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Rendering::VertexAttributeDescriptor& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetVertexAttribute_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.VertexAttributeDescriptor&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::GetSubMesh_Injected(int32_t index, UnityEngine_CoreModule::UnityEngine::Rendering::SubMeshDescriptor& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSubMesh_Injected", std::vector<std::string> { "System.Int32", "UnityEngine.Rendering.SubMeshDescriptor&" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&index;
	params[1] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::get_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& ret)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_bounds_Injected", std::vector<std::string> { "UnityEngine.Bounds&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&ret;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void UnityEngine_CoreModule::UnityEngine::Mesh::set_bounds_Injected(UnityEngine_CoreModule::UnityEngine::Bounds& value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_bounds_Injected", std::vector<std::string> { "UnityEngine.Bounds&" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
