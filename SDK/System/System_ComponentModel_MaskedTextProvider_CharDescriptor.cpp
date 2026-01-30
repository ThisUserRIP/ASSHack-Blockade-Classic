#include "System_ComponentModel_MaskedTextProvider_CharDescriptor.h"

IL2CPP::Il2CppClass* System::System::ComponentModel::MaskedTextProvider_CharDescriptor::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::ComponentModel::MaskedTextProvider::GetIl2CppClass(), "CharDescriptor");
	return il2cppclass;
}
mscorlib::System::Type* System::System::ComponentModel::MaskedTextProvider_CharDescriptor::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::ComponentModel::MaskedTextProvider_CharDescriptor::_ctor(int32_t maskPos, System::ComponentModel::MaskedTextProvider_CharType charType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.ComponentModel.MaskedTextProvider/CharType" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&maskPos;
	params[1] = (intptr_t)&charType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* System::System::ComponentModel::MaskedTextProvider_CharDescriptor::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
