#include "LightComputer.h"

IL2CPP::Il2CppClass* Assembly_CSharp::LightComputer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "LightComputer");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::LightComputer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::LightComputer::RecomputeLightAtPosition(Assembly_CSharp::Vector3i pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RecomputeLightAtPosition", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::LightComputer::Scatter(Assembly_CSharp::Vector3i pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Scatter", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::LightComputer::Scatter(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Scatter", std::vector<std::string> { "System.Collections.Generic.List`1<Vector3i>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::LightComputer::RemoveLight(Assembly_CSharp::Vector3i pos)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveLight", std::vector<std::string> { "Vector3i" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pos;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::LightComputer::RemoveLight(mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "RemoveLight", std::vector<std::string> { "System.Collections.Generic.List`1<Vector3i>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::LightComputer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::LightComputer::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
