#include "System_ParameterizedStrings_LowLevelStack.h"

IL2CPP::Il2CppClass* mscorlib::System::ParameterizedStrings_LowLevelStack::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::ParameterizedStrings::GetIl2CppClass(), "LowLevelStack");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::ParameterizedStrings_LowLevelStack::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::ParameterizedStrings_LowLevelStack::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::ParameterizedStrings_FormatParam mscorlib::System::ParameterizedStrings_LowLevelStack::Pop()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Pop");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::ParameterizedStrings_FormatParam ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::ParameterizedStrings_FormatParam));
		return ret;
	}
	return static_cast<mscorlib::System::ParameterizedStrings_FormatParam>(*(mscorlib::System::ParameterizedStrings_FormatParam*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::ParameterizedStrings_LowLevelStack::Push(mscorlib::System::ParameterizedStrings_FormatParam item)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Push", std::vector<std::string> { "System.ParameterizedStrings/FormatParam" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&item;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::ParameterizedStrings_LowLevelStack::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
