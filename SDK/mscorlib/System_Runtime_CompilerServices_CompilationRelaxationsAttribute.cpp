#include "System_Runtime_CompilerServices_CompilationRelaxationsAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Runtime.CompilerServices", "CompilationRelaxationsAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(int32_t relaxations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&relaxations;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::_ctor(mscorlib::System::Runtime::CompilerServices::CompilationRelaxations relaxations)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Runtime.CompilerServices.CompilationRelaxations" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&relaxations;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Runtime::CompilerServices::CompilationRelaxationsAttribute::get_CompilationRelaxations()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_CompilationRelaxations");
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
