#include "System_Diagnostics_Tracing_EventDispatcher.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventDispatcher::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "EventDispatcher");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventDispatcher::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::EventDispatcher::_ctor(mscorlib::System::Diagnostics::Tracing::EventDispatcher* next, IL2CPP::Array<bool>* eventEnabled, mscorlib::System::Diagnostics::Tracing::EventListener* listener)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Diagnostics.Tracing.EventDispatcher", "System.Boolean[]", "System.Diagnostics.Tracing.EventListener" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)next;
	params[1] = (intptr_t)eventEnabled;
	params[2] = (intptr_t)listener;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
