#include "System_Diagnostics_Tracing_EventSource_OverideEventProvider.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventSource_OverideEventProvider::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIl2CppNestedType(mscorlib::System::Diagnostics::Tracing::EventSource::GetIl2CppClass(), "OverideEventProvider");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventSource_OverideEventProvider::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::EventSource_OverideEventProvider::_ctor(mscorlib::System::Diagnostics::Tracing::EventSource* eventSource)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Diagnostics.Tracing.EventSource" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)eventSource;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventSource_OverideEventProvider::OnControllerCommand(mscorlib::System::Diagnostics::Tracing::ControllerCommand command, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* arguments, int32_t perEventSourceSessionId, int32_t etwSessionId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "OnControllerCommand", std::vector<std::string> { "System.Diagnostics.Tracing.ControllerCommand", "System.Collections.Generic.IDictionary`2<System.String,System.String>", "System.Int32", "System.Int32" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&command;
	params[1] = (intptr_t)arguments;
	params[2] = (intptr_t)&perEventSourceSessionId;
	params[3] = (intptr_t)&etwSessionId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
