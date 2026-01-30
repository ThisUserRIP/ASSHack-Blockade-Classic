#include "Rewired_Utils_Interfaces_IExportToJson.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Utils::Interfaces::IExportToJson::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("Rewired_Core.dll", "Rewired.Utils.Interfaces", "IExportToJson");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Utils::Interfaces::IExportToJson::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void Rewired_Core::Rewired::Utils::Interfaces::IExportToJson::WriteJson(mscorlib::System::Text::StringBuilder* stringBuilder, mscorlib::System::Action_2<mscorlib::System::Text::StringBuilder, mscorlib::System::Object>* appendValueDelegate)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteJson", std::vector<std::string> { "System.Text.StringBuilder", "System.Action`2<System.Text.StringBuilder,System.Object>" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)stringBuilder;
	params[1] = (intptr_t)appendValueDelegate;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
