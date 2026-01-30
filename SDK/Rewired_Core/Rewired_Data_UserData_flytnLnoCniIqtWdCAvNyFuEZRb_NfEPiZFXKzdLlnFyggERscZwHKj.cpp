#include "Rewired_Data_UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj.h"

IL2CPP::Il2CppClass* Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb::GetIl2CppClass(), "NfEPiZFXKzdLlnFyggERscZwHKj");
	return il2cppclass;
}
mscorlib::System::Type* Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
int32_t Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj::get_Item(Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj_yRvRAzTzBlGTvzVzvHQfBIsZWaF type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Item", std::vector<std::string> { "Rewired.Data.UserData/flytnLnoCniIqtWdCAvNyFuEZRb/NfEPiZFXKzdLlnFyggERscZwHKj/yRvRAzTzBlGTvzVzvHQfBIsZWaF" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
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
void Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj::set_Item(Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj_yRvRAzTzBlGTvzVzvHQfBIsZWaF type, int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Item", std::vector<std::string> { "Rewired.Data.UserData/flytnLnoCniIqtWdCAvNyFuEZRb/NfEPiZFXKzdLlnFyggERscZwHKj/yRvRAzTzBlGTvzVzvHQfBIsZWaF", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&type;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj::_ctor(int32_t origId, int32_t otherId, int32_t finalId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)&origId;
	params[1] = (intptr_t)&otherId;
	params[2] = (intptr_t)&finalId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* Rewired_Core::Rewired::Data::UserData_flytnLnoCniIqtWdCAvNyFuEZRb_NfEPiZFXKzdLlnFyggERscZwHKj::ToString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ToString");
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
