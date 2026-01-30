#include "System_DefaultBinder_BinderState.h"

IL2CPP::Il2CppClass* mscorlib::System::DefaultBinder_BinderState::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::DefaultBinder::GetIl2CppClass(), "BinderState");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::DefaultBinder_BinderState::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::DefaultBinder_BinderState::_ctor(IL2CPP::Array<int32_t>* argsMap, int32_t originalSize, bool isParamArray)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32[]", "System.Int32", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)argsMap;
	params[1] = (intptr_t)&originalSize;
	params[2] = (intptr_t)&isParamArray;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
