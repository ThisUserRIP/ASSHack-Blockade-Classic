#include "System_Diagnostics_Tracing_EventAttribute.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::EventAttribute::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "EventAttribute");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::EventAttribute::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::EventAttribute::_ctor(int32_t eventId)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&eventId;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
int32_t mscorlib::System::Diagnostics::Tracing::EventAttribute::get_EventId()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_EventId");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		int32_t ret;
		std::memset(&ret, 0, sizeof(int32_t));
		return ret;
	}
	return static_cast<int32_t>(*(int32_t*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventAttribute::set_EventId(int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_EventId", std::vector<std::string> { "System.Int32" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::EventLevel mscorlib::System::Diagnostics::Tracing::EventAttribute::get_Level()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Level");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventLevel ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventLevel));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventLevel>(*(mscorlib::System::Diagnostics::Tracing::EventLevel*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventAttribute::set_Level(mscorlib::System::Diagnostics::Tracing::EventLevel value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Level", std::vector<std::string> { "System.Diagnostics.Tracing.EventLevel" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::EventKeywords mscorlib::System::Diagnostics::Tracing::EventAttribute::get_Keywords()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Keywords");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventKeywords ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventKeywords));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventKeywords>(*(mscorlib::System::Diagnostics::Tracing::EventKeywords*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::EventOpcode mscorlib::System::Diagnostics::Tracing::EventAttribute::get_Opcode()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Opcode");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventOpcode ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventOpcode));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventOpcode>(*(mscorlib::System::Diagnostics::Tracing::EventOpcode*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventAttribute::set_Opcode(mscorlib::System::Diagnostics::Tracing::EventOpcode value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Opcode", std::vector<std::string> { "System.Diagnostics.Tracing.EventOpcode" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
bool mscorlib::System::Diagnostics::Tracing::EventAttribute::get_IsOpcodeSet()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_IsOpcodeSet");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		bool ret;
		std::memset(&ret, 0, sizeof(bool));
		return ret;
	}
	return static_cast<bool>(*(bool*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::EventTask mscorlib::System::Diagnostics::Tracing::EventAttribute::get_Task()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Task");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventTask ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventTask));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventTask>(*(mscorlib::System::Diagnostics::Tracing::EventTask*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventAttribute::set_Task(mscorlib::System::Diagnostics::Tracing::EventTask value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Task", std::vector<std::string> { "System.Diagnostics.Tracing.EventTask" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
uint8_t mscorlib::System::Diagnostics::Tracing::EventAttribute::get_Version()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Version");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		uint8_t ret;
		std::memset(&ret, 0, sizeof(uint8_t));
		return ret;
	}
	return static_cast<uint8_t>(*(uint8_t*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::EventAttribute::get_Message()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Message");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::EventAttribute::set_Message(mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_Message", std::vector<std::string> { "System.String" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Diagnostics::Tracing::EventTags mscorlib::System::Diagnostics::Tracing::EventAttribute::get_Tags()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Tags");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventTags ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventTags));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventTags>(*(mscorlib::System::Diagnostics::Tracing::EventTags*)il2cpp_object_unbox(returnValue));
}
mscorlib::System::Diagnostics::Tracing::EventActivityOptions mscorlib::System::Diagnostics::Tracing::EventAttribute::get_ActivityOptions()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_ActivityOptions");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	if (returnValue == nullptr)
	{
		mscorlib::System::Diagnostics::Tracing::EventActivityOptions ret;
		std::memset(&ret, 0, sizeof(mscorlib::System::Diagnostics::Tracing::EventActivityOptions));
		return ret;
	}
	return static_cast<mscorlib::System::Diagnostics::Tracing::EventActivityOptions>(*(mscorlib::System::Diagnostics::Tracing::EventActivityOptions*)il2cpp_object_unbox(returnValue));
}
void mscorlib::System::Diagnostics::Tracing::EventAttribute::set_ActivityOptions(mscorlib::System::Diagnostics::Tracing::EventActivityOptions value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "set_ActivityOptions", std::vector<std::string> { "System.Diagnostics.Tracing.EventActivityOptions" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
