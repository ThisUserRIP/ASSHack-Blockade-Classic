#include "ChunkSunLightComputer.h"

IL2CPP::Il2CppClass* Assembly_CSharp::ChunkSunLightComputer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Assembly-CSharp.dll", "", "ChunkSunLightComputer");
	return il2cppclass;
}
mscorlib::System::Type* Assembly_CSharp::ChunkSunLightComputer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Assembly_CSharp::ChunkSunLightComputer::ComputeRays(int32_t cx, int32_t cz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeRays", std::vector<std::string> { "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&cx;
	params[1] = (intptr_t)&cz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ChunkSunLightComputer::Scatter(Assembly_CSharp::ColumnMap* columnMap, int32_t cx, int32_t cz)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Scatter", std::vector<std::string> { "ColumnMap", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)columnMap;
	params[1] = (intptr_t)&cx;
	params[2] = (intptr_t)&cz;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ChunkSunLightComputer::Scatter(Assembly_CSharp::ColumnMap* columnMap, mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Vector3i>* list)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Scatter", std::vector<std::string> { "ColumnMap", "System.Collections.Generic.List`1<Vector3i>" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)columnMap;
	params[1] = (intptr_t)list;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t Assembly_CSharp::ChunkSunLightComputer::ComputeMaxY(Assembly_CSharp::SunLightMap* lightmap, int32_t x, int32_t z)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ComputeMaxY", std::vector<std::string> { "SunLightMap", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)lightmap;
	params[1] = (intptr_t)&x;
	params[2] = (intptr_t)&z;
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
void Assembly_CSharp::ChunkSunLightComputer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void Assembly_CSharp::ChunkSunLightComputer::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
