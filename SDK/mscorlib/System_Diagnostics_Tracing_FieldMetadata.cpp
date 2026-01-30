#include "System_Diagnostics_Tracing_FieldMetadata.h"

IL2CPP::Il2CppClass* mscorlib::System::Diagnostics::Tracing::FieldMetadata::GetIl2CppClass()
{
	static IL2CPP::Il2CppClass* il2cppclass = GetIL2CppClass("mscorlib.dll", "System.Diagnostics.Tracing", "FieldMetadata");
	return il2cppclass;
}
mscorlib::System::Type* mscorlib::System::Diagnostics::Tracing::FieldMetadata::GetIl2CppType()
{
	static mscorlib::System::Type* il2cpptype = mscorlib::System::Type::internal_from_handle((intptr_t)il2cpp_class_get_type(GetIl2CppClass()));
	return il2cpptype;
}
void mscorlib::System::Diagnostics::Tracing::FieldMetadata::_ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType type, mscorlib::System::Diagnostics::Tracing::EventFieldTags tags, bool variableCount)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.TraceLoggingDataType", "System.Diagnostics.Tracing.EventFieldTags", "System.Boolean" });
	intptr_t* params = new intptr_t[4];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&type;
	params[2] = (intptr_t)&tags;
	params[3] = (intptr_t)&variableCount;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::FieldMetadata::_ctor(mscorlib::System::String* name, mscorlib::System::Diagnostics::Tracing::TraceLoggingDataType dataType, mscorlib::System::Diagnostics::Tracing::EventFieldTags tags, uint8_t countFlags, uint16_t fixedCount, IL2CPP::Array<uint8_t>* custom)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), ".ctor", std::vector<std::string> { "System.String", "System.Diagnostics.Tracing.TraceLoggingDataType", "System.Diagnostics.Tracing.EventFieldTags", "System.Byte", "System.UInt16", "System.Byte[]" });
	intptr_t* params = new intptr_t[6];
	params[0] = (intptr_t)name;
	params[1] = (intptr_t)&dataType;
	params[2] = (intptr_t)&tags;
	params[3] = (intptr_t)&countFlags;
	params[4] = (intptr_t)&fixedCount;
	params[5] = (intptr_t)custom;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::FieldMetadata::IncrementStructFieldCount()
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "IncrementStructFieldCount");
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, nullptr, &Il2CppException);
	Il2CppExceptionMessage(Il2CppException);
}
void mscorlib::System::Diagnostics::Tracing::FieldMetadata::Encode(int32_t& pos, IL2CPP::Array<uint8_t>* metadata)
{
	static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "Encode", std::vector<std::string> { "System.Int32&", "System.Byte[]" });
	intptr_t* params = new intptr_t[2];
	params[0] = (intptr_t)&pos;
	params[1] = (intptr_t)metadata;
	Il2CppException* Il2CppException = nullptr;
	il2cpp_runtime_invoke(address, this, (void**)params, &Il2CppException);
	delete [] params;
	Il2CppExceptionMessage(Il2CppException);
}
