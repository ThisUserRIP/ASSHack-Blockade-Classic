#include "System_Diagnostics_Tracing_EventCommandEventArgs.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "EventCommandEventArgs");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
mscorlib::System::Diagnostics::Tracing::EventCommand mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs::get_Command()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Command");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventCommand ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventCommand));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventCommand>(*(mscorlib::System::Diagnostics::Tracing::EventCommand*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs::set_Command(mscorlib::System::Diagnostics::Tracing::EventCommand value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Command", std::vector<std::string> { "System.Diagnostics.Tracing.EventCommand" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs::get_Arguments()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Arguments");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs::set_Arguments(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Arguments", std::vector<std::string> { "System.Collections.Generic.IDictionary`2<System.String,System.String>" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::EventCommandEventArgs::_ctor(mscorlib::System::Diagnostics::Tracing::EventCommand command, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* arguments, mscorlib::System::Diagnostics::Tracing::EventSource* eventSource, mscorlib::System::Diagnostics::Tracing::EventListener* listener, int32_t perEventSourceSessionId, int32_t etwSessionId, bool enable, mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventKeywords matchAnyKeyword)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Diagnostics.Tracing.EventCommand", "System.Collections.Generic.IDictionary`2<System.String,System.String>", "System.Diagnostics.Tracing.EventSource", "System.Diagnostics.Tracing.EventListener", "System.Int32", "System.Int32", "System.Boolean", "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventKeywords" });
	intptr_t* params = new intptr_t[9];
	params[0] = (intptr_t)&command;
	params[1] = (intptr_t)arguments;
	params[2] = (intptr_t)eventSource;
	params[3] = (intptr_t)listener;
	params[4] = (intptr_t)&perEventSourceSessionId;
	params[5] = (intptr_t)&etwSessionId;
	params[6] = (intptr_t)&enable;
	params[7] = (intptr_t)&level;
	params[8] = (intptr_t)&matchAnyKeyword;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
