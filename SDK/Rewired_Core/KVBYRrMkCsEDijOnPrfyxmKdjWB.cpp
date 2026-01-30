#include "KVBYRrMkCsEDijOnPrfyxmKdjWB.h"

IL2CPP::Il2CppClass* Rewired_Core::KVBYRrMkCsEDijOnPrfyxmKdjWB::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "", "KVBYRrMkCsEDijOnPrfyxmKdjWB");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::KVBYRrMkCsEDijOnPrfyxmKdjWB::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::KVBYRrMkCsEDijOnPrfyxmKdjWB::_ctor(intptr_t pointer)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.IntPtr" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&pointer;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
