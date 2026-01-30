#include "CrossBuilder.h"

IL2CPP::Il2CppClass* Assembly_CSharp::CrossBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "CrossBuilder");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::CrossBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::CrossBuilder::Build(Assembly_CSharp::Vector3i localPos, Assembly_CSharp::Vector3i worldPos, Assembly_CSharp::MeshBuilder* mesh, bool onlyLight)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Build", std::vector<std::string> { "Vector3i", "Vector3i", "MeshBuilder", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&localPos;
	params[1] = (intptr_t)&worldPos;
	params[2] = (intptr_t)mesh;
	params[3] = (intptr_t)&onlyLight;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::CrossBuilder::BuildCross(UnityEngine_CoreModule::UnityEngine::Vector3 localPos, Assembly_CSharp::Vector3i worldPos, Assembly_CSharp::MeshBuilder* mesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildCross", std::vector<std::string> { "UnityEngine.Vector3", "Vector3i", "MeshBuilder" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&localPos;
	params[1] = (intptr_t)&worldPos;
	params[2] = (intptr_t)mesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::CrossBuilder::BuildCrossLight(Assembly_CSharp::Vector3i pos, Assembly_CSharp::MeshBuilder* mesh)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "BuildCrossLight", std::vector<std::string> { "Vector3i", "MeshBuilder" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)mesh;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
Assembly_CSharp::MeshBuilder* Assembly_CSharp::CrossBuilder::Build(Assembly_CSharp::CrossBlock* cross)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Build", std::vector<std::string> { "CrossBlock" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)cross;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (Assembly_CSharp::MeshBuilder*)returnValue;
}
void Assembly_CSharp::CrossBuilder::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::CrossBuilder::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
