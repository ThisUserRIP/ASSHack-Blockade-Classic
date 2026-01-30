#include "ChunkBuilder.h"

IL2CPP::Il2CppClass* Assembly_CSharp::ChunkBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "ChunkBuilder");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::ChunkBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
UnityEngine_CoreModule::UnityEngine::Mesh* Assembly_CSharp::ChunkBuilder::BuildChunk(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, Assembly_CSharp::Chunk* chunk)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildChunk", std::vector<std::string> { "UnityEngine.Mesh", "Chunk" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)chunk;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (UnityEngine_CoreModule::UnityEngine::Mesh*)returnValue;
}
void Assembly_CSharp::ChunkBuilder::BuildChunkLighting(UnityEngine_CoreModule::UnityEngine::Mesh* mesh, Assembly_CSharp::Chunk* chunk)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildChunkLighting", std::vector<std::string> { "UnityEngine.Mesh", "Chunk" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)mesh;
	params[1] = (intptr_t)chunk;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ChunkBuilder::Build(Assembly_CSharp::Chunk* chunk, bool onlyLight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Build", std::vector<std::string> { "Chunk", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)chunk;
	params[1] = (intptr_t)&onlyLight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::ChunkBuilder::BuildChunkPro(UnityEngine_CoreModule::UnityEngine::MeshFilter* filter, UnityEngine_PhysicsModule::UnityEngine::MeshCollider* collider, Assembly_CSharp::Chunk* chunk)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildChunkPro", std::vector<std::string> { "UnityEngine.MeshFilter", "UnityEngine.MeshCollider", "Chunk" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)filter;
	params[1] = (intptr_t)collider;
	params[2] = (intptr_t)chunk;
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
void Assembly_CSharp::ChunkBuilder::BuildChunkCollider(UnityEngine_CoreModule::UnityEngine::MeshFilter* filter, UnityEngine_PhysicsModule::UnityEngine::MeshCollider* collider)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildChunkCollider", std::vector<std::string> { "UnityEngine.MeshFilter", "UnityEngine.MeshCollider" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)filter;
	params[1] = (intptr_t)collider;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool Assembly_CSharp::ChunkBuilder::Build(Assembly_CSharp::Chunk* chunk, bool onlyLight, bool solidignore)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Build", std::vector<std::string> { "Chunk", "System.Boolean", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)chunk;
	params[1] = (intptr_t)&onlyLight;
	params[2] = (intptr_t)&solidignore;
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
void Assembly_CSharp::ChunkBuilder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ChunkBuilder::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
