#include "System_Text_RegularExpressions_RegexCharClass_SingleRangeComparer.h"

IL2CPP::Il2CppClass* System::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Text::RegularExpressions::RegexCharClass::GetIl2CppClass(), "SingleRangeComparer");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t System::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::Compare(System::Text::RegularExpressions::RegexCharClass_SingleRange* x, System::Text::RegularExpressions::RegexCharClass_SingleRange* y)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Compare", std::vector<std::string> { "System.Text.RegularExpressions.RegexCharClass/SingleRange", "System.Text.RegularExpressions.RegexCharClass/SingleRange" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)x;
	params[1] = (intptr_t)y;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
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
void System::System::Text::RegularExpressions::RegexCharClass_SingleRangeComparer::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
