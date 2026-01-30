#include "System_Diagnostics_Tracing_TraceLoggingTypeInfo.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "TraceLoggingTypeInfo");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::_ctor(mscorlib::System::Type* dataType)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type" });
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)dataType;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::_ctor(mscorlib::System::Type* dataType, mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventLevel level, mscorlib::System::Diagnostics::Tracing::EventOpcode opcode, mscorlib::System::Diagnostics::Tracing::EventKeywords keywords, mscorlib::System::Diagnostics::Tracing::EventTags tags)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.Type", "System.String", "System.Diagnostics.Tracing.EventLevel", "System.Diagnostics.Tracing.EventOpcode", "System.Diagnostics.Tracing.EventKeywords", "System.Diagnostics.Tracing.EventTags" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)dataType;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&level;
	params[3] = (intptr_t)&opcode;
	params[4] = (intptr_t)&keywords;
	params[5] = (intptr_t)&tags;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::String* mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::get_Name()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_Name");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::String*)returnValue;
}
mscorlib::System::Diagnostics::Tracing::EventLevel mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::get_Level()
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
mscorlib::System::Diagnostics::Tracing::EventOpcode mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::get_Opcode()
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
mscorlib::System::Diagnostics::Tracing::EventKeywords mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::get_Keywords()
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
mscorlib::System::Diagnostics::Tracing::EventTags mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::get_Tags()
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
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::get_DataType()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "get_DataType");
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Type*)returnValue;
}
void mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::WriteMetadata(mscorlib::System::Diagnostics::Tracing::TraceLoggingMetadataCollector* collector, mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::EventFieldFormat format)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteMetadata", std::vector<std::string> { "System.Diagnostics.Tracing.TraceLoggingMetadataCollector", "System.String", "System.Diagnostics.Tracing.EventFieldFormat" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[3];
	params[0] = (intptr_t)collector;
	params[1] = (intptr_t)name;
	params[2] = (intptr_t)&format;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::WriteObjectData(mscorlib::System::Diagnostics::Tracing::TraceLoggingDataCollector* collector, mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "WriteObjectData", std::vector<std::string> { "System.Diagnostics.Tracing.TraceLoggingDataCollector", "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)collector;
	params[1] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
mscorlib::System::Object* mscorlib::System::Diagnostics::Tracing::TraceLoggingTypeInfo::GetData(mscorlib::System::Object* value)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "GetData", std::vector<std::string> { "System.Object" });
	const IL2CPP::MethodInfo* virtualAddress = il2cpp_object_get_virtual_method(this, address);
	intptr_t* params = new intptr_t[1];
	params[0] = (intptr_t)value;
	Il2CppException* Il2CppException = nullptr;
	IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(virtualAddress, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
	return (mscorlib::System::Object*)returnValue;
}
