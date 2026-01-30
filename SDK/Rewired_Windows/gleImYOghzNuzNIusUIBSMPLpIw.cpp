#include "gleImYOghzNuzNIusUIBSMPLpIw.h"

IL2CPP::Il2CppClass* Rewired_Windows::gleImYOghzNuzNIusUIBSMPLpIw::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Windows.dll", "", "gleImYOghzNuzNIusUIBSMPLpIw");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Windows::gleImYOghzNuzNIusUIBSMPLpIw::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Windows::gleImYOghzNuzNIusUIBSMPLpIw::_ctor(uint8_t reportId, uint16_t usagePage, uint16_t usage, int32_t dataIndex, int32_t bitSize)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Byte", "System.UInt16", "System.UInt16", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)&reportId;
	params[1] = (intptr_t)&usagePage;
	params[2] = (intptr_t)&usage;
	params[3] = (intptr_t)&dataIndex;
	params[4] = (intptr_t)&bitSize;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Windows::gleImYOghzNuzNIusUIBSMPLpIw::Clear()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Clear");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
