#include "System_Diagnostics_Tracing_ManifestBuilder.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "ManifestBuilder");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::_ctor(mscorlib::System::String* providerName, mscorlib::System::Guid providerGuid, mscorlib::System::String* dllName, mscorlib::System::Resources::ResourceManager* resources, mscorlib::System::Diagnostics::Tracing::EventManifestOptions flags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Guid", "System.String", "System.Resources.ResourceManager", "System.Diagnostics.Tracing.EventManifestOptions" });
	intptr_t* params = new intptr_t[5];
	params[0] = (intptr_t)providerName;
	params[1] = (intptr_t)&providerGuid;
	params[2] = (intptr_t)dllName;
	params[3] = (intptr_t)resources;
	params[4] = (intptr_t)&flags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::AddOpcode(mscorlib::System::String* name, int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddOpcode", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::AddTask(mscorlib::System::String* name, int32_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddTask", std::vector<std::string> { "System.String", "System.Int32" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::AddKeyword(mscorlib::System::String* name, uint64_t value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddKeyword", std::vector<std::string> { "System.String", "System.UInt64" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::StartEvent(mscorlib::System::String* eventName, mscorlib::System::Diagnostics::Tracing::EventAttribute* eventAttribute)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "StartEvent", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.EventAttribute" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventName;
	params[1] = (intptr_t)eventAttribute;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::AddEventParameter(mscorlib::System::Type* type, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "AddEventParameter", std::vector<std::string> { "System.Type", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)type;
	params[1] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::EndEvent()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "EndEvent");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
IL2CPP::Array<uint8_t>* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::CreateManifest()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateManifest");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (IL2CPP::Array<uint8_t>*)returnValue;
}
mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::get_Errors()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Errors");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::IList_1<mscorlib::System::String>*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::ManifestError(mscorlib::System::String* msg, bool runtimeCritical)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ManifestError", std::vector<std::string> { "System.String", "System.Boolean" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)msg;
	params[1] = (intptr_t)&runtimeCritical;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::CreateManifestString()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "CreateManifestString");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::WriteNameAndMessageAttribs(mscorlib::System::Text::StringBuilder* stringBuilder, mscorlib::System::String* elementName, mscorlib::System::String* name)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteNameAndMessageAttribs", std::vector<std::string> { "System.Text.StringBuilder", "System.String", "System.String" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)stringBuilder;
	params[1] = (intptr_t)elementName;
	params[2] = (intptr_t)name;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::WriteMessageAttrib(mscorlib::System::Text::StringBuilder* stringBuilder, mscorlib::System::String* elementName, mscorlib::System::String* name, mscorlib::System::String* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMessageAttrib", std::vector<std::string> { "System.Text.StringBuilder", "System.String", "System.String", "System.String" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)stringBuilder;
	params[1] = (intptr_t)elementName;
	params[2] = (intptr_t)name;
	params[3] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetLocalizedMessage(mscorlib::System::String* key, mscorlib::System::Globalization::CultureInfo* ci, bool etwFormat)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLocalizedMessage", std::vector<std::string> { "System.String", "System.Globalization.CultureInfo", "System.Boolean" });
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)key;
	params[1] = (intptr_t)ci;
	params[2] = (intptr_t)&etwFormat;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Collections::Generic::List_1<mscorlib::System::Globalization::CultureInfo>* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetSupportedCultures(mscorlib::System::Resources::ResourceManager* resources)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetSupportedCultures", std::vector<std::string> { "System.Resources.ResourceManager" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)resources;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Collections::Generic::List_1<mscorlib::System::Globalization::CultureInfo>*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetLevelName(mscorlib::System::Diagnostics::Tracing::EventLevel level)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetLevelName", std::vector<std::string> { "System.Diagnostics.Tracing.EventLevel" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)&level;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetTaskName(mscorlib::System::Diagnostics::Tracing::EventTask task, mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTaskName", std::vector<std::string> { "System.Diagnostics.Tracing.EventTask", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&task;
	params[1] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetOpcodeName(mscorlib::System::Diagnostics::Tracing::EventOpcode opcode, mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetOpcodeName", std::vector<std::string> { "System.Diagnostics.Tracing.EventOpcode", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&opcode;
	params[1] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetKeywords(uint64_t keywords, mscorlib::System::String* eventName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetKeywords", std::vector<std::string> { "System.UInt64", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&keywords;
	params[1] = (intptr_t)eventName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::GetTypeName(mscorlib::System::Type* type)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetTypeName", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)type;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::ManifestBuilder::UpdateStringBuilder(mscorlib::System::Text::StringBuilder& stringBuilder, mscorlib::System::String* eventMessage, int32_t startIndex, int32_t count)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "UpdateStringBuilder", std::vector<std::string> { "System.Text.StringBuilder&", "System.String", "System.Int32", "System.Int32" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)&stringBuilder;
	params[1] = (intptr_t)eventMessage;
	params[2] = (intptr_t)&startIndex;
	params[3] = (intptr_t)&count;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, nullptr, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::ManifestBuilder::TranslateToManifestConvention(mscorlib::System::String* eventMessage, mscorlib::System::String* evtName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TranslateToManifestConvention", std::vector<std::string> { "System.String", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)eventMessage;
	params[1] = (intptr_t)evtName;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
int32_t mscorlib::System::Diagnostics::Tracing::ManifestBuilder::TranslateIndexToManifestConvention(int32_t idx, mscorlib::System::String* evtName)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "TranslateIndexToManifestConvention", std::vector<std::string> { "System.Int32", "System.String" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&idx;
	params[1] = (intptr_t)evtName;
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
