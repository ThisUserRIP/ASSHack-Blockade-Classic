#include "System_Net_ServicePointScheduler_AsyncManualResetEvent___c.h"

IL2CPP::Il2CppClass* System::System::Net::ServicePointScheduler_AsyncManualResetEvent___c::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(System::System::Net::ServicePointScheduler_AsyncManualResetEvent::GetIl2CppClass(), "<>c");
	return il2cppclass;
}
mscorlib::System::Type* System::System::Net::ServicePointScheduler_AsyncManualResetEvent___c::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void System::System::Net::ServicePointScheduler_AsyncManualResetEvent___c::_cctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".cctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void System::System::Net::ServicePointScheduler_AsyncManualResetEvent___c::_ctor()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
bool System::System::Net::ServicePointScheduler_AsyncManualResetEvent___c::_Set_b__4_0(mscorlib::System::Object* s)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "<Set>b__4_0", std::vector<std::string> { "System.Object" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)s;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
